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
echo "Compiling C code in C13"
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

OBJECTS = big_file_C13_c.obj 

OLDOBJECTS =  et1386.o et1386d.o et1387.o et1387d.o et1385.o et1385d.o da1384.o \
	da1384d.o kl1381.o kl1381d.o ki1373.o ki1373d.o ki1380.o ki1380d.o \
	ev1383.o ev1383d.o ki1374.o ki1374d.o kl1367.o kl1367d.o kl1356.o \
	kl1356d.o ki1378.o ki1378d.o ki1375.o ki1375d.o ev1382.o ev1382d.o \
	kl1372.o kl1372d.o kl1371.o kl1371d.o kl1365.o kl1365d.o kl1364.o \
	kl1364d.o kl1377.o kl1377d.o ev1355.o ev1355d.o ki1379.o ki1379d.o \
	ki1361.o ki1361d.o ki1362.o ki1362d.o uc1370.o uc1370d.o uc1369.o \
	uc1369d.o ki1360.o ki1360d.o ki1359.o ki1359d.o uc1368.o uc1368d.o \
	ki1366.o ki1366d.o kl1363.o kl1363d.o kl1376.o kl1376d.o kl1358.o \
	kl1358d.o uc1357.o uc1357d.o 

all: Cobj13.o

Cobj13.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj13.o $(OBJECTS)
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

