#include <iostream>
#include <vector>
using namespace std;

int main() {

    int cantidadNumeros;
    vector<int> numeros;

    std:: cout << "Cuantos numeros va a ingresar: ";
    std::cin >> cantidadNumeros;
   

    for (int i = 0; i < cantidadNumeros; i++) {
        int num;
        std::cout << "Ingrese el numero " << i + 1 << ": ";
        std::cin >> num;
        numeros.push_back(num);
    }

    int mayor = numeros[0];
    int menor = numeros[0];

    for (int num : numeros) {
        if (num > mayor) {
            mayor = num; }
        if (num < menor) {
            menor = num; }
       }

    std::cout << "El mayor es: " << mayor << endl;
    std::cout << "El menor es: " << menor << endl;

    return 0;
}


/*Complejidad Big O: O(n) porque el algoritmo recorre cada elemento de la lista de numeros uno por uno
para encontrar el mayor y el menor, donde n es la cantidad de numeros ingresados.*/