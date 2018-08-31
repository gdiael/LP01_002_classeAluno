# Arquivo de Script Makefile
# 
# Aula de LP1 2018.2
# 16/08/2018 - 30/08/2018
# Clonagem atual para teste [minha implementação] :
# 				git clone https://github.com/gdiael/LP01_002_classeAluno.git
#
# Gdiael Souto Barros
#

CC = g++

OBJ = ./build
SRC = ./src
BIN = ./bin
INC = ./include

PROG1 = $(BIN)/testAluno

CPPFLAGS = -Wall -pedantic -std=c++11 -I$(INC)

OBJ1 = $(OBJ)/aluno.o $(OBJ)/main_aluno.o

all: mkdirs $(PROG1)

mkdirs:
	mkdir -p $(BIN)
	mkdir -p $(OBJ)

$(PROG1): $(OBJ1)
	$(CC) $(CPPFLAGS) -o $(PROG1) $(OBJ1)

$(OBJ)/aluno.o: $(SRC)/aluno.cpp $(INC)/aluno.h
	$(CC) $(CPPFLAGS) -c $(SRC)/aluno.cpp -o $(OBJ)/aluno.o

$(OBJ)/main_aluno.o: $(SRC)/main_aluno.cpp $(INC)/aluno.h
	$(CC) $(CPPFLAGS) -c $(SRC)/main_aluno.cpp -o $(OBJ)/main_aluno.o

clean: 
	rm -f $(BIN)/*
	rm -f $(OBJ)/*