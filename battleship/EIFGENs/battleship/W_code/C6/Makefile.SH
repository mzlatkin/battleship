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
echo "Compiling C code in C6"
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

OBJECTS = big_file_C6_c.obj 

OLDOBJECTS =  yy1156.o yy1156d.o ev1155.o ev1155d.o ev1154.o ev1154d.o gr1153.o \
	gr1153d.o kl1146.o kl1146d.o we1152.o we1152d.o ev1151.o ev1151d.o \
	we1150.o we1150d.o ev1149.o ev1149d.o kl1145.o kl1145d.o we1144.o \
	we1144d.o we1143.o we1143d.o we1142.o we1142d.o we1141.o we1141d.o \
	we1140.o we1140d.o we1139.o we1139d.o we1138.o we1138d.o we1137.o \
	we1137d.o we1136.o we1136d.o we1135.o we1135d.o we1134.o we1134d.o \
	we1133.o we1133d.o ev1132.o ev1132d.o we1131.o we1131d.o we1130.o \
	we1130d.o ev1129.o ev1129d.o we1128.o we1128d.o we1127.o we1127d.o \
	ev1126.o ev1126d.o ev1125.o ev1125d.o ev1124.o ev1124d.o kl1147.o \
	kl1147d.o uc1148.o uc1148d.o 

all: Cobj6.o

Cobj6.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj6.o $(OBJECTS)
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

