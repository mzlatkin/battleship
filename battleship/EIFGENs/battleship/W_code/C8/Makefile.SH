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
echo "Compiling C code in C8"
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

OBJECTS = big_file_C8_c.obj 

OLDOBJECTS =  ti1222.o ti1222d.o ti1221.o ti1221d.o ti1220.o ti1220d.o ev1217.o \
	ev1217d.o ti1219.o ti1219d.o co1218.o co1218d.o ev1216.o ev1216d.o \
	ev1215.o ev1215d.o ev1214.o ev1214d.o ev1213.o ev1213d.o ev1210.o \
	ev1210d.o ki1191.o ki1191d.o ev1209.o ev1209d.o we1208.o we1208d.o \
	we1207.o we1207d.o ev1206.o ev1206d.o we1205.o we1205d.o we1204.o \
	we1204d.o we1203.o we1203d.o we1202.o we1202d.o we1201.o we1201d.o \
	we1200.o we1200d.o ev1198.o ev1198d.o we1197.o we1197d.o we1196.o \
	we1196d.o we1195.o we1195d.o we1194.o we1194d.o uc1193.o uc1193d.o \
	uc1192.o uc1192d.o ki1190.o ki1190d.o ev1212.o ev1212d.o ev1211.o \
	ev1211d.o rt1199.o rt1199d.o 

all: Cobj8.o

Cobj8.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj8.o $(OBJECTS)
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

