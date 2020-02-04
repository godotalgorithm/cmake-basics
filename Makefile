CXX=g++
CXXFLAGS=-Iinc

all: sum sum_fast main
	$(CXX) $(CXXFLAGS) -o bin/prog obj/sum.o obj/sum_fast.o obj/main.o

sum:
	$(CXX) $(CXXFLAGS) -c -o obj/sum.o src/sum.cpp

sum_fast:
	$(CXX) $(CXXFLAGS) -c -o obj/sum_fast.o src/sum_fast.cpp

main:
	$(CXX) $(CXXFLAGS) -c -o obj/main.o src/main.cpp

clean:
	rm -rf obj/*.o bin/prog
