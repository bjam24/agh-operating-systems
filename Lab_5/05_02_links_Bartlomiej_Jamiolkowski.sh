#!/bin/bash
ln losowy.dat losowy-hard.dat
ln -s losowy.dat losowy-soft.dat

du losowy-hard.dat      # 100000000
ls -l losowy-hard.dat   # 100000000
stat losowy-hard.dat    # 100000000

du losowy-soft.dat      # 10
ls -l losowy-soft.dat   # 10
stat losowy-soft.dat    # 10

# Hard link zajął tyle samo pamięci co linkowany plik, ponieważ referuje bezpośredno do danych w
# pliku. Soft link zająl mało pamięci, ponieważ referuje do ścieżki do danych pliku.
