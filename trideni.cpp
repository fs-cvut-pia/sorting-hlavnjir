#include "trideni.h"
#include <iostream>
#include <fstream>
#include <string>
#include <exception>
#include <algorithm>
#include <cstdio>
#include<bits/stdc++.h>

void nacti (std::string nazev, seznam_slov & jmena) {
    std::ifstream soubor;
    soubor.open(nazev.c_str());

    std::string polozka;

    while(std::getline(soubor, polozka)){
        jmena.push_back(polozka);
    }

    soubor.close();
}

void serad (seznam_slov & jmena) {
    //std::stable_sort(jmena.begin(), jmena.end());
    //make_heap(jmena.begin(), jmena.end());
    sort_heap(jmena.begin(), jmena.end());
    bool swapped;
    int j;
    for (j = 0; j < jmena.size() - 1; j++){
        swapped = false;
        int i;
        for (i = 0; i < jmena.size() - j - 1; ++i) {
           if (jmena[i] > jmena[i+1]) {
               std::swap(jmena[i], jmena[i+1]);
               swapped = true;
            }
        }
        if (!swapped){
            break;
        }
    }
}

bool zeptej_se_jestli_vypsat() {
    char print;
    std::cout << "Vypsat seznam serazenych jmen? [Y/n]" << std::endl;
    std::cin >> print;
    if (print =='Y'|| print =='y') {
        return true;
    }
    else {
        return false;
    }

}

void vypis (seznam_slov const& jmena){
    std::cout << "Vypisuji serazena jmena:" << std::endl;
    for (const auto & it : jmena)
        std::cout << ' ' << it << std::endl;
    std::cout << '\n';


}