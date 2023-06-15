#include <iostream>
#include <string>

class Boxeur {
private:
    std::string nom;
    float poids;

public:
    Boxeur(const std::string& nom, float poids) : nom(nom), poids(poids) {
        std::cout << "Boxeur 1 : " << nom << std::endl;
        std::cout << "" << std::endl;
    }

    ~Boxeur() {
        std::cout << "Destructeur Boxeur : " << nom << std::endl;
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
    // Instanciation de manière automatique
    Boxeur boxeur_1("Adonis Creed", 75.0f);
    std::cout << "Adresse : " << "365 W END AVE NEW YORK NY 10024-6560 USA" << std::endl;
    std::cout << "Poids : " << boxeur_1.getPoids() << "  kg" << std::endl;

    // Instanciation de manière dynamique
    Boxeur* boxeur_2 = new Boxeur("Box_2", 78.0f);
    std::cout << "Adresse boxeur_2 : " << boxeur_2 << std::endl;
    std::cout << "Nom boxeur_2 : " << boxeur_2->getNom() << std::endl;
    std::cout << "Poids boxeur_2 : " << boxeur_2->getPoids() << " kg" << std::endl;

    delete boxeur_2;

    return 0;
}
