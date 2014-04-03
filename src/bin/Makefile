all: smtcompilephrasetable

CXXFLAGS=-stdlib=libstdc++ -I../ -I/usr/local/include/
LDFLAGS=-stdlib=libstdc++

smtcompilephrasetable: smtcompilephrasetable.o
	$(CXX)  $^ -o $@  $(LDFLAGS) $(LDLIBS) -lfst 

clean:
	rm -rf *.o fstdisambiguate

%.o:%.cc ${includes}
	$(CXX) $(CXXFLAGS) -c $<

%.o:%.cpp ${includes}
	$(CXX) $(CXXFLAGS) -c $<
