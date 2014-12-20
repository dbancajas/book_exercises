CXX=g++

all: *.cpp
	$(CXX) $? -o $@
debug: *.cpp
	$(CXX) $? -o $@ -DDEBUG

clean: 
	rm all
