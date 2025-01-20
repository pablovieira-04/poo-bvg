#include <iostream>
#include "../Professor.h"

void testProfessor() {
    // Criando um objeto Professor
    Professor professor("Maria Oliveira", "maria@email.com", "Ciência da Computação");

    // Adicionando disciplinas ministradas
    professor.adicionarDisciplina("Algoritmos");
    professor.adicionarDisciplina("Estruturas de Dados");

    // Exibindo informações
    std::cout << "== Teste Professor ==" << std::endl;
    professor.gerarRelatorio();
}

int main() {
    testProfessor();
    return 0;
}
