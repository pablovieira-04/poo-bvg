#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <iostream>

class Usuario {
protected:
    std::string nome;
    std::string email;
    std::string tipo;

public:
    // Construtores
    Usuario();
    Usuario(const std::string& nome, const std::string& email, const std::string& tipo);

    // Método virtual puro
    virtual void gerarRelatorio() const = 0;

    virtual ~Usuario() {}
};

#endif // USUARIO_H
