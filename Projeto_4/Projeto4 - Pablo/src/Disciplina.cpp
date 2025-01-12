#include "Disciplina.h"

// Construtor padrão
Disciplina::Disciplina() : nome(""), cargaHoraria(0), nota(0.0) {}

// Construtor parametrizado
Disciplina::Disciplina(const std::string& nome, int cargaHoraria, float nota) 
    : nome(nome), cargaHoraria(cargaHoraria), nota(nota) {}

// Método para configurar a nota
void Disciplina::setNota(float nota) {
    if (nota >= 0.0 && nota <= 10.0) {
        this->nota = nota;
    } else {
        std::cout << "Nota inválida! Insira um valor entre 0.0 e 10.0.\n";
    }
}

// Método para obter a nota
float Disciplina::getNota() const {
    return nota;
}
