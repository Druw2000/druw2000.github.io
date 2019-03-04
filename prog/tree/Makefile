CC=gcc
FLAGS=-g -lm `sdl2-config --cflags --libs` -lpthread
tree: tree.c loop.c
	$(CC) tree.c loop.c -o tree.o $(FLAGS)
