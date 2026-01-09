all: stb_perlin.h
	gcc main.c -o perlinGenerator
	./perlinGenerator

leakcheck:
	gcc -g -O0 -Wall -Wextra main.c -o perlinGenerator
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./perlinGenerator
	make clean

clean:
	rm perlinGenerator 2> /dev/null || true
	rm output.png 2> /dev/null || true
