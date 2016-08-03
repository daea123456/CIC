#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/CICcoin.png
ICON_DST=../../src/qt/res/icons/CICcoin.ico
convert ${ICON_SRC} -resize 16x16 CICcoin-16.png
convert ${ICON_SRC} -resize 32x32 CICcoin-32.png
convert ${ICON_SRC} -resize 48x48 CICcoin-48.png
convert CICcoin-16.png CICcoin-32.png CICcoin-48.png ${ICON_DST}

