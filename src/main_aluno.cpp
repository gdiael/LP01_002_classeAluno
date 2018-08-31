#include <iostream>

#include "aluno.h"

int main(int argc, char const *argv[])
{
	Aluno teste;
	teste.setMatricula("123456");
	teste.setNome("Ronilson Avilar da Silva");
	teste.setIdade(-18);
	teste.setSexo('S');
	teste.setFatorRh("AB+");
	teste.print();

	Aluno * outro = new Aluno("121234","Mariana da Silva Sauro", 23, 'F', "O+");
	outro->print();
	
	return 0;
}