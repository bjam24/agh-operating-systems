#!/bin/bash
ls -laR | awk -F" " '{ if($1 != "drwx------" || $1 != "-rw-------" || $1 != "-rwsr-sr-x" || $1 != "-rwx------" || $1 != "-rwxr-xr--" || $1 != "-r-xr-xr-x") print $1 }' | cut -c 2- | grep "^[-,r]" | uniq -c | sort
