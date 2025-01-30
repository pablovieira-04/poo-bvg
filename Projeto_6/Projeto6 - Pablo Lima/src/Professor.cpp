#include "Professor.h"

// Construtor padrão
Professor::Professor() : Usuario(), areaDeAtuacao("") {}

// Construtor parametrizado
Professor::Professor(const std::string& nome, const std::string& email, const std::string& areaDeAtuacao)
    : Usuario(nome, email, "Professor"), areaDeAtuacao(areaDeAtuacao) {}

// Adicionar disciplina ministrada
void Professor::adicionarDisciplina(const std::string& disciplina) {
    disciplinasMinistradas.push_back(disciplina);
}

// Sobrescrita do método gerarRelatorio
void Professor::gerarRelatorio() const {
    std::cout << "Relatório do Professor\n";
    std::cout << "Nome: " << nome << "\n"
              << "Área de Atuação: " << areaDeAtuacao << "\n"
              << "Disciplinas Ministradas:\n";
    for (const auto& disciplina : disciplinasMinistradas) {
        std::cout << " - " << disciplina << "\n";
    }
}
