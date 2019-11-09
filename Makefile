CXXFLAGS ?= -g -O2 -std=c++11 -I/src/
 
OBJDIR := obj
SRCDIR := SWGResourceDatabase
 
_SRCS := lapi.c lauxlib.c lbaselib.c lbitlib.c lcode.c lcorolib.c lctype.c ldblib.c ldebug.c ldo.c ldump.c lfunc.c lgc.c linit.c liolib.c llex.c lmathlib.c lmem.c loadlib.c lobject.c lopcodes.c loslib.c lparser.c lstate.c lstring.c lstrlib.c ltable.c ltablib.c ltm.c ltm.c lundump.c lutf8lib.c lvm.c lzio.c
SRCS := $(patsubst %,$(SRCDIR)/Lua/%,$(_SRCS))
OBJS := $(patsubst %,$(OBJDIR)/%,$(_SRCS:c=o))

_CPPSRCS := Main.cpp pods.cpp Resource.cpp SqliteCore_V1.cpp LuaCore.cpp CLI_V1.cpp constantsV1.cpp ResourceTree.cpp Schematic.cpp Weight.cpp
CPPSRC := $(patsubst %,$(SRCDIR)/%,$(_CPPSRCS))
CPPOBJS := $(patsubst %,$(OBJDIR)/%,$(_CPPSRCS:cpp=o))

CXXFLAGS += -MMD -MP 
DEPS := $(patsubst %,$(OBJDIR)/%,$(_SRCS:c=d))
CPPDEPS := $(patsubst %,$(OBJDIR)/%,$(_CPPSRCS:cpp=d))

all: SWGResourceDatabase

dump:
	echo "$(OBJS)"
	echo "$(CPPOBJS)"

createdir:
	mkdir -p $(OBJDIR)
 
SWGResourceDatabase: $(OBJS) $(OBJDIR)/sqlite3.o $(CPPOBJS)
	@echo " LINK $^"
	$(CXX) $(CXXFLAGS) -lpthread -ldl -o $@ $^ 

$(OBJDIR)/sqlite3.o: src/Sqlite/sqlite3.c src/Sqlite/sqlite3.h
	gcc -g -O2 -c -o obj/sqlite3.o src/Sqlite/sqlite3.c 

$(OBJDIR)/%.o: $(SRCDIR)/Lua/%.c | createdir
	gcc -g -O2 -c -o $@ $< 

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@echo " CXX $<"
	$(CXX) $(CXXFLAGS) -c -o $@ $< 
 
clean:
	$(RM) -f *~ core SWGResourceDatabase
	$(RM) -r $(OBJDIR)
 
.PHONY: clean all
 
-include $(DEPS) $(CPPDEPS)

