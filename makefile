main: main.cpp
	g++ -g main.cpp -o main
run: main
	./main
debug:main
	gdb -x debug.gdb 
mv:
	./mv.sh
clean:
	rm -rf a.out
