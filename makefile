main: main.cpp
	g++ -g main.cpp -o main
run: main
	./main
push:
	./gitpush.sh
debug:main
	gdb -x debug.gdb 
mv:
	./mv.sh
clean:
	rm -rf a.out
	rm -rf main
