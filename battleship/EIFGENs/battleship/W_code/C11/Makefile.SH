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
echo "Compiling C code in C11"
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

OBJECTS = big_file_C11_c.obj 

OLDOBJECTS =  da1302.o da1302d.o ab1304.o ab1304d.o ti1301.o ti1301d.o ev1315.o \
	ev1315d.o da1300.o da1300d.o du1299.o du1299d.o ev1317.o ev1317d.o \
	ev1314.o ev1314d.o we1313.o we1313d.o kl1298.o kl1298d.o we1312.o \
	we1312d.o we1296.o we1296d.o ev1316.o ev1316d.o we1310.o we1310d.o \
	ev1297.o ev1297d.o we1295.o we1295d.o we1294.o we1294d.o we1293.o \
	we1293d.o we1309.o we1309d.o we1292.o we1292d.o we1291.o we1291d.o \
	we1308.o we1308d.o we1307.o we1307d.o we1306.o we1306d.o we1290.o \
	we1290d.o uc1305.o uc1305d.o we1289.o we1289d.o ev1321.o ev1321d.o \
	ev1320.o ev1320d.o we1318.o we1318d.o we1319.o we1319d.o kl1303.o \
	kl1303d.o we1311.o we1311d.o 

all: Cobj11.o

Cobj11.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj11.o $(OBJECTS)
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

