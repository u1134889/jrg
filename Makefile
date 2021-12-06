test_program: src/test/main.cpp
	g++ src/test/main.cpp -lGLEW -lGL -lglut -o bin/test/program.out

test_exec: test_program
	./bin/test/program.out

test_clean:
	rm bin/test/program.out