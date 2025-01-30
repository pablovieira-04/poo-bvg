#include "Aluno.h"
#include <iostream>

Aluno::HistoricoDisciplinar::HistoricoDisciplinar(const std::string& nomeDisciplina, int anoCursado, float nota)
    : nomeDisciplina(nomeDisciplina), anoCursado(anoCursado), nota(nota) {}

Aluno::Aluno(const std::string& nome, const std::string& email, const std::string& senha, const std::string& matricula, const std::string& curso)
    : UsuarioAutenticavel(nome, email, senha), matricula(matricula), curso(curso) {}

bool Aluno::autenticar(const std::string& senha) const {
    return this->senha == senha;
}

void Aluno::gerarRelatorio() const {
    std::cout << "Relatório do Aluno:\n";
    std::cout << "Nome: " << nome << "\nEmail: " << email << "\nMatrícula: " << matricula << "\nCurso: " << curso << "\n\n";
    std::cout << "Histórico Disciplinar:\n";
    for (const auto& disciplina : historico) {
        std::cout << " - Disciplina: " << disciplina.nomeDisciplina
                  << ", Ano: " << disciplina.anoCursado
                  << ", Nota: " << disciplina.nota << "\n";
    }
}

void Aluno::adicionarDisciplinaAoHistorico(const std::string& nomeDisciplina, int anoCursado, float nota) {
    historico.emplace_back(nomeDisciplina, anoCursado, nota);
}