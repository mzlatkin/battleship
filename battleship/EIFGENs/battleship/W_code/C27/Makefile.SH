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
echo "Compiling C code in C27"
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

OBJECTS = big_file_C27_c.obj 

OLDOBJECTS =  da1845.o da1845d.o ti1843.o ti1843d.o da1848.o da1848d.o da1844.o \
	da1844d.o ti1842.o ti1842d.o da1847.o da1847d.o da1846.o da1846d.o \
	ev1841.o ev1841d.o ev1818.o ev1818d.o we1840.o we1840d.o ev1838.o \
	ev1838d.o we1817.o we1817d.o we1849.o we1849d.o ev1839.o ev1839d.o \
	ev1837.o ev1837d.o kl1835.o kl1835d.o kl1834.o kl1834d.o kl1833.o \
	kl1833d.o we1831.o we1831d.o ev1819.o ev1819d.o we1820.o we1820d.o \
	we1836.o we1836d.o ki1832.o ki1832d.o we1830.o we1830d.o we1829.o \
	we1829d.o we1828.o we1828d.o we1827.o we1827d.o we1826.o we1826d.o \
	we1825.o we1825d.o we1824.o we1824d.o we1823.o we1823d.o we1822.o \
	we1822d.o we1821.o we1821d.o 

all: Cobj27.o

Cobj27.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj27.o $(OBJECTS)
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

