#include "../src/Disciplina.h"
#include <cassert>
#include <iostream>

void testarDisciplina() {
    // Criar disciplinas usando construtor parametrizado
    Disciplina disciplina1("Programação", 60, 7.5);
    Disciplina disciplina2("Banco de Dados", 80, 5.0);

    // Verificar se as notas estão configuradas corretamente
    std::cout << "Testando a classe Disciplina:\n";
    assert(disciplina1.getNota() == 7.5 && "Nota da disciplina Programação está incorreta");
    assert(disciplina2.getNota() == 5.0 && "Nota da disciplina Banco de Dados está incorreta");

    // Testar a verificação de aprovação
    assert(verificarAprovacao(disciplina1) == true && "Disciplina Programação deveria ser aprovada");
    assert(verificarAprovacao(disciplina2) == false && "Disciplina Banco de Dados deveria ser reprovada");

    std::cout << "Teste da classe Disciplina passou com sucesso!" << std::endl;
}

int main() {
    testarDisciplina();
    return 0;
}
