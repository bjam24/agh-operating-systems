#!/bin/bash
#Plik zero.dat (100MB) i jego odpowiednik zip (97,2MB) mają różne rozmiary (deflated 100%), #podczas gdy plik losowy.dat (100MB) i jego odpowiednik zip (100MB) maja takie same rozmiary #(deflated 0%). W pierwszym przypdaku udało się uzyskać kompresję a w drugim nie.

dd if=/dev/zero of=zero.dat bs=1MB count=100
dd if=/dev/urandom of=losowy.dat bs=1MB count=100
zip zero.zip zero.dat
zip losowy.zip losowy.dat
