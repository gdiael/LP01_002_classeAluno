#ifndef ALUNO_H
#define ALUNO_H

class Aluno
{
private:
	char 	m_matricula[10];
	char 	m_nome[80];
	int 	m_idade;
	char 	m_sexo;
	char 	m_fatorRh[4];
public:
	Aluno (const char * matricula_, const char * nome_, int idade_,
			const char sexo_, const char * fatorRh_);
	Aluno ();

	char * getMatricula();
	void setMatricula(const char * matricula_);

	char * getNome();
	void setNome(const char * nome_);

	int getIdade();
	void setIdade(int idade_);

	char getSexo();
	void setSexo(const char sexo_);

	char * getFatorRh();
	void setFatorRh(const char * fatorRh_);

	void print();
};

#endif









