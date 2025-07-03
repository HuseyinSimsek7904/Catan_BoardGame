

CXX = g++
CXXFLAGS = -std=c++11 -Wall
DEPS = Bank.h Map.h Node.h
OBJ = game.o node.o

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

catan: $(OBJ)
	$(CXX) -o $@ $^ $(CXXFLAGS)

clean:
	rm -f *.o catan
