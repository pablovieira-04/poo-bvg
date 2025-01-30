#include <iostream>
#include "Aluno.h"

int main() {
    Aluno aluno("João Silva", "joao.silva@email.com", "senha123", "2021001", "Ciência da Computação");

    aluno.adicionarDisciplinaAoHistorico("Programação Orientada a Objetos", 2023, 9.5);
    aluno.adicionarDisciplinaAoHistorico("Estruturas de Dados", 2023, 8.0);

    if (aluno.autenticar("senha123")) {
        aluno.gerarRelatorio();
    } else {
        std::cout << "Autenticação falhou.\n";
    }

    return 0;
}
