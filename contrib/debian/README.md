
Debian
====================
This directory contains files used to package CICcoind/CICcoin-qt
for Debian-based Linux systems. If you compile CICcoind/CICcoin-qt yourself, there are some useful files here.

## CICcoin: URI support ##


CICcoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install CICcoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your CICcoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/CICcoin128.png` to `/usr/share/pixmaps`

CICcoin-qt.protocol (KDE)

