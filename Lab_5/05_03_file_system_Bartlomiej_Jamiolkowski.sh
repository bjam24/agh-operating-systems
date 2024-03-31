#!/bin/bash
dd if=/dev/zero of=pusty.dat bs=1MB count=100
mkfs.ext4 pusty.dat
sudo nano /etc/fstab
# ustawienie w <options> user dla ext4 by wszyscy uzytkownicy mogli uzywac mount unmount
