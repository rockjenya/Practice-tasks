hello: world.c
	g++ -o hello world.c

clean:
	rm -rf *.o hello
