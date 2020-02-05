CXX=g++-9
CXXFLAGS=-Iinc
LIB=-lblas

all: sum sum_fast sum_bad sum_blas main
	$(CXX) $(CXXFLAGS) $(LIB) -o bin/prog obj/sum.o obj/sum_fast.o obj/sum_bad.o obj/sum_blas.o obj/main2.o

sum:
	$(CXX) $(CXXFLAGS) -c -o obj/sum.o src/sum/sum.cpp

sum_fast:
	$(CXX) $(CXXFLAGS) -c -o obj/sum_fast.o src/sum/sum_fast.cpp

sum_bad:
	$(CXX) $(CXXFLAGS) -c -o obj/sum_bad.o src/sum/sum_bad.cpp

sum_blas:
	$(CXX) $(CXXFLAGS) -c -o obj/sum_blas.o src/sum/sum_blas.cpp

main:
	$(CXX) $(CXXFLAGS) -c -o obj/main2.o src/main2.cpp

clean:
	rm -rf obj/*.o bin/prog
