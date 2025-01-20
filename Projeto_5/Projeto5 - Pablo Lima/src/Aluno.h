#ifndef ALUNO_H
#define ALUNO_H

#include "Usuario.h"
#include <vector>
#include "Disciplina.h"

class Aluno : public Usuario {
private:
    std::string matricula;
    std::string curso;
    std::vector<Disciplina> disciplinas;

public:
    // Construtores
    Aluno();
    Aluno(const std::string& nome, const std::string& email, const std::string& matricula, const std::string& curso);

    // Métodos
    void adicionarDisciplina(const Disciplina& disciplina);
    void gerarRelatorio() const override;

    // Sobrecarga de exibição de informações
    void exibirInformacoes(bool exibirNotas) const;
};

#endif // ALUNO_H
