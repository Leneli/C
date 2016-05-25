# Wedit Makefile for project torna
SRCDIR=c:\users\liafell\documents\git\c\torna
CFLAGS=-I"D:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	torna.obj

LIBS=
EXE=torna.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\torna.exe $(OBJS) $(LIBS)

# Build torna.c
TORNA_C=\
	d:\lcc\include\_syslist.h\
	d:\lcc\include\_syslist.h\
	d:\lcc\include\safelib.h\
	d:\lcc\include\safelib.h\

torna.obj: $(TORNA_C) $(SRCDIR)\torna.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\torna.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\torna.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) torna.exe
