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

OBJECTS = big_file_C3_c.obj 

OLDOBJECTS =  et1045.obj et1045d.obj et1043.obj et1043d.obj et1044.obj et1044d.obj et1042.obj \
	et1042d.obj et1041.obj et1041d.obj ga1040.obj ga1040d.obj c_1039.obj c_1039d.obj \
	et1038.obj et1038d.obj hi1037.obj hi1037d.obj sh1036.obj sh1036d.obj et1035.obj \
	et1035d.obj va1034.obj va1034d.obj ev1033.obj ev1033d.obj ev1032.obj ev1032d.obj \
	ev1031.obj ev1031d.obj kl1030.obj kl1030d.obj we1029.obj we1029d.obj we1028.obj \
	we1028d.obj ev1027.obj ev1027d.obj ev1026.obj ev1026d.obj kl1025.obj kl1025d.obj \
	we1057.obj we1057d.obj we1056.obj we1056d.obj we1055.obj we1055d.obj ev1054.obj \
	ev1054d.obj we1053.obj we1053d.obj we1052.obj we1052d.obj we1051.obj we1051d.obj \
	we1050.obj we1050d.obj we1049.obj we1049d.obj we1048.obj we1048d.obj we1047.obj \
	we1047d.obj we1046.obj we1046d.obj 

all::  Cobj3.lib

Cobj3.lib: $(OBJECTS) Makefile
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

