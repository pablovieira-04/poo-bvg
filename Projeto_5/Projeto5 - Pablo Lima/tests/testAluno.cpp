#include <iostream>
#include "../Aluno.h"
#include "../Disciplina.h"

void testAluno() {
    // Criando um objeto Aluno
    Aluno aluno("João Silva", "joao@email.com", "202301", "Engenharia de Software");

    // Adicionando disciplinas
    Disciplina d1("Matemática", 60, 8.0);
    Disciplina d2("Programação", 80, 9.5);
    aluno.adicionarDisciplina(d1);
    aluno.adicionarDisciplina(d2);

    // Exibindo informações
    std::cout << "== Teste Aluno ==" << std::endl;
    aluno.gerarRelatorio();
    aluno.exibirInformacoes();
}

int main() {
    testAluno();
    return 0;
}
