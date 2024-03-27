CXX := g++
CXXFLAGS := -O0 -g -Wall -std=c++14 -Werror=return-type

# enable asan
CXXFLAGS += -fsanitize=address -fno-omit-frame-pointer
LDFLAGS  += -fsanitize=address -fno-omit-frame-pointer

%.out: %.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@

main.o: SortedAList.h SortedList.h

test: main.out
	./main.out

clean:
	rm -f *.out
