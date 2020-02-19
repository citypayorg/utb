
Debian
====================
This directory contains files used to package utbd/utb-qt
for Debian-based Linux systems. If you compile utbd/utb-qt yourself, there are some useful files here.

## utb: URI support ##


utb-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install utb-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your utb-qt binary to `/usr/bin`
and the `../../share/pixmaps/utb128.png` to `/usr/share/pixmaps`

utb-qt.protocol (KDE)

