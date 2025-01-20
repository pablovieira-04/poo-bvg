#include "Aluno.h"

// Construtor padrão
Aluno::Aluno() : Usuario(), matricula(""), curso("") {}

// Construtor parametrizado
Aluno::Aluno(const std::string& nome, const std::string& email, const std::string& matricula, const std::string& curso)
    : Usuario(nome, email, "Aluno"), matricula(matricula), curso(curso) {}

// Adicionar disciplina
void Aluno::adicionarDisciplina(const Disciplina& disciplina) {
    disciplinas.push_back(disciplina);
}

// Sobrescrita do método gerarRelatorio
void Aluno::gerarRelatorio() const {
    std::cout << "Relatório do Aluno\n";
    std::cout << "Nome: " << nome << "\n"
              << "Matrícula: " << matricula << "\n"
              << "Curso: " << curso << "\n";
    for (const auto& disciplina : disciplinas) {
        std::cout << "Disciplina: " << disciplina.getNome() << " - Nota: " << disciplina.getNota() << "\n";
    }
}

// Sobrecarga de exibição
void Aluno::exibirInformacoes(bool exibirNotas) const {
    std::cout << "Informações do Aluno\n";
    std::cout << "Nome: " << nome << "\n"
              << "Matrícula: " << matricula << "\n"
              << "Curso: " << curso << "\n";
    if (exibirNotas) {
        for (const auto& disciplina : disciplinas) {
            std::cout << "Disciplina: " << disciplina.getNome() << " - Nota: " << disciplina.getNota() << "\n";
        }
    }
}
