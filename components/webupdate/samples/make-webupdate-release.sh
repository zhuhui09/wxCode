#!/bin/bash 

# Author: Francesco Montorsi
# RCS-ID: $Id: make-webupdate-release.sh 335 2005-11-12 15:22:17Z frm $
# Purpose: creates a TAR.GZ file containing the simple sample v1.0.0
#          this script is used to create the binary release for wxGTK
#          of WebUpdate.

version=1.0         # the version of WebUpdate component
tar -c -z --exclude=CVS -f ../../webupdate-gtk2-$version.tar.gz simple/v1.0.0/*
