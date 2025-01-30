#ifndef ALUNO_H
#define ALUNO_H

#include <string>
#include <vector>
#include "UsuarioAutenticavel.h"
#include "Relatorio.h"

class Aluno : public UsuarioAutenticavel, public Relatorio {
public:
    class HistoricoDisciplinar {
    public:
        std::string nomeDisciplina;
        int anoCursado;
        float nota;

        HistoricoDisciplinar(const std::string& nomeDisciplina, int anoCursado, float nota);
    };

private:
    std::string matricula;
    std::string curso;
    std::vector<HistoricoDisciplinar> historico;

public:
    Aluno(const std::string& nome, const std::string& email, const std::string& senha, const std::string& matricula, const std::string& curso);
    bool autenticar(const std::string& senha) const override;
    void gerarRelatorio() const override;
    void adicionarDisciplinaAoHistorico(const std::string& nomeDisciplina, int anoCursado, float nota);
};

#endif