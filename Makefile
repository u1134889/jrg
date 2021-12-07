bin/file/read.o: src/file/read.cpp
	g++ -c src/file/read.cpp -o bin/file/read.o

bin/test/read_test.out: src/test/read_test.cpp bin/file/read.o
	g++ src/test/read_test.cpp bin/file/read.o -o bin/test/read_test.out

bin/test/program.out: src/test/main.cpp
	g++ src/test/main.cpp -lGLEW -lGL -lglut -o bin/test/program.out

test_exec: bin/test/program.out
	./bin/test/program.out

test_read: bin/test/read_test.out
	./bin/test/read_test.out

test_clean:
	find bin/ -type f \( -name "*.out" -o -name "*.o" \) -exec rm {} \;