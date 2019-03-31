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
echo "Compiling C code in C3"
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

OBJECTS = big_file_C3_c.obj 

OLDOBJECTS =  et1045.o et1045d.o et1043.o et1043d.o et1044.o et1044d.o et1042.o \
	et1042d.o et1041.o et1041d.o ga1040.o ga1040d.o c_1039.o c_1039d.o \
	et1038.o et1038d.o hi1037.o hi1037d.o sh1036.o sh1036d.o et1035.o \
	et1035d.o va1034.o va1034d.o ev1033.o ev1033d.o ev1032.o ev1032d.o \
	ev1031.o ev1031d.o kl1030.o kl1030d.o we1029.o we1029d.o we1028.o \
	we1028d.o ev1027.o ev1027d.o ev1026.o ev1026d.o kl1025.o kl1025d.o \
	we1057.o we1057d.o we1056.o we1056d.o we1055.o we1055d.o ev1054.o \
	ev1054d.o we1053.o we1053d.o we1052.o we1052d.o we1051.o we1051d.o \
	we1050.o we1050d.o we1049.o we1049d.o we1048.o we1048d.o we1047.o \
	we1047d.o we1046.o we1046d.o 

all: Cobj3.o

Cobj3.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj3.o $(OBJECTS)
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

