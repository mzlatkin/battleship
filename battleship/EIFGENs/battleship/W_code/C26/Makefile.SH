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
echo "Compiling C code in C26"
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

OBJECTS = big_file_C26_c.obj 

OLDOBJECTS =  da1802.o da1802d.o kl1812.o kl1812d.o fi1801.o fi1801d.o kl1811.o \
	kl1811d.o yy1800.o yy1800d.o co1787.o co1787d.o ev1786.o ev1786d.o \
	kl1806.o kl1806d.o yy1799.o yy1799d.o we1816.o we1816d.o ev1785.o \
	ev1785d.o ev1784.o ev1784d.o ev1797.o ev1797d.o kl1813.o kl1813d.o \
	kl1808.o kl1808d.o kl1804.o kl1804d.o yy1798.o yy1798d.o we1796.o \
	we1796d.o we1803.o we1803d.o we1795.o we1795d.o kl1807.o kl1807d.o \
	we1794.o we1794d.o kl1805.o kl1805d.o kl1815.o kl1815d.o kl1810.o \
	kl1810d.o kl1814.o kl1814d.o kl1809.o kl1809d.o uc1792.o uc1792d.o \
	kl1793.o kl1793d.o uc1791.o uc1791d.o uc1790.o uc1790d.o uc1789.o \
	uc1789d.o uc1788.o uc1788d.o 

all: Cobj26.o

Cobj26.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj26.o $(OBJECTS)
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

