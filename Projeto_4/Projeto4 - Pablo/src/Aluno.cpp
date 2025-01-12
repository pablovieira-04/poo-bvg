#include "Aluno.h"

// Construtor padrão
Aluno::Aluno() : nome(""), matricula(""), curso("") {}

// Construtor parametrizado
Aluno::Aluno(const std::string& nome, const std::string& matricula, const std::string& curso) 
    : nome(nome), matricula(matricula), curso(curso) {}

// Método para exibir informações do aluno
void Aluno::exibirInformacoes() const {
    std::cout << "Informações do Aluno:\n";
    std::cout << "Nome: " << nome << "\n";
    std::cout << "Matrícula: " << matricula << "\n";
    std::cout << "Curso: " << curso << "\n";
}
