#include "MyArray.hpp"


// Définition du constructeur par défaut
template<class T>
MyArray<T>::MyArray() : size(10), myArray(new T[10]) {}

// Définition du constructeur paramétré
template<class T>
MyArray<T>::MyArray(unsigned int newSize) : size(newSize), myArray(new T[newSize]) {}

// Définition du destructeur
template<class T>
MyArray<T>::~MyArray() {
    delete[] myArray;
}

// Définition du getter pour la taille
template<class T>
unsigned int MyArray<T>::getSize() const {
    return size;
}

// Définition du getter pour le tableau
template<class T>
T* MyArray<T>::getArray() const {
    return myArray;
}

// Définition de la méthode pour remplir le tableau avec une valeur
template<class T>
void MyArray<T>::Fill(const T& val) {
    for (unsigned int i = 0; i < size; ++i) {
        myArray[i] = val;
    }
}

// Définition de la méthode pour ajouter un élément au tableau
template<class T>
void MyArray<T>::addItem(const T& val) {
    T* newArray = new T[size + 1];
    for (unsigned int i = 0; i < size; ++i) {
        newArray[i] = myArray[i];
    }
    newArray[size] = val;
    delete[] myArray;
    myArray = newArray;
    size++;
}

// Définition de la surcharge de l'opérateur []
template<class T>
T& MyArray<T>::operator[](unsigned int index) {
    if (index < size) {
        return myArray[index];
    } else {
        throw std::out_of_range("Index hors limites");
    }
}
