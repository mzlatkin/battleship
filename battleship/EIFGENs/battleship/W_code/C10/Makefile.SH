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
echo "Compiling C code in C10"
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

OBJECTS = big_file_C10_c.obj 

OLDOBJECTS =  et1264.o et1264d.o es1285.o es1285d.o es1287.o es1287d.o es1286.o \
	es1286d.o et1262.o et1262d.o et1261.o et1261d.o et1260.o et1260d.o \
	et1259.o et1259d.o et1258.o et1258d.o et1257.o et1257d.o et1256.o \
	et1256d.o ev1284.o ev1284d.o et1263.o et1263d.o ev1282.o ev1282d.o \
	ev1283.o ev1283d.o ev1281.o ev1281d.o we1280.o we1280d.o ev1279.o \
	ev1279d.o we1278.o we1278d.o we1277.o we1277d.o ev1270.o ev1270d.o \
	we1276.o we1276d.o ev1275.o ev1275d.o we1274.o we1274d.o we1273.o \
	we1273d.o we1272.o we1272d.o we1271.o we1271d.o we1269.o we1269d.o \
	ev1268.o ev1268d.o we1267.o we1267d.o we1266.o we1266d.o we1288.o \
	we1288d.o kl1265.o kl1265d.o 

all: Cobj10.o

Cobj10.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj10.o $(OBJECTS)
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

