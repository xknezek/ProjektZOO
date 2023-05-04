//
// Created by root on 06.12.2022.
//

#ifndef UNTITLED1_HRDINA_H
#define UNTITLED1_HRDINA_H


#include <vector>
#include "Lektvar.h"

class Prikaz;

class Hrdina {
private:
    int m_zivot;
    std::vector<Lektvar*> m_lektvary;
    std::vector<Prikaz*> m_prikazy;
public:
    Hrdina(int zivot);
    void vypisLektvary();
    void vypisPrikazy();
    void seberLektvar(Lektvar* lektvar);
    void pouzijLektvar();
    void naucSePrikaz(Prikaz* prikaz);
    int getZivot();
    void setZivot(int kolik);

};


#endif //UNTITLED1_HRDINA_H
