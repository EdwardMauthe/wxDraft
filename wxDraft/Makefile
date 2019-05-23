# a Tux makefile
# stdafx.hpp.gch is the precompiled header
CC=g++
CFLAGS= -c `wx-config --cxxflags`
OBJS=main.o MainFrame.o PaneView.o
all: stdafx.hpp.gch wxDraft
wxDraft: $(OBJS)
	$(CC) $^ `wx-config --libs` -o $@
stdafx.hpp.gch: stdafx.hpp
	$(CC) $(CFLAGS) $<
main.o: main.cpp
	$(CC) $(CFLAGS) $<
MainFrame.o: MainFrame.cpp MainFrame.hpp
	$(CC) $(CFLAGS) $<
PaneView.o: PaneView.cpp PaneView.hpp
	$(CC) $(CFLAGS) $<
clean:
	rm *.o simple *.gch
