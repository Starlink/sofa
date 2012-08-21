SOFA
====

This is an autoconfed version of the IAU Standards of Fundamental Astronomy C Library. The C source
code has not been modified in any way. The only change is the addition of autoconf files at the
top-level of the directory tree. The `00READ.ME` file is the file as distributed with the SOFA
source code. This `README.md` file is not part of the official SOFA release.

See <http://www.iausofa.org> for the original SOFA source distribution.

To build the library from a distribution tar ball simply do

    ./configure
    make
    make check
    make install

You can use `--prefix` to control the installation directory. SOFA has no dependencies beyond a
C compiler.

Source code repository
----------------------

There are two branches in the source code repository, `vendor` is the source tree as released
by the SOFA board and `master` is the modified tree that includes the autoconf files.

To build from the repository a Starlink-modified autoconf is currently required in the
bootstrap phase to generate the `configure` script.
