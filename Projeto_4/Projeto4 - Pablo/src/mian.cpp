#include <iostream>
#include "Aluno.h"
#include "Disciplina.h"

// Função amiga: verificar status de aprovação
bool verificarAprovacao(const Disciplina& disciplina) {
    return disciplina.nota >= 6.0;
}

int main() {
    // Criar aluno
    Aluno aluno("João Silva", "20230101", "Análise e Desenvolvimento de Sistemas");

    // Criar disciplinas
    Disciplina disciplina1("Programação", 60, 7.5);
    Disciplina disciplina2("Banco de Dados", 80, 5.0);

    // Exibir informações do aluno
    aluno.exibirInformacoes();

    // Verificar aprovação em cada disciplina
    std::cout << "\nStatus das Disciplinas:\n";
    std::cout << disciplina1.getNota() << " - " 
              << (verificarAprovacao(disciplina1) ? "Aprovado" : "Reprovado") << "\n";
    std::cout << disciplina2.getNota() << " - " 
              << (verificarAprovacao(disciplina2) ? "Aprovado" : "Reprovado") << "\n";

    return 0;
}
