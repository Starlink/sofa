#include "sofam.h"
 
double iauEra00(double dj1, double dj2)
/*
**  - - - - - - - - -
**   i a u E r a 0 0
**  - - - - - - - - -
**
**  Earth rotation angle (IAU 2000 model).
**
**  This function is part of the International Astronomical Union's
**  SOFA (Standards Of Fundamental Astronomy) software collection.
**
**  Status:  canonical model.
**
**  Given:
**     dj1,dj2   double    UT1 as a 2-part Julian Date (see note)
**
**  Returned (function value):
**               double    Earth rotation angle (radians), range 0-2pi
**
**  Notes:
**
**  1) The UT1 date dj1+dj2 is a Julian Date, apportioned in any
**     convenient way between the arguments dj1 and dj2.  For example,
**     JD(UT1)=2450123.7 could be expressed in any of these ways,
**     among others:
**
**             dj1            dj2
**
**         2450123.7           0.0       (JD method)
**         2451545.0       -1421.3       (J2000 method)
**         2400000.5       50123.2       (MJD method)
**         2450123.5           0.2       (date & time method)
**
**     The JD method is the most natural and convenient to use in
**     cases where the loss of several decimal digits of resolution
**     is acceptable.  The J2000 and MJD methods are good compromises
**     between resolution and convenience.  The date & time method is
**     best matched to the algorithm used:  maximum precision is
**     delivered when the dj1 argument is for 0hrs UT1 on the day in
**     question and the dj2 argument lies in the range 0 to 1, or vice
**     versa.
**
**  2) The algorithm is adapted from Expression 22 of Capitaine et al.
**     2000.  The time argument has been expressed in days directly,
**     and, to retain precision, integer contributions have been
**     eliminated.  The same formulation is given in IERS Conventions
**     (2003), Chap. 5, Eq. 14.
**
**  Called:
**     iauAnp       normalize angle into range 0 to 2pi
**
**  References:
**
**     Capitaine N., Guinot B. and McCarthy D.D, 2000, Astron.
**     Astrophys., 355, 398-405.
**
**     McCarthy, D. D., Petit, G. (eds.), IERS Conventions (2003),
**     IERS Technical Note No. 32, BKG (2004)
**
**  This revision:  2008 May 24
**
**  Copyright (C) 2008 IAU SOFA Review Board.  See notes at end.
*/
{
   double d1, d2, t, f, theta;

 
/* Days since fundamental epoch. */
   if (dj1 < dj2) {
      d1 = dj1;
      d2 = dj2;
   } else {
      d1 = dj2;
      d2 = dj1;
   }
   t = d1 + (d2- DJ00);
 
/* Fractional part of T (days). */
   f = fmod(d1, 1.0) + fmod(d2, 1.0);
 
/* Earth rotation angle at this UT1. */
   theta = iauAnp(D2PI * (f + 0.7790572732640
                            + 0.00273781191135448 * t));
 
   return theta;

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
