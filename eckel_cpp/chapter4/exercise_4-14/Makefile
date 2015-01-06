CXX=g++
.SUFFIXES := .cpp .o

all: Stack.o Video.o main.cpp
	$(CXX) *.o main.cpp -I. -o $@

.cpp.o: Stack.cpp Video.cpp
	g++ -c $<
clean: 
	rm all
