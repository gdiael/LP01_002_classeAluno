#include <iostream>
#include <cstring>

#include "aluno.h"

Aluno::Aluno (const char * matricula_, const char * nome_, int idade_,
			const char sexo_, const char * fatorRh_): m_idade(idade_), m_sexo(sexo_){
				strcpy(m_matricula, matricula_);
				strcpy(m_nome, nome_);
				strcpy(m_fatorRh, fatorRh_);
			}

Aluno::Aluno (): m_matricula("0000000-0"), m_nome("Jhon Doe"), 
	m_idade(0), m_sexo('U'), m_fatorRh("U"){}

char *
Aluno::getMatricula(){
	return m_matricula;
}

void 
Aluno::setMatricula(const char * matricula){
	strcpy(m_matricula, matricula);
}

char * 
Aluno::getNome(){
	return m_nome;
}
	
void 
Aluno::setNome(const char * nome_){
	strcpy(m_nome, nome_);
}

int 
Aluno::getIdade(){
	return m_idade;
}

void 
Aluno::setIdade(int idade_){
	if (idade_ >0)
		m_idade = idade_;
	else
		std::cerr << "ERRO. Idade deve ser maior que 0." << std::endl;
	
}

char 
Aluno::getSexo(){
	return m_sexo;
}

void 
Aluno::setSexo(const char sexo_){
	if (sexo_=='M' || sexo_=='F')
		m_sexo = sexo_;
	else
		std::cerr << "ERRO. Sexo deve ser M ou F." << std::endl;
}

char * 
Aluno::getFatorRh(){
	return m_fatorRh;
}

void 
Aluno::setFatorRh(const char * fatorRh_){
	strcpy(m_fatorRh, fatorRh_);
}

void
Aluno::print(){
	std::cout << "Matricula: " << m_matricula << std::endl;
	std::cout << "Nome: " << m_nome << std::endl;
	std::cout << "Idade: " << m_idade << " Sexo: " << m_sexo << " Tipo Sanguineo: " << m_fatorRh << std::endl;
}