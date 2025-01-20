#include <iostream>
#include <vector>
#include "Aluno.h"
#include "Professor.h"
#include "FuncionarioAdministrativo.h"
#include "Monitor.h"

int main() {
    // Criar instâncias de diferentes tipos de usuários
    Aluno aluno("João Silva", "joao@gmail.com", "20230101", "Sistemas de Informação");
    aluno.adicionarDisciplina(Disciplina("Matemática", 60, 8.5));
    aluno.adicionarDisciplina(Disciplina("Algoritmos", 80, 9.0));

    Professor professor("Ana Paula", "ana@gmail.com", "Ciência da Computação");
    professor.adicionarDisciplina("Estrutura de Dados");
    professor.adicionarDisciplina("Banco de Dados");

    FuncionarioAdministrativo funcionario("Carlos Alberto", "carlos@gmail.com", "RH", "Gerente");

    Monitor monitor("Maria Clara", "maria@gmail.com", "20230102", "Engenharia de Software", "Programação");
    monitor.adicionarDisciplinaMonitorada("Programação Orientada a Objetos");

    // Polimorfismo para relatórios
    std::vector<Usuario*> usuarios = {&aluno, &professor, &funcionario, &monitor};

    for (const auto& usuario : usuarios) {
        usuario->gerarRelatorio();
        std::cout << "----------------------\n";
    }

    return 0;
}
