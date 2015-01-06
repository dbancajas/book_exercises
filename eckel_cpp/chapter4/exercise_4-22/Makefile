CXX=g++
.SUFFIXES := .cpp .o

all: Stack.o CppLib.o main.cpp
	$(CXX) *.o main.cpp -I. -o $@

.cpp.o: Stack.cpp CppLib.cpp
	g++ -c $<
clean: 
	rm all
