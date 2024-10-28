CXX := g++
CXXFLAGS := -O0 -g -Wall -std=c++20 -Werror=return-type -Wno-nonportable-include-path

%.out: %.cpp
	@$(CXX) $(CXXFLAGS) $^ -o $@

main: main.out
	./$<

clean:
	@rm -f *.out

all: clean main.out main
