CXX=g++
.SUFFIXES: .cpp .o

all: main.cpp Stack.o
	g++ main.cpp Stack.o -o $@

.cpp.o:
	$(CXX) -I. -c $<

clean: 
	rm all
