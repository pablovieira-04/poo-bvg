#include "UsuarioAutenticavel.h"

UsuarioAutenticavel::UsuarioAutenticavel(const std::string& nome, const std::string& email, const std::string& senha) : Usuario(nome, email), senha(senha) {}

// Arquivo Relatorio.h
#ifndef RELATORIO_H
#define RELATORIO_H

class Relatorio {
public:
    virtual void gerarRelatorio() const = 0;
    virtual ~Relatorio() = default;
};

#endif