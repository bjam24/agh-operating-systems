#!/bin/bash
# Program was tested with (x=100, y=200) and (x=100, y=400)
x=100
y=200
# Creation of empty pdf file
convert xc:none -page A4 new_dokument.pdf
# Converting pdf file to png file, which is empty too
convert -density 150 new_dokument.pdf[0] -quality 90 dokument.png
# Creating sample png file, which contains tesxt and transparent background
convert -background transparent -fill black -gravity Center -size 320x -pointsize 24 label:'Bartlomiej Jamiolkowski' podpis.png
# Positioning two png images
magick composite podpis.png  -geometry +$x+$y dokument.png modified_dokument.png
# Adding positioned images to existing pdf file
convert -page A4 -extent 595x842 modified_dokument.png dokument.pdf
