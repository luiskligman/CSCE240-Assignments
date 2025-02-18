flags = -std=c++17 -Wall

style1 : program2functions.h
	cpplint program2functions.h

style2 : program2functions.cc
	cpplint program2functions.cc

style3 : program2.cc
	cpplint program2.cc

program2functions.o : program2functions.cc program2functions.h
	g++ $(flags) -c $<

compile1 : program2functions.o
	

testRange : testRange.cc program2functions.o
	g++ $(flags) $^ -o $@
	./$@

testDigitInPosition : testDigitInPosition.cc program2functions.o
	g++ -$(flags) $^ -o $@
	./$@

testIsSquare : testIsSquare.cc program2functions.o
	g++ $(flags) $^ -o $@
	./$@

testIsPerfect : testIsPerfect.cc program2functions.o
	g++ $(flags) $^ -o $@
	./$@

testToDigit : testToDigit.cc program2functions.o
	g++ $(flags) $^ -o $@
	./$@

testIsConsonant : testIsConsonant.cc program2functions.o
	g++ $(flags) $^ -o $@
	./$@

testIsVowel : testIsVowel.cc program2functions.o
	g++ $(flags) $^ -o $@
	./$@


compile2 : program2
	

checkit : checkit.cc
	g++ $(flags) $^ -o $@

testprogram2a : program2 checkit test1-input.txt correct-test1.txt
	./program2 < test1-input.txt > student-test1.txt
	./checkit 0

testprogram2b : program2 checkit test2-input.txt correct-test2.txt
	./program2 < test2-input.txt > student-test2.txt
	./checkit 1

testprogram2c : program2 checkit test3-input.txt correct-test3.txt
	./program2 < test3-input.txt > student-test3.txt
	./checkit 2

testprogram2d : program2 checkit test4-input.txt correct-test4.txt
	./program2 < test4-input.txt > student-test4.txt
	./checkit 3

clean :
	rm student-test*txt checkit program2 *.o *.exe testLeapYear testLastDayOfMonth testValidDate testNextDate testPreviousDate

