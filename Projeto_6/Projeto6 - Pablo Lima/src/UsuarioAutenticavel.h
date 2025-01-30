#ifndef USUARIO_AUTENTICAVEL_H
#define USUARIO_AUTENTICAVEL_H

#include <string>
#include "Usuario.h"

class UsuarioAutenticavel : public Usuario {
protected:
    std::string senha;

public:
    UsuarioAutenticavel(const std::string& nome, const std::string& email, const std::string& senha);
    virtual bool autenticar(const std::string& senha) const = 0;
    virtual ~UsuarioAutenticavel() = default;
};

#endif