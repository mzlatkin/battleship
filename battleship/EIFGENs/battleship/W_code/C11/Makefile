INCLUDE_PATH =  -I"C:\Program Files\Eiffel Software\EiffelStudio 18.11 GPL\library\wel\spec\windows\include" -I"C:\Program Files\Eiffel Software\EiffelStudio 18.11 GPL\library\time\spec\include" -I"C:\Program Files\Eiffel Software\EiffelStudio 18.11 GPL\library\vision2\spec\include" -I"C:\Program Files\Eiffel Software\EiffelStudio 18.11 GPL\C_library\zlib"
SHELL = \bin\sh
CC = cl
CPP = cl
CFLAGS = -Od -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -D_UNICODE -DUNICODE -DWIN32_LEAN_AND_MEAN  -DEIF_THREADS  -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 18.11 GPL\studio\spec\win64\include" -I. $(INCLUDE_PATH)
CPPFLAGS = -Od -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -D_UNICODE -DUNICODE -DWIN32_LEAN_AND_MEAN  -DEIF_THREADS  -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 18.11 GPL\studio\spec\win64\include" -I. $(INCLUDE_PATH)
LDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc
CCLDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc  -SUBSYSTEM:WINDOWS
LDSHAREDFLAGS =  -dll -incremental:no -NODEFAULTLIB:libc
EIFLIB = "C:\Program Files\Eiffel Software\EiffelStudio 18.11 GPL\studio\spec\win64\lib\msc_vc140\mtwkbench.lib"
EIFTEMPLATES = C:\Program Files\Eiffel Software\EiffelStudio 18.11 GPL\studio\config\win64\templates
LIBS = 
MAKE = nmake -s -nologo
AR = 
LD = 
MKDEP =   --
MV = copy
CP = copy
RANLIB = echo
RM = del
FILE_EXIST = if exist
RMDIR = rd
X2C = "C:\Program Files\Eiffel Software\EiffelStudio 18.11 GPL\studio\spec\win64\bin\x2c.exe"
SHAREDLINK = link
SHAREDLIBS = USER32.lib WS2_32.lib ADVAPI32.lib GDI32.lib SHELL32.lib MSIMG32.lib \
	COMDLG32.lib UUID.lib OLE32.lib OLEAUT32.lib COMCTL32.lib MPR.LIB SHLWAPI.LIB WINSPOOL.LIB 
SHARED_SUFFIX = .dll
COMMAND_MAKEFILE = 
START_TEST = if not exist finished 
END_TEST =  
CREATE_TEST = echo "finished" >> finished 
SYSTEM_IN_DYNAMIC_LIB = battleship.dll 

.SUFFIXES:.cpp .obj 

.c.obj:
	$(CC) $(CFLAGS) -c $<

.cpp.obj:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C11_c.obj 

OLDOBJECTS =  da1302.obj da1302d.obj ab1304.obj ab1304d.obj ti1301.obj ti1301d.obj ev1315.obj \
	ev1315d.obj da1300.obj da1300d.obj du1299.obj du1299d.obj ev1317.obj ev1317d.obj \
	ev1314.obj ev1314d.obj we1313.obj we1313d.obj kl1298.obj kl1298d.obj we1312.obj \
	we1312d.obj we1296.obj we1296d.obj ev1316.obj ev1316d.obj we1310.obj we1310d.obj \
	ev1297.obj ev1297d.obj we1295.obj we1295d.obj we1294.obj we1294d.obj we1293.obj \
	we1293d.obj we1309.obj we1309d.obj we1292.obj we1292d.obj we1291.obj we1291d.obj \
	we1308.obj we1308d.obj we1307.obj we1307d.obj we1306.obj we1306d.obj we1290.obj \
	we1290d.obj uc1305.obj uc1305d.obj we1289.obj we1289d.obj ev1321.obj ev1321d.obj \
	ev1320.obj ev1320d.obj we1318.obj we1318d.obj we1319.obj we1319d.obj kl1303.obj \
	kl1303d.obj we1311.obj we1311d.obj 

all::  Cobj11.lib

Cobj11.lib: $(OBJECTS) Makefile
	if exist $@ $(RM) $@
	lib -nologo -OUT:$@ $(OBJECTS)
	$(CREATE_TEST)
	$(RM) $(OBJECTS)


clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

