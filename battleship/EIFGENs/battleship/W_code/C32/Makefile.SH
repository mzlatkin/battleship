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
echo "Compiling C code in C32"
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

OBJECTS = big_file_C32_c.obj 

OLDOBJECTS =  ty1995.o ty1995d.o bi2014.o bi2014d.o ac1991.o ac1991d.o et1996.o \
	et1996d.o kl2009.o kl2009d.o kl2010.o kl2010d.o kl2013.o kl2013d.o \
	in1992.o in1992d.o kl1993.o kl1993d.o kl1997.o kl1997d.o kl2006.o \
	kl2006d.o kl2011.o kl2011d.o ev1988.o ev1988d.o kl1994.o kl1994d.o \
	kl1998.o kl1998d.o kl2007.o kl2007d.o kl2012.o kl2012d.o ev1999.o \
	ev1999d.o ev1990.o ev1990d.o ev1982.o ev1982d.o ev1987.o ev1987d.o \
	ev2000.o ev2000d.o ev2002.o ev2002d.o ev2005.o ev2005d.o ev2001.o \
	ev2001d.o uc1985.o uc1985d.o ev2004.o ev2004d.o ev2003.o ev2003d.o \
	uc1986.o uc1986d.o ki1983.o ki1983d.o kl1984.o kl1984d.o ev1989.o \
	ev1989d.o kl2008.o kl2008d.o 

all: Cobj32.o

Cobj32.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj32.o $(OBJECTS)
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

