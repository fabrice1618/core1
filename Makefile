
calc: calc.cpp Stack.cpp Alu.cpp Core.cpp
	g++ -Wall -o calc calc.cpp Stack.cpp Alu.cpp Core.cpp

.PHONY: clean test

clean:
	rm calc

test:
	./calc