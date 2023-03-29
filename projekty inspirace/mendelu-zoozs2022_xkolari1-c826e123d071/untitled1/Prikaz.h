//
// Created by root on 06.12.2022.
//

#ifndef UNTITLED1_PRIKAZ_H
#define UNTITLED1_PRIKAZ_H


#include "Lektvar.h"
#include "Hrdina.h"

class Prikaz {
private:
    std::string m_jmeno;
public:
    Prikaz(std::string jmeno);
    virtual void pouzijLektrvar(Lektvar* lektvar, Hrdina* hrdina) = 0;
    virtual std::string getPopis();
    ~Prikaz();
};


#endif //UNTITLED1_PRIKAZ_H
