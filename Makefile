bin/file/read.o: src/file/read.cpp
	g++ -c src/file/read.cpp -o bin/file/read.o

bin/test/read_test.out: src/test/read_test.cpp bin/file/read.o
	g++ src/test/read_test.cpp bin/file/read.o -o bin/test/read_test.out

bin/test/program.out: src/test/main.cpp
	g++ src/test/main.cpp -lGLEW -lGL -lglut -o bin/test/program.out

bin/init/window.o: src/init/window.cpp
	g++ -c src/init/window.cpp -o bin/init/window.o

bin/assn1/program.out: src/assn1/main.cpp bin/init/window.o
	g++ src/assn1/main.cpp bin/init/window.o -lGLEW -lGL -lglut -o bin/assn1/program.out

test_exec: bin/test/program.out
	./bin/test/program.out

test_read: bin/test/read_test.out
	./bin/test/read_test.out

run_assn1: bin/assn1/program.out
	./bin/assn1/program.out

build_assn1: bin/assn1/program.out
	echo "Building assn1 program..."

clean:
	find bin/ -type f \( -name "*.out" -o -name "*.o" \) -exec rm {} \;