#include <iostream>
#include <string>


class Boxeur {
private:
    std::string nom;
    float poids;

public:
    Boxeur(const std::string& nom, float poids) : nom(nom), poids(poids) {
        std::cout << "Participant : " << std::endl;
        std::cout << "" << std::endl;
    }

    ~Boxeur() {
        std::cout << "Destructeur Boxeur : " << nom << std::endl;
        std::cout << "" << std::endl;
    }

    std::string getNom() const {
        return nom;
    }

    float getPoids() const {
        return poids;
    }

    void setPoids(float poids) {
        this->poids = poids;
    }
};

int main() {
    Boxeur boxeur_1("Adonis Creed", 75.0f);
    std::cout << "Nom : " << boxeur_1.getNom() << std::endl;
    std::cout << "Poids : " << boxeur_1.getPoids() << "  kg" << std::endl;
    std::cout << "Adresse : " << &boxeur_1 << std::endl;
    std::cout << "" << std::endl;


    Boxeur* boxeur_2 = new Boxeur("Rocky Balboa", 80.0f);
    std::cout << "Nom : " << boxeur_2->getNom() << std::endl;
    std::cout << "Poids : " << boxeur_2->getPoids() << " kg" << std::endl;
    std::cout << "Adresse : " << &boxeur_2 << std::endl;
    std::cout << "" << std::endl;


    delete boxeur_2;

    return 0;
}
