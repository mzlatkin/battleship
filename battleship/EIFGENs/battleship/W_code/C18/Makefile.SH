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
echo "Compiling C code in C18"
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

OBJECTS = big_file_C18_c.obj 

OLDOBJECTS =  ev1544.o ev1544d.o we1527.o we1527d.o we1526.o we1526d.o ev1542.o \
	ev1542d.o we1525.o we1525d.o we1524.o we1524d.o we1523.o we1523d.o \
	we1522.o we1522d.o we1521.o we1521d.o we1520.o we1520d.o we1534.o \
	we1534d.o we1535.o we1535d.o we1529.o we1529d.o we1537.o we1537d.o \
	we1530.o we1530d.o we1532.o we1532d.o we1531.o we1531d.o we1528.o \
	we1528d.o we1536.o we1536d.o we1533.o we1533d.o uc1538.o uc1538d.o \
	kl1543.o kl1543d.o ev1552.o ev1552d.o ev1551.o ev1551d.o ev1550.o \
	ev1550d.o ev1549.o ev1549d.o ev1548.o ev1548d.o ev1547.o ev1547d.o \
	ev1541.o ev1541d.o ev1540.o ev1540d.o ev1546.o ev1546d.o ev1545.o \
	ev1545d.o ev1539.o ev1539d.o 

all: Cobj18.o

Cobj18.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj18.o $(OBJECTS)
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

