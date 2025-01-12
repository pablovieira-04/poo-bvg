#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>
#include <iostream>

class Disciplina {
private:
    std::string nome;
    int cargaHoraria;
    float nota;

public:
    Disciplina(); // Construtor padrão
    Disciplina(const std::string& nome, int cargaHoraria, float nota); // Construtor parametrizado

    void setNota(float nota);
    float getNota() const;

    friend bool verificarAprovacao(const Disciplina& disciplina); // Função amiga
};

#endif
