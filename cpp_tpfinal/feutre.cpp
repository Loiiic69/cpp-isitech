//
//  feutre.cpp
//  cpp_tpfinal
//
//  Created by Loic FLORIMONT on 13/11/2023.
//

#include "feutre.hpp"
#include <string>
#include <iostream>



class Feutre {
private:
    std::string couleur;
    bool bouche;
public:
    Feutre(std::string couleur) : couleur(couleur), bouche(true) {}

    ~Feutre() {
    }

    std::string getCouleur() const {
        return couleur;
    }

    bool estBouche() const {
        return bouche;
    }

    void EcrireMessage(const std::string& message) {
        if (!bouche) {
            std::cout << "Feutre de couleur " << couleur << ": " << message << std::endl;
        } else {
            std::cout << "Le feutre est bouché. Débouchez-le pour écrire." << std::endl;
        }
    }

    void Bouche() {
        bouche = true;
        std::cout << "Feutre de couleur " << couleur << " bouché." << std::endl;
    }

    void Debouche() {
        bouche = false;
        std::cout << "Feutre de couleur " << couleur << " débouché." << std::endl;
    }
};
