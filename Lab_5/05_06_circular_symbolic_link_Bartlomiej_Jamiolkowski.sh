#!/bin/bash
find . -follow | awk '{print length "         "$0}' | sort -rn | less
