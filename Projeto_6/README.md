
# Gerenciamento Ampliado de Sistema Acadêmico

Este projeto é uma aplicação prática em C++ que simula um sistema acadêmico com funcionalidades como gerenciamento de notas, cadastro de usuários (alunos, professores, funcionários) e emissão de relatórios. Ele utiliza conceitos avançados de programação orientada a objetos, como herança, polimorfismo, sobrecarga e sobrescrita.

## Estrutura do Projeto

O projeto está organizado em diferentes arquivos para facilitar a modularização e a manutenção:

* **Classes principais:**
  * `Usuario`: Classe base para representar usuários do sistema.
  * `Aluno`: Representa um aluno, herda de `Usuario`.
  * `Professor`: Representa um professor, herda de `Usuario`.
  * `FuncionarioAdministrativo`: Representa um funcionário administrativo, herda de `Usuario`.
  * `Monitor`: Representa um monitor, herda de `Aluno` e `Professor`.
* **Arquivos de código:**
  * `main.cpp`: Ponto de entrada do programa.
  * `tests/`: Pasta contendo testes para validar o funcionamento das classes.

## Funcionalidades

* Cadastro de alunos, professores e funcionários administrativos.
* Gerenciamento de disciplinas e notas.
* Emissão de relatórios personalizados para cada tipo de usuário.
* Utilização de herança, polimorfismo e funções sobrescritas para flexibilizar o sistema.
