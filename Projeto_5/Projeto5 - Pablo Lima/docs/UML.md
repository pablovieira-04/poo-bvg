| **Usuario**                                |
| ------------------------------------------------ |
| - nome: string - email: string - tipo: string    |
| Usuario() Usuario(nome: string, email: string,   |
| tipo: string) gerarRelatorio(): virtual void = 0 |

| **Aluno**                                                           |
| ------------------------------------------------------------------------- |
| - matricula: string - curso: string - disciplinas: vector`<Disciplina>` |
| adicionarDisciplina exibirInformacoes() gerarRelatorio()                  |

| **FuncionarioAdministrativo** |
| ----------------------------------- |
| departamento: string cargo: string  |
| gerarRelatorio()                    |

| **Monitor**                              |
| ---------------------------------------------- |
| disciplinasMonitoradas: vector`<string>`     |
| adicionarDisciplinaMonitorada gerarRelatorio() |

| **Professor**                                              |
| ---------------------------------------------------------------- |
| areaDeAtuacao: string disciplinasMinistradas: vector`<string>` |
| adicionarDisciplina gerarRelatorio()                             |
