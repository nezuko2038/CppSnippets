SOURCES =${shell ls *.cpp} 
OBJECTS = $(SOURCES:.cpp=.o) 
TARGETS = $(SOURCES:.cpp=.exe)
all:$(OBJECTS)
CXX= g++
CXXFLAGS = -Wall -std=c++2a
.SUFFIXES: .cpp .exe .c 

all:$(TARGETS)
	 
clean:
	rm -rf $(OBJECTS)
.cpp.o:


.cpp.exe:
	 $(CXX) $(CXXFLAGS)   $< -o $@