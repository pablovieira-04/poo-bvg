#include "../src/Aluno.h"
#include <cassert>
#include <iostream>

void testarAluno() {
    // Criar aluno usando construtor parametrizado
    Aluno aluno("João Silva", "20230101", "Análise e Desenvolvimento de Sistemas");

    // Exibir as informações do aluno
    std::cout << "Testando a classe Aluno:\n";
    aluno.exibirInformacoes(); // O método exibe as informações do aluno

    // Comparando corretamente as informações
    assert(aluno.nome == "João Silva" && "Nome do aluno está incorreto");
    assert(aluno.matricula == "20230101" && "Matrícula do aluno está incorreta");
    assert(aluno.curso == "Análise e Desenvolvimento de Sistemas" && "Curso do aluno está incorreto");

    std::cout << "Teste da classe Aluno passou com sucesso!" << std::endl;
}

int main() {
    testarAluno();
    return 0;
}
