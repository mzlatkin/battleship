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
echo "Compiling C code in C14"
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

OBJECTS = big_file_C14_c.obj big_file_C14_cpp.obj 

OLDOBJECTS =  et1405.o et1405d.o et1403.o et1403d.o et1401.o et1401d.o et1399.o \
	et1399d.o et1397.o et1397d.o et1395.o et1395d.o et1393.o et1393d.o \
	et1391.o et1391d.o et1389.o et1389d.o et1404.o et1404d.o et1402.o \
	et1402d.o et1400.o et1400d.o et1398.o et1398d.o et1396.o et1396d.o \
	et1394.o et1394d.o et1392.o et1392d.o va1406.o va1406d.o va1407.o \
	va1407d.o et1390.o et1390d.o et1388.o et1388d.o ev1414.o ev1414d.o \
	ev1413.o ev1413d.o we1408.o we1408d.o we1415.o we1415d.o ev1410.o \
	ev1410d.o we1412.o we1412d.o we1409.o we1409d.o ev1419.o ev1419d.o \
	we1417.o we1417d.o we1420.o we1420d.o we1416.o we1416d.o we1418.o \
	we1418d.o we1411.o we1411d.o 

all: Cobj14.o

Cobj14.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj14.o $(OBJECTS)
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

