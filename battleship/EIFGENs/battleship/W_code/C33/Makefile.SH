case $CONFIG in
'')
	if test ! -f ../config.sh; then
		(echo "Can't find ../config.sh."; exit 1)
	fi 2>/dev/null
	. ../config.sh
	;;
esac
case "$O" in
*/*) cd `expr X$0 : 'X\(.*\)/'` ;;
esac
echo "Compiling C code in C33"
$spitshell >Makefile <<!GROK!THIS!
INCLUDE_PATH =  -I"\$(ISE_LIBRARY)\library\wel\spec\windows\include" -I"\$(ISE_LIBRARY)\library\time\spec\include" -I"\$(ISE_LIBRARY)\library\vision2\spec\include" -I"\$(ISE_LIBRARY)\C_library\zlib"
SHELL = /bin/sh
CC = $cc
CPP = $cpp
CFLAGS = $wkoptimize $mtccflags $large -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
CPPFLAGS = $wkoptimize $mtcppflags $large -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
LDFLAGS = $ldflags
CCLDFLAGS = $ccldflags  $windows_flags
LDSHAREDFLAGS =  $mtldsharedflags
EIFLIB = "$rt_lib/$prefix$mt_prefix$wkeiflib$suffix"
EIFTEMPLATES = $rt_templates
LIBS = $mtlibs
MAKE = $make
AR = $ar
LD = $ld
MKDEP = $mkdep \$(DPFLAGS) --
MV = $mv
CP = $cp
RANLIB = $ranlib
RM = $rm -f
FILE_EXIST = $file_exist
RMDIR = $rmdir
X2C = "$x2c"
SHAREDLINK = $sharedlink
SHAREDLIBS = $sharedlibs
SHARED_SUFFIX = $shared_suffix
COMMAND_MAKEFILE = 
START_TEST = $start_test 
END_TEST = $end_test 
CREATE_TEST = $create_test 
SYSTEM_IN_DYNAMIC_LIB = battleship$shared_suffix 
!GROK!THIS!
$spitshell >>Makefile <<'!NO!SUBS!'

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C33_c.obj 

OLDOBJECTS =  fu2047.o fu2047d.o ty2028.o ty2028d.o ha2033.o ha2033d.o ha2040.o \
	ha2040d.o ar2029.o ar2029d.o ta2036.o ta2036d.o ta2043.o ta2043d.o \
	he2021.o he2021d.o he2019.o he2019d.o tr2016.o tr2016d.o bi2015.o \
	bi2015d.o ta2034.o ta2034d.o ta2041.o ta2041d.o pr2020.o pr2020d.o \
	ha2035.o ha2035d.o ha2042.o ha2042d.o tr2017.o tr2017d.o li2018.o \
	li2018d.o ta2037.o ta2037d.o ta2044.o ta2044d.o kl2022.o kl2022d.o \
	kl2023.o kl2023d.o kl2024.o kl2024d.o ki2032.o ki2032d.o ki2038.o \
	ki2038d.o kl2025.o kl2025d.o kl2026.o kl2026d.o kl2045.o kl2045d.o \
	ki2031.o ki2031d.o ki2039.o ki2039d.o kl2027.o kl2027d.o kl2046.o \
	kl2046d.o we2030.o we2030d.o 

all: Cobj33.o

Cobj33.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj33.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

!NO!SUBS!
chmod 644 Makefile
$eunicefix Makefile

