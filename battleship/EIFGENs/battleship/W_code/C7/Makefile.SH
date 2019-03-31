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
echo "Compiling C code in C7"
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

OBJECTS = big_file_C7_c.obj 

OLDOBJECTS =  es1169.o es1169d.o es1168.o es1168d.o es1165.o es1165d.o es1167.o \
	es1167d.o et1163.o et1163d.o et1161.o et1161d.o et1166.o et1166d.o \
	es1164.o es1164d.o et1162.o et1162d.o et1160.o et1160d.o yy1158.o \
	yy1158d.o ev1157.o ev1157d.o yy1159.o yy1159d.o we1189.o we1189d.o \
	we1188.o we1188d.o we1187.o we1187d.o we1186.o we1186d.o we1185.o \
	we1185d.o we1184.o we1184d.o we1183.o we1183d.o we1182.o we1182d.o \
	ev1181.o ev1181d.o we1180.o we1180d.o ev1179.o ev1179d.o we1178.o \
	we1178d.o we1177.o we1177d.o uc1176.o uc1176d.o we1175.o we1175d.o \
	we1174.o we1174d.o ev1173.o ev1173d.o we1172.o we1172d.o we1171.o \
	we1171d.o we1170.o we1170d.o 

all: Cobj7.o

Cobj7.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj7.o $(OBJECTS)
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

