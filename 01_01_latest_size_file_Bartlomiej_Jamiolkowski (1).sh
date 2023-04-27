#!/bin/bash
echo "Enter catalog name"
read catalog_name
echo "Enter number of bytes e.g. 1M"
read size_bytes
find $catalog_name -type f -size "+${size_bytes}" -printf "%t%p\n" | sort -n | tail -1
