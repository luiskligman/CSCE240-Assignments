compiler = g++
flags = -Wall -std=c++17
compile = $(compiler) $(flags) -c
link = $(compiler) $(flags)

word_search_functions.o : word_search_functions.cc word_search_functions.h
	$(compile) $<

program3.o : program3.cc word_search_functions.h
	$(compile) $<

program3 : program3.o word_search_functions.o
	$(link) $^ -o $@
	./$@

style : word_search_functions.cc
	cpplint word_search_functions.cc

style1 : word_search_functions.h
	cpplint word_search_functions.h

clean :
	rm *.o program3