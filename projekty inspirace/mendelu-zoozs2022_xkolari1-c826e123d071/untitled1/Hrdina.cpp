//
// Created by root on 06.12.2022.
//

#include <iostream>
#include "Hrdina.h"
#include "Prikaz.h"

Hrdina::Hrdina(int zivot) {
    m_zivot = zivot;
}

int Hrdina::getZivot() {
    return m_zivot;
}

void Hrdina::setZivot(int kolik) {
    m_zivot = kolik;
}

void Hrdina::naucSePrikaz(Prikaz *prikaz) {
    m_prikazy.push_back(prikaz);
}

void Hrdina::seberLektvar(Lektvar *lektvar) {
    m_lektvary.push_back(lektvar);
}

void Hrdina::vypisLektvary() {
    int x = 0;
    for(Lektvar* lektvar : m_lektvary){
        std::cout << "Cislo " << x++ << ": " << std::endl;
        lektvar->printInfo();
    }
}

void Hrdina::vypisPrikazy() {
    int x = 0;
    for(Prikaz* prikaz : m_prikazy){
        std::cout << "Cislo " << x++ << ": " << std::endl;
        std::cout << prikaz->getPopis() << std::endl;
    }

}

void Hrdina::pouzijLektvar() {
    vypisLektvary();
    std::cout << "Vyber lektvar" << std::endl;
    int lektvarID;
    std::cin >> lektvarID;
    vypisPrikazy();
    std::cout << "Vyber prikaz" << std::endl;
    int prikazID;
    std::cin >> prikazID;
    m_prikazy.at(prikazID)->pouzijLektrvar(m_lektvary.at(lektvarID), this);
}
