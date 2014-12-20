CXX=g++
.SUFFIXES = .cpp .o

.cpp.o:
	$(CXX) -c $<

all: a.exe b.exe
	./a.exe && ./b.exe

a.exe: a.o
	${CXX} -o $@ $<

b.exe: b.o
	${CXX} -o $@ $<

clean: 
	rm all
