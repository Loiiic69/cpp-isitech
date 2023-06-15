#include <iostream>
#include <string>

class Boxeur {
private:
    std::string nom;
    float poids;

public:
    Boxeur(const std::string& _nom, float _poids) : nom(_nom), poids(_poids) {
        std::cout << "------------------------------------" << std::endl;
        std::cout << "------------------------------------" << std::endl;
        std::cout << "    Participant : " << nom << std::endl;
        std::cout << "------------------------------------" << std::endl;
        std::cout << "------------------------------------" << std::endl;
        std::cout << "" << std::endl;


    }

    ~Boxeur() {
    }

    std::string getNom() const {
        return nom;
    }

    float getPoids() const {
        return poids;
    }

    void setPoids(float _poids) {
        poids = _poids;
    }
};

class Combat {
private:
    std::string niveau;
    Boxeur* coinBleu;
    Boxeur* coinRouge;
    Boxeur* vainqueur;

public:
    Combat(const std::string& _niveau) : niveau(_niveau), coinBleu(nullptr), coinRouge(nullptr), vainqueur(nullptr) {
        std::cout << "------------------------------------" << std::endl;
        std::cout << "------------------------------------" << std::endl;
        std::cout << "" << std::endl;
    }

    ~Combat() {
    }

    std::string getNiveau() const {
        return niveau;
    }

    Boxeur* getCoinBleu() const {
        return coinBleu;
    }

    void setCoinBleu(Boxeur* boxeur) {
        coinBleu = boxeur;
    }

    Boxeur* getCoinRouge() const {
        return coinRouge;
    }

    void setCoinRouge(Boxeur* boxeur) {
        coinRouge = boxeur;
    }

    Boxeur* designerVainqueur(const std::string& couleurCoin) {
        if (couleurCoin == "rouge") {
            vainqueur = coinRouge;
        } else if (couleurCoin == "bleu") {
            vainqueur = coinBleu;
        } else {
            vainqueur = nullptr;
        }

        return vainqueur;
    }
};

void afficheResultats(Combat* combats[], int taille) {
    for (int i = 0; i < taille; i++) {
        Combat* combat = combats[i];
        std::cout << "Niveau du combat : " << combat->getNiveau() << std::endl;

        Boxeur* coinBleu = combat->getCoinBleu();
        Boxeur* coinRouge = combat->getCoinRouge();
        Boxeur* vainqueur = combat->designerVainqueur("bleu");

        if (coinBleu != nullptr) {
            std::cout << "Coin bleu : " << coinBleu->getNom() << std::endl;
        }

        if (coinRouge != nullptr) {
            std::cout << "Coin rouge : " << coinRouge->getNom() << std::endl;
            std::cout << "" << std::endl;
            std::cout << "------------------------------------" << std::endl;
            std::cout << "------------------------------------" << std::endl;
            std::cout << "" << std::endl;

        }

        if (vainqueur != nullptr) {
            std::cout << "     VAINQUEUR : " << vainqueur->getNom() << std::endl;
            std::cout << "" << std::endl;
            std::cout << "------------------------------------" << std::endl;
            std::cout << "------------------------------------" << std::endl;
        }

        std::cout << std::endl;
    }
}

int main() {
    Boxeur boxeur_1("Adonis Creed", 75.0f);
    std::cout << "Nom : " << boxeur_1.getNom() << std::endl;
    std::cout << "Poids : " << boxeur_1.getPoids() << " kg" << std::endl;
    std::cout << "Adresse : " << &boxeur_1 << std::endl;
    std::cout << std::endl;

    Boxeur boxeur_2("Rocky Balboa", 78.0f);
    std::cout << "Nom : " << boxeur_2.getNom() << std::endl;
    std::cout << "Poids : " << boxeur_2.getPoids() << " kg" << std::endl;
    std::cout << "Adresse : " << &boxeur_2 << std::endl;
    std::cout << std::endl;


    Combat combat_1("Finale");

    combat_1.setCoinBleu(&boxeur_1);

    combat_1.setCoinRouge(&boxeur_2);

    Combat* combats[3];
    combats[0] = &combat_1;

    // Ajoutez ici la création des autres combats et l'association avec les boxeurs

    afficheResultats(combats, 1);

    return 0;
}
