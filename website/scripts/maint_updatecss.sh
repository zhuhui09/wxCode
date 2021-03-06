#!/bin/sh

# Author: Francesco Montorsi
# RCS-ID: $Id: maint_updatecss.sh,v 1.1 2009/01/05 14:39:11 frm Exp $
# Purpose: creates the "wxcode-allscroll.css" from the "wxcode-contentscroll.css" file
#          replacing some key lines; wxcode-allscroll.css is important for
#          those broken browsers (like IE) which do not well-support the
#          fixed blocks of CSS 2.0 specs...

me=`basename $0`
input="../wxcode-contentscroll.css"
output="../wxcode-allscroll.css"

echo "/* Automatically generated by $me from $input" >$output
echo "   DO NOT EDIT; ALL CHANGES WILL BE LOST !! */" >>$output
sed 's/position:[ ]*fixed;//; s/position: fixed ;/position:absolute;/; s/top: 20%;/top: 21%;/;' $input >>$output
chmod g+rw *.css
