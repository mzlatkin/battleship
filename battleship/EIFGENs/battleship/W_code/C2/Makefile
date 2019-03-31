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

OBJECTS = big_file_C2_c.obj 

OLDOBJECTS =  we1024.obj we1024d.obj we1023.obj we1023d.obj we1022.obj we1022d.obj we1021.obj \
	we1021d.obj ev1020.obj ev1020d.obj we1019.obj we1019d.obj ev1018.obj ev1018d.obj \
	we1017.obj we1017d.obj we1016.obj we1016d.obj we1015.obj we1015d.obj we1014.obj \
	we1014d.obj we1013.obj we1013d.obj we1012.obj we1012d.obj we1011.obj we1011d.obj \
	we1010.obj we1010d.obj we1009.obj we1009d.obj we1008.obj we1008d.obj we1007.obj \
	we1007d.obj ev1006.obj ev1006d.obj we1005.obj we1005d.obj we1004.obj we1004d.obj \
	we1003.obj we1003d.obj ev1002.obj ev1002d.obj we1001.obj we1001d.obj we1000.obj \
	we1000d.obj we999.obj we999d.obj we998.obj we998d.obj we997.obj we997d.obj we996.obj \
	we996d.obj we995.obj we995d.obj we994.obj we994d.obj ev993.obj ev993d.obj we992.obj \
	we992d.obj 

all::  Cobj2.lib

Cobj2.lib: $(OBJECTS) Makefile
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

