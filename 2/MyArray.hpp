#ifndef MYARRAY_HPP
#define MYARRAY_HPP

#include <iostream>
#include <string>

// Déclaration préalable des classes Personne et Point
class Personne;
class Point;

// Classe MyArray générique
template<class T>
class MyArray {
private:
    unsigned int size;
    T* myArray;

public:
    MyArray();
    MyArray(unsigned int newSize);
    ~MyArray();

    unsigned int getSize() const;
    T* getArray() const;

    void Fill(const T& val);
    void addItem(const T& val);
    T& operator[](unsigned int index);
};

// Déclaration de la classe Personne
class Personne {
public:
    std::string nom;
    int age;

    Personne(std::string n, int a);
};

// Déclaration de la classe Point
class Point {
public:
    int x, y;

    Point(int px, int py);
};

#endif /* MYARRAY_HPP */
