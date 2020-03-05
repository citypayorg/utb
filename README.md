Utb Core staging tree 0.14.0
===============================

https://utb.jdjpay.org

-- ctp 를 ubt 로
rename 's/ctp/ubt/g' ./*

-- ctp 를 utb 로 하위폴더
find . -type f | grep -E "*" | xargs rename 's/ctp/utb/g' ./*

-----------------linux-----------------
cd citypay
cd depends
make HOST=x86_64-pc-linux-gnu -j4
cd ..
./autogen.sh # not required when building from tarball
CONFIG_SITE=$PWD/depends/x86_64-pc-linux-gnu/share/config.site ./configure --prefix=/
make
--------------------------------------------------------------------
-----------------win 64 bit ----------------------------
cd depends
make HOST=x86_64-w64-mingw32 -j4
cd ..
./autogen.sh
CONFIG_SITE=$PWD/depends/x86_64-w64-mingw32/share/config.site ./configure --prefix=/
make
-----------------------------------------------------

우분투에서 마우스 매크로를 만들 필요가 생길 때가 있다.
XMacro를 설치하면 매크로를 만들어서 원하는 동작을 자동으로 하도록 할 수 있다.

sudo apt-get install xmacro

설치가 다되면 다음 명령어를 통해 매크로를 기록한다.
명령어를 입력한 후 특정키를 누르면 기록이 시작되고 그 키를 다시 누르면 기록이 종료된다.
마우스 클릭이나 키보드 입력이 일어날 때마다 기록이 된다.
xmacrorec2 > test.file
기록을 끝내면 test.file 파일이 생기는데 이 파일을 열어서 수정하여 좀더 손을 볼 수 있다.
실행은 다음 명령어로 한다.
참고로 딱 한번만 실행된다.
xmacroplay "$DISPLAY" < test.file
반복해서 실행하기 위해 우분투 터미널에서 for문을 이용하면 된다.
i<100으로 하면 100번 실행된다.
for (( i=0; i<100; i++ )); do   xmacroplay "$DISPLAY" <test.file; done
--------------------------------------------------------------------

What is Utb?
----------------

Utb is an experimental digital currency that enables anonymous, instant
payments to anyone, anywhere in the world. Utb uses peer-to-peer technology
to operate with no central authority: managing transactions and issuing money
are carried out collectively by the network. Utb Core is the name of the open
source software which enables the use of this currency.

For more information, as well as an immediately useable, binary version of
the Utb Core software, see https://www.jdjpay.org/.


License
-------

Utb Core is released under the terms of the MIT license. See [COPYING](COPYING) for more
information or see https://opensource.org/licenses/MIT.

Development Process
-------------------

The `master` branch is meant to be stable. Development is normally done in separate branches.
[Tags](https://github.com/citypayorg/utb/tags) are created to indicate new official,
stable release versions of Utb Core.

The contribution workflow is described in [CONTRIBUTING.md](CONTRIBUTING.md).

Testing
-------

Testing and code review is the bottleneck for development; we get more pull
requests than we can review and test on short notice. Please be patient and help out by testing
other people's pull requests, and remember this is a security-critical project where any mistake might cost people
lots of money.

### Automated Testing

Developers are strongly encouraged to write [unit tests](src/test/README.md) for new code, and to
submit new unit tests for old code. Unit tests can be compiled and run
(assuming they weren't disabled in configure) with: `make check`. Further details on running
and extending unit tests can be found in [/src/test/README.md](/src/test/README.md).

There are also [regression and integration tests](/qa) of the RPC interface, written
in Python, that are run automatically on the build server.
These tests can be run (if the [test dependencies](/qa) are installed) with: `qa/pull-tester/rpc-tests.py`

The Travis CI system makes sure that every pull request is built for Windows, Linux, and OS X, and that unit/sanity tests are run automatically.

### Manual Quality Assurance (QA) Testing

Changes should be tested by somebody other than the developer who wrote the
code. This is especially important for large or high-risk changes. It is useful
to add a test plan to the pull request description if testing the changes is
not straightforward.


