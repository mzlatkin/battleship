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

OBJECTS = big_file_C33_c.obj 

OLDOBJECTS =  fu2047.obj fu2047d.obj ty2028.obj ty2028d.obj ha2033.obj ha2033d.obj ha2040.obj \
	ha2040d.obj ar2029.obj ar2029d.obj ta2036.obj ta2036d.obj ta2043.obj ta2043d.obj \
	he2021.obj he2021d.obj he2019.obj he2019d.obj tr2016.obj tr2016d.obj bi2015.obj \
	bi2015d.obj ta2034.obj ta2034d.obj ta2041.obj ta2041d.obj pr2020.obj pr2020d.obj \
	ha2035.obj ha2035d.obj ha2042.obj ha2042d.obj tr2017.obj tr2017d.obj li2018.obj \
	li2018d.obj ta2037.obj ta2037d.obj ta2044.obj ta2044d.obj kl2022.obj kl2022d.obj \
	kl2023.obj kl2023d.obj kl2024.obj kl2024d.obj ki2032.obj ki2032d.obj ki2038.obj \
	ki2038d.obj kl2025.obj kl2025d.obj kl2026.obj kl2026d.obj kl2045.obj kl2045d.obj \
	ki2031.obj ki2031d.obj ki2039.obj ki2039d.obj kl2027.obj kl2027d.obj kl2046.obj \
	kl2046d.obj we2030.obj we2030d.obj 

all::  Cobj33.lib

Cobj33.lib: $(OBJECTS) Makefile
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

