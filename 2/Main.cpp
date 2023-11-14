#include "MyArray.hpp"

int main() {
    // Utilisation avec des entiers
    MyArray<int> intArray(5);
    intArray.Fill(42);
    intArray.addItem(99);

    std::cout << "Int Array Size: " << intArray.getSize() << std::endl;
    std::cout << "Int Array Elements: ";
    for (unsigned int i = 0; i < intArray.getSize(); ++i) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    // Utilisation avec des instances de Personne
    MyArray<Personne> personneArray(2);
    personneArray[0] = Personne("Alice", 25);
    personneArray[1] = Personne("Bob", 30);

    std::cout << "\nPersonne Array Size: " << personneArray.getSize() << std::endl;
    std::cout << "Personne Array Elements: ";
    for (unsigned int i = 0; i < personneArray.getSize(); ++i) {
        std::cout << personneArray[i].nom << "(" << personneArray[i].age << ") ";
    }
    std::cout << std::endl;

    // Utilisation avec des instances de Point
    MyArray<Point> pointArray(3);
    pointArray[0] = Point(1, 2);
    pointArray[1] = Point(3, 4);
    pointArray[2] = Point(5, 6);

    std::cout << "\nPoint Array Size: " << pointArray.getSize() << std::endl;
    std::cout << "Point Array Elements: ";
    for (unsigned int i = 0; i < pointArray.getSize(); ++i) {
        std::cout << "(" << pointArray[i].x << ", " << pointArray[i].y << ") ";
    }
    std::cout << std::endl;

    return 0;
}
