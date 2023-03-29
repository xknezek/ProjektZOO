//
// Created by root on 06.12.2022.
//

#include "Prikaz.h"

Prikaz::~Prikaz() {

}

Prikaz::Prikaz(std::string jmeno) {
    m_jmeno = jmeno;
}

std::string Prikaz::getPopis() {
    return m_jmeno;
}
