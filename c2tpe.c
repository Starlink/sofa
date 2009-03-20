#include "sofam.h"
 
void iauC2tpe(double tta, double ttb, double uta, double utb,
              double dpsi, double deps, double xp, double yp,
              double rc2t[3][3])
/*
**  - - - - - - - - -
**   i a u C 2 t p e
**  - - - - - - - - -
**
**  Form the celestial to terrestrial matrix given the date, the UT1,
**  the nutation and the polar motion.  IAU 2000.
**
**  This function is part of the International Astronomical Union's
**  SOFA (Standards Of Fundamental Astronomy) software collection.
**
**  Status:  support function.
**
**  Given:
**     tta,ttb    double        TT as a 2-part Julian Date (Note 1)
**     uta,utb    double        UT1 as a 2-part Julian Date (Note 1)
**     dpsi,deps  double        nutation (Note 2)
**     xp,yp      double        coordinates of the pole (radians, Note 3)
**
**  Returned:
**     rc2t       double[3][3]  celestial-to-terrestrial matrix (Note 4)
**
**  Notes:
**
**  1) The TT and UT1 dates tta+ttb and uta+utb are Julian Dates,
**     apportioned in any convenient way between the arguments uta and
**     utb.  For example, JD(UT1)=2450123.7 could be expressed in any of
**     these ways, among others:
**
**             uta            utb
**
**         2450123.7           0.0       (JD method)
**         2451545.0       -1421.3       (J2000 method)
**         2400000.5       50123.2       (MJD method)
**         2450123.5           0.2       (date & time method)
**
**     The JD method is the most natural and convenient to use in
**     cases where the loss of several decimal digits of resolution is
**     acceptable.  The J2000 and MJD methods are good compromises
**     between resolution and convenience.  In the case of uta,utb, the
**     date & time method is best matched to the Earth rotation angle
**     algorithm used:  maximum precision is delivered when the uta
**     argument is for 0hrs UT1 on the day in question and the utb
**     argument lies in the range 0 to 1, or vice versa.
**
**  2) The caller is responsible for providing the nutation components;
**     they are in longitude and obliquity, in radians and are with
**     respect to the equinox and ecliptic of date.  For high-accuracy
**     applications, free core nutation should be included as well as
**     any other relevant corrections to the position of the CIP.
**
**  3) The arguments xp and yp are the "coordinates of the pole", in
**     radians, which position the Celestial Intermediate Pole in the
**     International Terrestrial Reference System (see IERS Conventions
**     2003).  In a geocentric right-handed triad u,v,w, where the
**     w-axis points at the north geographic pole, the v-axis points
**     towards the origin of longitudes and the u axis completes the
**     system, xp = +u and yp = -v.
**
**  4) The matrix rc2t transforms from celestial to terrestrial
**     coordinates:
**
**        [TRS] = RPOM * R_3(GST) * RBPN * [CRS]
**
**              = rc2t * [CRS]
**
**     where [CRS] is a vector in the Geocentric Celestial Reference
**     System and [TRS] is a vector in the International Terrestrial
**     Reference System (see IERS Conventions 2003), RBPN is the
**     bias-precession-nutation matrix, GST is the Greenwich (apparent)
**     Sidereal Time and RPOM is the polar motion matrix.
**
**  5) Although its name does not include "00", This function is in fact
**     specific to the IAU 2000 models.
**
**  Called:
**     iauPn00      bias/precession/nutation results, IAU 2000
**     iauGmst00    Greenwich mean sidereal time, IAU 2000
**     iauSp00      the TIO locator s', IERS 2000
**     iauEe00      equation of the equinoxes, IAU 2000
**     iauPom00     polar motion matrix
**     iauC2teqx    form equinox-based celestial-to-terrestrial matrix
**
**  Reference:
**
**     McCarthy, D. D., Petit, G. (eds.), IERS Conventions (2003),
**     IERS Technical Note No. 32, BKG (2004)
**
**  This revision:  2008 May 13
**
**  Copyright (C) 2008 IAU SOFA Review Board.  See notes at end.
*/
{
   double epsa, rb[3][3], rp[3][3], rbp[3][3], rn[3][3],
          rbpn[3][3], gmst, ee, sp, rpom[3][3];


/* Form the celestial-to-true matrix for this TT. */
   iauPn00(tta, ttb, dpsi, deps, &epsa, rb, rp, rbp, rn, rbpn);
 
/* Predict the Greenwich Mean Sidereal Time for this UT1 and TT. */
   gmst = iauGmst00(uta, utb, tta, ttb);
 
/* Predict the equation of the equinoxes given TT and nutation. */
   ee = iauEe00(tta, ttb, epsa, dpsi);
 
/* Estimate s'. */
   sp = iauSp00(tta, ttb);
 
/* Form the polar motion matrix. */
   iauPom00(xp, yp, sp, rpom);
 
/* Combine to form the celestial-to-terrestrial matrix. */
   iauC2teqx(rbpn, gmst + ee, rpom, rc2t);
 
   return;

/*-----------------------------------------------------------------------
**
**  Copyright (C) 2008
**  Standards Of Fundamental Astronomy Review Board
**  of the International Astronomical Union.
**
**  =====================
**  SOFA Software License
**  =====================
**
**  NOTICE TO USER:
**
**  BY USING THIS SOFTWARE YOU ACCEPT THE FOLLOWING TERMS AND CONDITIONS
**  WHICH APPLY TO ITS USE.
**
**  1. The Software is owned by the IAU SOFA Review Board ("the Board").
**
**  2. Permission is granted to anyone to use the SOFA software for any
**     purpose, including commercial applications, free of charge and
**     without payment of royalties, subject to the conditions and 
**     restrictions listed below.
**
**  3. You (the user) may copy and adapt the SOFA software and its 
**     algorithms for your own purposes and you may copy and distribute
**     a resulting "derived work" to others on a world-wide, royalty-free 
**     basis, provided that the derived work complies with the following
**     requirements: 
**
**     a) Your work shall be marked or carry a statement that it (i) uses
**        routines and computations derived by you from software provided 
**        by SOFA under license to you; and (ii) does not contain
**        software provided by SOFA or software that has been distributed
**        by or endorsed by SOFA.
**
**     b) The source code of your derived work must contain descriptions
**        of how the derived work is based upon and/or differs from the
**        original SOFA software.
**
**     c) The name(s) of all routine(s) that you distribute shall differ
**        from the SOFA names, even when the SOFA content has not been
**        otherwise changed.
**
**     d) The routine-naming prefix "iau" shall not be used.
**
**     e) The origin of the SOFA components of your derived work must not
**        be misrepresented;  you must not claim that you wrote the
**        original software, nor file a patent application for SOFA
**        software or algorithms embedded in the SOFA software.
**
**     f) These requirements must be reproduced intact in any source
**        distribution and shall apply to anyone to whom you have granted 
**        a further right to modify the source code of your derived work.
**
**  4. In any published work or commercial products which includes
**     results achieved by using the SOFA software, you shall acknowledge
**     that the SOFA software was used in obtaining those results.
**
**  5. You shall not cause the SOFA software to be brought into
**     disrepute, either by misuse, or use for inappropriate tasks, or by
**     inappropriate modification.
**
**  6. The SOFA software is provided "as is" and the Board makes no 
**     warranty as to its use or performance.   The Board does not and 
**     cannot warrant the performance or results which the user may obtain 
**     by using the SOFA software.  The Board makes no warranties, express 
**     or implied, as to non-infringement of third party rights,
**     merchantability, or fitness for any particular purpose.  In no
**     event will the Board be liable to the user for any consequential,
**     incidental, or special damages, including any lost profits or lost
**     savings, even if a Board representative has been advised of such
**     damages, or for any claim by any third party.
**
**  7. The provision of any version of the SOFA software under the terms 
**     and conditions specified herein does not imply that future
**     versions will also be made available under the same terms and
**     conditions.
**
**  Correspondence concerning SOFA software should be addressed as
**  follows:
**
**     Internet email: sofa@rl.ac.uk
**     Postal address: IAU SOFA Center
**                     Rutherford Appleton Laboratory
**                     Chilton, Didcot, Oxon OX11 0QX
**                     United Kingdom
**
**---------------------------------------------------------------------*/
}
