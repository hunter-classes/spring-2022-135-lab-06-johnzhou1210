main: main.o caesar.o vigenere.o decryption.o
	g++ -o main main.o caesar.o vigenere.o decryption.o

tests: tests.o caesar.o vigenere.o decryption.o
	g++ -o tests tests.o caesar.o vigenere.o decryption.o

test-ascii: test-ascii.o
	g++ -o test-ascii test-ascii.o

caesar.o: caesar.cpp caesar.h

vigenere.o: vigenere.cpp vigenere.h

decryption.o: decryption.cpp decryption.h

main.o: main.cpp caesar.h vigenere.h decryption.h

tests.o: tests.cpp doctest.h caesar.h vigenere.h decryption.h

clean:
	rm -f main.o tests.o test-ascii.o caesar.o decryption.o
