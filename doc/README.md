Ctp Core 0.14.0
=====================

This is the official reference wallet for Ctp digital currency and comprises the backbone of the Ctp peer-to-peer network. You can [download Ctp Core](https://www.citypay.org/downloads/) or [build it yourself](#building) using the guides below.

Running
---------------------
The following are some helpful notes on how to run Ctp on your native platform.

### Unix

Unpack the files into a directory and run:

- `bin/ctp-qt` (GUI) or
- `bin/ctpd` (headless)

### Windows

Unpack the files into a directory, and then run ctp-qt.exe.

### OS X

Drag Ctp-Qt to your applications folder, and then run Ctp-Qt.

### Need Help?

* See the [Ctp documentation](https://docs.citypay.org)
for help and more information.
* See the [Ctp Developer Documentation](https://ctp-docs.github.io/) 
for technical specifications and implementation details.
* Ask for help on [Ctp Nation Discord](http://ctpchat.org)
* Ask for help on the [Ctp Forum](https://citypay.org/forum)

Building
---------------------
The following are developer notes on how to build Ctp Core on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [OS X Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-windows.md)
- [OpenBSD Build Notes](build-openbsd.md)
- [Gitian Building Guide](gitian-building.md)

Development
---------------------
The Ctp Core repo's [root README](/README.md) contains relevant information on the development process and automated testing.

- [Developer Notes](developer-notes.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- Source Code Documentation ***TODO***
- [Translation Process](translation_process.md)
- [Translation Strings Policy](translation_strings_policy.md)
- [Travis CI](travis-ci.md)
- [Unauthenticated REST Interface](REST-interface.md)
- [Shared Libraries](shared-libraries.md)
- [BIPS](bips.md)
- [Dnsseed Policy](dnsseed-policy.md)
- [Benchmarking](benchmarking.md)

### Resources
* Discuss on the [Ctp Forum](https://citypay.org/forum), in the Development & Technical Discussion board.
* Discuss on [Ctp Nation Discord](http://ctpchat.org)

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [Files](files.md)
- [Reduce Traffic](reduce-traffic.md)
- [Tor Support](tor.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)
- [ZMQ](zmq.md)

License
---------------------
Distributed under the [MIT software license](/COPYING).
This product includes software developed by the OpenSSL Project for use in the [OpenSSL Toolkit](https://www.openssl.org/). This product includes
cryptographic software written by Eric Young ([eay@cryptsoft.com](mailto:eay@cryptsoft.com)), and UPnP software written by Thomas Bernard.
