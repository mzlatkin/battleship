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
echo "Compiling C code in C5"
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

OBJECTS = big_file_C5_c.obj 

OLDOBJECTS =  da1116.o da1116d.o ev1123.o ev1123d.o we1122.o we1122d.o we1121.o \
	we1121d.o ev1120.o ev1120d.o ev1119.o ev1119d.o we1118.o we1118d.o \
	ev1117.o ev1117d.o da1115.o da1115d.o kl1114.o kl1114d.o kl1113.o \
	kl1113d.o ki1112.o ki1112d.o we1111.o we1111d.o we1110.o we1110d.o \
	we1109.o we1109d.o ev1108.o ev1108d.o we1107.o we1107d.o ev1106.o \
	ev1106d.o ev1105.o ev1105d.o we1104.o we1104d.o we1103.o we1103d.o \
	we1102.o we1102d.o we1101.o we1101d.o ev1100.o ev1100d.o we1099.o \
	we1099d.o we1098.o we1098d.o we1097.o we1097d.o we1096.o we1096d.o \
	we1095.o we1095d.o we1094.o we1094d.o we1093.o we1093d.o we1092.o \
	we1092d.o we1091.o we1091d.o 

all: Cobj5.o

Cobj5.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj5.o $(OBJECTS)
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

