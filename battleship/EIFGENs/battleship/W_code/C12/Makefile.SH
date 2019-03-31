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
echo "Compiling C code in C12"
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

OBJECTS = big_file_C12_c.obj 

OLDOBJECTS =  ro1326.o ro1326d.o et1325.o et1325d.o et1324.o et1324d.o da1330.o \
	da1330d.o kl1322.o kl1322d.o ev1331.o ev1331d.o ev1350.o ev1350d.o \
	ev1349.o ev1349d.o ev1332.o ev1332d.o ev1348.o ev1348d.o kl1354.o \
	kl1354d.o ev1347.o ev1347d.o ev1346.o ev1346d.o ev1345.o ev1345d.o \
	ev1344.o ev1344d.o ev1343.o ev1343d.o ev1342.o ev1342d.o we1352.o \
	we1352d.o we1329.o we1329d.o we1353.o we1353d.o we1351.o we1351d.o \
	ev1341.o ev1341d.o ev1340.o ev1340d.o ev1327.o ev1327d.o we1328.o \
	we1328d.o ev1339.o ev1339d.o ev1338.o ev1338d.o ev1337.o ev1337d.o \
	ki1323.o ki1323d.o ev1336.o ev1336d.o ev1335.o ev1335d.o ev1334.o \
	ev1334d.o ev1333.o ev1333d.o 

all: Cobj12.o

Cobj12.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj12.o $(OBJECTS)
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

