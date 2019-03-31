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

OBJECTS = big_file_C10_c.obj 

OLDOBJECTS =  et1264.obj et1264d.obj es1285.obj es1285d.obj es1287.obj es1287d.obj es1286.obj \
	es1286d.obj et1262.obj et1262d.obj et1261.obj et1261d.obj et1260.obj et1260d.obj \
	et1259.obj et1259d.obj et1258.obj et1258d.obj et1257.obj et1257d.obj et1256.obj \
	et1256d.obj ev1284.obj ev1284d.obj et1263.obj et1263d.obj ev1282.obj ev1282d.obj \
	ev1283.obj ev1283d.obj ev1281.obj ev1281d.obj we1280.obj we1280d.obj ev1279.obj \
	ev1279d.obj we1278.obj we1278d.obj we1277.obj we1277d.obj ev1270.obj ev1270d.obj \
	we1276.obj we1276d.obj ev1275.obj ev1275d.obj we1274.obj we1274d.obj we1273.obj \
	we1273d.obj we1272.obj we1272d.obj we1271.obj we1271d.obj we1269.obj we1269d.obj \
	ev1268.obj ev1268d.obj we1267.obj we1267d.obj we1266.obj we1266d.obj we1288.obj \
	we1288d.obj kl1265.obj kl1265d.obj 

all::  Cobj10.lib

Cobj10.lib: $(OBJECTS) Makefile
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

