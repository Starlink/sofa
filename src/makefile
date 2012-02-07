#-----------------------------------------------------------------------
#
# Description:  make file for the ANSI-C version of SOFA.  This
# make file creates a Unix .a library.  Designed for Linux/gcc but
# can be adapted for other platforms or run in an appropriate way
# by means of the macros CCOMPC (compiler command), CFLAGF (qualifiers
# for compiling functions) and CFLAGX (qualifiers for compiling
# executables).
#
# Usage:
#
#    To build the library:
#
#      make
#
#    To install the library and include files:
#
#      make install
#
#    To delete all object files:
#
#      make clean
#
#    To build and run the test program using the installed library:
#
#      make test
#
#    Also:
#      make all           same as make
#      make deinstall     deinstall the library
#      make check         test the build
#      make installcheck  same as make test
#      make distclean     clean up and deinstall
#      make realclean     same as make clean
#
# Last revision:   2009 November 20
#
# Copyright International Astronomical Union.  All rights reserved.
#
#-----------------------------------------------------------------------

#-----------------------------------------------------------------------
#
#  DEFINITIONS
#
#-----------------------------------------------------------------------

#----YOU MAY HAVE TO MODIFY THE NEXT FEW DEFINITIONS-----

# Specify the installation home directory.

INSTALL_DIR = $(HOME)

# Specify the installation directory for the library.

SOFA_LIB_DIR = $(INSTALL_DIR)/lib/

# Specify the installation directory for the include files.

SOFA_INC_DIR = $(INSTALL_DIR)/include/

# This software is compilable only by ANSI C compilers - give the name
# of your preferred C compiler (CCOMPC) and compilation flags (CFLAGF
# for functions, CFLAGX for executables) here.

CCOMPC = gcc
CFLAGF = -c -pedantic -Wall -W -O
CFLAGX = -pedantic -Wall -W -O

#----YOU SHOULDN'T HAVE TO MODIFY ANYTHING BELOW THIS LINE---------

SHELL = /bin/sh

# The list of installation directories.

INSTALL_DIRS = $(SOFA_LIB_DIR) $(SOFA_INC_DIR)

# Name the SOFA/C library in its source and target locations.

SOFA_LIB_NAME = libsofa_c.a
SOFA_LIB = $(SOFA_LIB_DIR)$(SOFA_LIB_NAME)

# Name the SOFA/C testbed in its source and target locations.

SOFA_TEST_NAME = t_sofa_c.c
SOFA_TEST = t_sofa_c

# Name the SOFA/C includes in their source and target locations.

SOFA_INC_NAMES = sofa.h sofam.h
SOFA_INC = $(SOFA_INC_DIR)sofa.h $(SOFA_INC_DIR)sofam.h

# The list of SOFA/C library object files.

SOFA_OBS = iauA2af.o \
           iauA2tf.o \
           iauAnp.o \
           iauAnpm.o \
           iauBi00.o \
           iauBp00.o \
           iauBp06.o \
           iauBpn2xy.o \
           iauC2i00a.o \
           iauC2i00b.o \
           iauC2i06a.o \
           iauC2ibpn.o \
           iauC2ixy.o \
           iauC2ixys.o \
           iauC2s.o \
           iauC2t00a.o \
           iauC2t00b.o \
           iauC2t06a.o \
           iauC2tcio.o \
           iauC2teqx.o \
           iauC2tpe.o \
           iauC2txy.o \
           iauCal2jd.o \
           iauCp.o \
           iauCpv.o \
           iauCr.o \
           iauD2tf.o \
           iauDat.o \
           iauDtdb.o \
           iauEe00.o \
           iauEe00a.o \
           iauEe00b.o \
           iauEe06a.o \
           iauEect00.o \
           iauEform.o \
           iauEo06a.o \
           iauEors.o \
           iauEpb.o \
           iauEpb2jd.o \
           iauEpj.o \
           iauEpj2jd.o \
           iauEpv00.o \
           iauEqeq94.o \
           iauEra00.o \
           iauFad03.o \
           iauFae03.o \
           iauFaf03.o \
           iauFaju03.o \
           iauFal03.o \
           iauFalp03.o \
           iauFama03.o \
           iauFame03.o \
           iauFane03.o \
           iauFaom03.o \
           iauFapa03.o \
           iauFasa03.o \
           iauFaur03.o \
           iauFave03.o \
           iauFk52h.o \
           iauFk5hip.o \
           iauFk5hz.o \
           iauFw2m.o \
           iauFw2xy.o \
           iauGc2gd.o \
           iauGc2gde.o \
           iauGd2gc.o \
           iauGd2gce.o \
           iauGmst00.o \
           iauGmst06.o \
           iauGmst82.o \
           iauGst00a.o \
           iauGst00b.o \
           iauGst06.o \
           iauGst06a.o \
           iauGst94.o \
           iauH2fk5.o \
           iauHfk5z.o \
           iauIr.o \
           iauJd2cal.o \
           iauJdcalf.o \
           iauNum00a.o \
           iauNum00b.o \
           iauNum06a.o \
           iauNumat.o \
           iauNut00a.o \
           iauNut00b.o \
           iauNut06a.o \
           iauNut80.o \
           iauNutm80.o \
           iauObl06.o \
           iauObl80.o \
           iauP06e.o \
           iauP2pv.o \
           iauP2s.o \
           iauPap.o \
           iauPas.o \
           iauPb06.o \
           iauPdp.o \
           iauPfw06.o \
           iauPlan94.o \
           iauPm.o \
           iauPmat00.o \
           iauPmat06.o \
           iauPmat76.o \
           iauPmp.o \
           iauPn.o \
           iauPn00.o \
           iauPn00a.o \
           iauPn00b.o \
           iauPn06.o \
           iauPn06a.o \
           iauPnm00a.o \
           iauPnm00b.o \
           iauPnm06a.o \
           iauPnm80.o \
           iauPom00.o \
           iauPpp.o \
           iauPpsp.o \
           iauPr00.o \
           iauPrec76.o \
           iauPv2p.o \
           iauPv2s.o \
           iauPvdpv.o \
           iauPvm.o \
           iauPvmpv.o \
           iauPvppv.o \
           iauPvstar.o \
           iauPvu.o \
           iauPvup.o \
           iauPvxpv.o \
           iauPxp.o \
           iauRm2v.o \
           iauRv2m.o \
           iauRx.o \
           iauRxp.o \
           iauRxpv.o \
           iauRxr.o \
           iauRy.o \
           iauRz.o \
           iauS00.o \
           iauS00a.o \
           iauS00b.o \
           iauS06.o \
           iauS06a.o \
           iauS2c.o \
           iauS2p.o \
           iauS2pv.o \
           iauS2xpv.o \
           iauSepp.o \
           iauSeps.o \
           iauSp00.o \
           iauStarpm.o \
           iauStarpv.o \
           iauSxp.o \
           iauSxpv.o \
           iauTr.o \
           iauTrxp.o \
           iauTrxpv.o \
           iauXy06.o \
           iauXys00a.o \
           iauXys00b.o \
           iauXys06a.o \
           iauZp.o \
           iauZpv.o \
           iauZr.o

#-----------------------------------------------------------------------
#
#  TARGETS
#
#-----------------------------------------------------------------------

# Build (but do not install) the library.
all : $(SOFA_LIB_NAME)
	-@ echo ""
	-@ echo "*** Now type 'make test'" \
                " to install the library and run tests ***"
	-@ echo ""

# Install the library and header files.
install $(SOFA_LIB) : $(INSTALL_DIRS) $(SOFA_LIB_NAME) $(SOFA_INC)
	cp $(SOFA_LIB_NAME) $(SOFA_LIB_DIR)

# Deinstall the library and header files.
deinstall:
	rm -f $(SOFA_LIB) $(SOFA_INC)

# Test the build.
check: $(SOFA_TEST_NAME) $(SOFA_INC_NAMES) $(SOFA_LIB_NAME)
	$(CCOMPC) $(CFLAGX) $(SOFA_TEST_NAME) $(SOFA_LIB_NAME) \
        -lm -o $(SOFA_TEST)
	./$(SOFA_TEST)
	rm -f $(SOFA_TEST)

# Test the installed library.
installcheck test: $(SOFA_TEST_NAME) $(SOFA_INC) $(SOFA_LIB)
	$(CCOMPC) $(CFLAGX) $(SOFA_TEST_NAME) -I$(SOFA_INC_DIR) \
        -L$(SOFA_LIB_DIR) -lsofa_c -lm -o $(SOFA_TEST)
	./$(SOFA_TEST)
	rm -f $(SOFA_TEST)

# Local clean up.
clean realclean:
	rm -f $(SOFA_OBS) $(SOFA_LIB_NAME)

# Clean up and deinstall.
distclean:
	rm -f $(SOFA_OBS) $(SOFA_LIB_NAME) $(SOFA_INC) $(SOFA_LIB)

# Create the installation directories if not already present.
$(INSTALL_DIRS):
	mkdir -p $@

# Build the library.
$(SOFA_LIB_NAME): $(SOFA_OBS)
	ar ru $(SOFA_LIB_NAME) $?

# Install the header files.
$(SOFA_INC) : $(INSTALL_DIRS) $(SOFA_INC_NAMES)
	cp $(SOFA_INC_NAMES) $(SOFA_INC_DIR)

#-----------------------------------------------------------------------

# The list of object file dependencies

iauA2af.o   : a2af.c   sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ a2af.c
iauA2tf.o   : a2tf.c   sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ a2tf.c
iauAnp.o    : anp.c    sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ anp.c
iauAnpm.o   : anpm.c   sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ anpm.c
iauBi00.o   : bi00.c   sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ bi00.c
iauBp00.o   : bp00.c   sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ bp00.c
iauBp06.o   : bp06.c   sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ bp06.c
iauBpn2xy.o : bpn2xy.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ bpn2xy.c
iauC2i00a.o : c2i00a.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ c2i00a.c
iauC2i00b.o : c2i00b.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ c2i00b.c
iauC2i06a.o : c2i06a.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ c2i06a.c
iauC2ibpn.o : c2ibpn.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ c2ibpn.c
iauC2ixy.o  : c2ixy.c  sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ c2ixy.c
iauC2ixys.o : c2ixys.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ c2ixys.c
iauC2s.o    : c2s.c    sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ c2s.c
iauC2t00a.o : c2t00a.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ c2t00a.c
iauC2t00b.o : c2t00b.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ c2t00b.c
iauC2t06a.o : c2t06a.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ c2t06a.c
iauC2tcio.o : c2tcio.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ c2tcio.c
iauC2teqx.o : c2teqx.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ c2teqx.c
iauC2tpe.o  : c2tpe.c  sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ c2tpe.c
iauC2txy.o  : c2txy.c  sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ c2txy.c
iauCal2jd.o : cal2jd.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ cal2jd.c
iauCp.o     : cp.c     sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ cp.c
iauCpv.o    : cpv.c    sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ cpv.c
iauCr.o     : cr.c     sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ cr.c
iauD2tf.o   : d2tf.c   sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ d2tf.c
iauDat.o    : dat.c    sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ dat.c
iauDtdb.o   : dtdb.c   sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ dtdb.c
iauEe00.o   : ee00.c   sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ ee00.c
iauEe00a.o  : ee00a.c  sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ ee00a.c
iauEe00b.o  : ee00b.c  sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ ee00b.c
iauEe06a.o  : ee06a.c  sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ ee06a.c
iauEect00.o : eect00.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ eect00.c
iauEform.o : eform.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ eform.c
iauEo06a.o  : eo06a.c  sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ eo06a.c
iauEors.o   : eors.c   sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ eors.c
iauEpb.o    : epb.c    sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ epb.c
iauEpb2jd.o : epb2jd.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ epb2jd.c
iauEpj.o    : epj.c    sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ epj.c
iauEpj2jd.o : epj2jd.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ epj2jd.c
iauEpv00.o  : epv00.c  sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ epv00.c
iauEqeq94.o : eqeq94.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ eqeq94.c
iauEra00.o  : era00.c  sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ era00.c
iauFad03.o  : fad03.c  sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ fad03.c
iauFae03.o  : fae03.c  sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ fae03.c
iauFaf03.o  : faf03.c  sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ faf03.c
iauFaju03.o : faju03.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ faju03.c
iauFal03.o  : fal03.c  sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ fal03.c
iauFalp03.o : falp03.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ falp03.c
iauFama03.o : fama03.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ fama03.c
iauFame03.o : fame03.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ fame03.c
iauFane03.o : fane03.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ fane03.c
iauFaom03.o : faom03.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ faom03.c
iauFapa03.o : fapa03.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ fapa03.c
iauFasa03.o : fasa03.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ fasa03.c
iauFaur03.o : faur03.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ faur03.c
iauFave03.o : fave03.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ fave03.c
iauFk52h.o  : fk52h.c  sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ fk52h.c
iauFk5hip.o : fk5hip.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ fk5hip.c
iauFk5hz.o  : fk5hz.c  sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ fk5hz.c
iauFw2m.o   : fw2m.c   sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ fw2m.c
iauFw2xy.o  : fw2xy.c  sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ fw2xy.c
iauGc2gd.o : gc2gd.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ gc2gd.c
iauGc2gde.o : gc2gde.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ gc2gde.c
iauGd2gc.o : gd2gc.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ gd2gc.c
iauGd2gce.o : gd2gce.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ gd2gce.c
iauGmst00.o : gmst00.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ gmst00.c
iauGmst06.o : gmst06.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ gmst06.c
iauGmst82.o : gmst82.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ gmst82.c
iauGst00a.o : gst00a.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ gst00a.c
iauGst00b.o : gst00b.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ gst00b.c
iauGst06.o  : gst06.c  sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ gst06.c
iauGst06a.o : gst06a.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ gst06a.c
iauGst94.o  : gst94.c  sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ gst94.c
iauH2fk5.o  : h2fk5.c  sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ h2fk5.c
iauHfk5z.o  : hfk5z.c  sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ hfk5z.c
iauIr.o     : ir.c     sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ ir.c
iauJd2cal.o : jd2cal.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ jd2cal.c
iauJdcalf.o : jdcalf.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ jdcalf.c
iauNum00a.o : num00a.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ num00a.c
iauNum00b.o : num00b.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ num00b.c
iauNum06a.o : num06a.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ num06a.c
iauNumat.o  : numat.c  sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ numat.c
iauNut00a.o : nut00a.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ nut00a.c
iauNut00b.o : nut00b.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ nut00b.c
iauNut06a.o : nut06a.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ nut06a.c
iauNut80.o  : nut80.c  sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ nut80.c
iauNutm80.o : nutm80.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ nutm80.c
iauObl06.o  : obl06.c  sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ obl06.c
iauObl80.o  : obl80.c  sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ obl80.c
iauP06e.o   : p06e.c   sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ p06e.c
iauP2pv.o   : p2pv.c   sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ p2pv.c
iauP2s.o    : p2s.c    sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ p2s.c
iauPap.o    : pap.c    sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ pap.c
iauPas.o    : pas.c    sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ pas.c
iauPb06.o   : pb06.c   sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ pb06.c
iauPdp.o    : pdp.c    sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ pdp.c
iauPfw06.o  : pfw06.c  sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ pfw06.c
iauPlan94.o : plan94.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ plan94.c
iauPm.o     : pm.c     sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ pm.c
iauPmat00.o : pmat00.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ pmat00.c
iauPmat06.o : pmat06.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ pmat06.c
iauPmat76.o : pmat76.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ pmat76.c
iauPmp.o    : pmp.c    sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ pmp.c
iauPn.o     : pn.c     sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ pn.c
iauPn00.o   : pn00.c   sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ pn00.c
iauPn00a.o  : pn00a.c  sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ pn00a.c
iauPn00b.o  : pn00b.c  sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ pn00b.c
iauPn06.o   : pn06.c   sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ pn06.c
iauPn06a.o  : pn06a.c  sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ pn06a.c
iauPnm00a.o : pnm00a.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ pnm00a.c
iauPnm00b.o : pnm00b.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ pnm00b.c
iauPnm06a.o : pnm06a.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ pnm06a.c
iauPnm80.o  : pnm80.c  sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ pnm80.c
iauPom00.o  : pom00.c  sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ pom00.c
iauPpp.o    : ppp.c    sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ ppp.c
iauPpsp.o   : ppsp.c   sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ ppsp.c
iauPr00.o   : pr00.c   sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ pr00.c
iauPrec76.o : prec76.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ prec76.c
iauPv2p.o   : pv2p.c   sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ pv2p.c
iauPv2s.o   : pv2s.c   sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ pv2s.c
iauPvdpv.o  : pvdpv.c  sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ pvdpv.c
iauPvm.o    : pvm.c    sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ pvm.c
iauPvmpv.o  : pvmpv.c  sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ pvmpv.c
iauPvppv.o  : pvppv.c  sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ pvppv.c
iauPvstar.o : pvstar.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ pvstar.c
iauPvu.o    : pvu.c    sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ pvu.c
iauPvup.o   : pvup.c   sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ pvup.c
iauPvxpv.o  : pvxpv.c  sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ pvxpv.c
iauPxp.o    : pxp.c    sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ pxp.c
iauRm2v.o   : rm2v.c   sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ rm2v.c
iauRv2m.o   : rv2m.c   sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ rv2m.c
iauRx.o     : rx.c     sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ rx.c
iauRxp.o    : rxp.c    sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ rxp.c
iauRxpv.o   : rxpv.c   sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ rxpv.c
iauRxr.o    : rxr.c    sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ rxr.c
iauRy.o     : ry.c     sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ ry.c
iauRz.o     : rz.c     sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ rz.c
iauS00.o    : s00.c    sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ s00.c
iauS00a.o   : s00a.c   sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ s00a.c
iauS00b.o   : s00b.c   sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ s00b.c
iauS06.o    : s06.c    sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ s06.c
iauS06a.o   : s06a.c   sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ s06a.c
iauS2c.o    : s2c.c    sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ s2c.c
iauS2p.o    : s2p.c    sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ s2p.c
iauS2pv.o   : s2pv.c   sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ s2pv.c
iauS2xpv.o  : s2xpv.c  sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ s2xpv.c
iauSepp.o   : sepp.c   sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ sepp.c
iauSeps.o   : seps.c   sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ seps.c
iauSp00.o   : sp00.c   sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ sp00.c
iauStarpm.o : starpm.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ starpm.c
iauStarpv.o : starpv.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ starpv.c
iauSxp.o    : sxp.c    sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ sxp.c
iauSxpv.o   : sxpv.c   sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ sxpv.c
iauTr.o     : tr.c     sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ tr.c
iauTrxp.o   : trxp.c   sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ trxp.c
iauTrxpv.o  : trxpv.c  sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ trxpv.c
iauXy06.o   : xy06.c   sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ xy06.c
iauXys00a.o : xys00a.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ xys00a.c
iauXys00b.o : xys00b.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ xys00b.c
iauXys06a.o : xys06a.c sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ xys06a.c
iauZp.o     : zp.c     sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ zp.c
iauZpv.o    : zpv.c    sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ zpv.c
iauZr.o     : zr.c     sofa.h sofam.h
	$(CCOMPC) $(CFLAGF) -o $@ zr.c

#-----------------------------------------------------------------------
