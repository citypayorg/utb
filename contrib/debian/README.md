
Debian
====================
This directory contains files used to package ctpd/ctp-qt
for Debian-based Linux systems. If you compile ctpd/ctp-qt yourself, there are some useful files here.

## ctp: URI support ##


ctp-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install ctp-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your ctp-qt binary to `/usr/bin`
and the `../../share/pixmaps/ctp128.png` to `/usr/share/pixmaps`

ctp-qt.protocol (KDE)

