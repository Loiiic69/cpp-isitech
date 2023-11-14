#include <iostream>
#include <string>
#include "feutre.cpp"

const std::string blue("\033[0;34m");
const std::string red("\033[0;31m");
const std::string reset("\033[0m");


int main() {
    Feutre feutreRouge(" rouge");
    Feutre feutreBleu(" bleu");

    feutreRouge.EcrireMessage(red+" Bonjour!"+reset);
    feutreBleu.Debouche();
    feutreBleu.EcrireMessage(blue+" Écrivons quelque chose de bleu !"+reset );


    return 0;
}
