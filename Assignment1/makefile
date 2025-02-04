compiler = g++
flags = -Wall -std=c++17
compile = $(compiler) $(flags) -c
link = $(compiler) $(flags)

style : program1.cc
	cpplint $^

includes: checkincludes.cc program1.cc
	$(link) $<
	./a.out program1.cc

program1.o : program1.cc includes
	$(compile) $<

program1 : program1.o
	$(link) $^ -o $@

checkit : checkit.cc
	$(link) $^ -o $@

test1 : program1 checkit sample-input1.txt expected-output1.txt
	./program1 < sample-input1.txt > student-output1.txt
	./checkit 0

test2 : program1 checkit sample-input2.txt expected-output2.txt
	./program1 < sample-input2.txt > student-output2.txt
	./checkit 1

test3 : program1 checkit sample-input3.txt expected-output3.txt
	./program1 < sample-input3.txt > student-output3.txt
	./checkit 2

test4 : program1 checkit sample-input4.txt expected-output4.txt
	./program1 < sample-input4.txt > student-output4.txt
	./checkit 3

test5 : program1 checkit sample-input5.txt expected-output5.txt
	./program1 < sample-input5.txt > student-output5.txt
	./checkit 4

test6 : program1 checkit sample-input6.txt expected-output6.txt
	./program1 < sample-input6.txt > student-output6.txt
	./checkit 5

clean :
	rm student* program1.o checkit program1 a.out
