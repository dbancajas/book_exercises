CXX=g++
.SUFFIXES: .cpp .o

all: main.cpp CppLib.o
	g++ main.cpp CppLib.o -o $@

.cpp.o:
	$(CXX) -I. -c $<

clean: 
	rm all
