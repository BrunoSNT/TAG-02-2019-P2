# Compilador:
CC = g++

# Flags:
CFLAGS = -c -g -Wall -std=c++11

# modulos
MODULES = construtor.o ordenacao.o dfs.o caminho.o

# Compila o executavel a partir dos .o's
executavel: $(MODULES) main.o
	$(CC) main.o $(MODULES) -fPIC -o main

# modulo principal, o programa em si
main.o: main.cpp $(MODULES)
	$(CC) $(CFLAGS) main.cpp
	
# modulo de leitura de arquivo e criação do grafo
construction.o: construtor.cpp
	$(CC) $(CFLAGS) construtor.cpp
	

# modulo que cria uma ordenação topológica 
ordenacao.o: ordenacao.cpp
	$(CC) $(CFLAGS) ordenacao.cpp

# modulo que percorre o grafo em DFS
dfs.o: dfs.cpp
	$(CC) $(CFLAGS) dfs.cpp

# modulo que acha o menor caminho
caminho.o: caminho.cpp
	$(CC) $(CFLAGS) caminho.cpp