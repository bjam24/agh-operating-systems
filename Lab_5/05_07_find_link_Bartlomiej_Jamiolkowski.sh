#!/bin/bash
ls -li | sort | awk -F" " '{ print $10, $1 }' | uniq -df 1
