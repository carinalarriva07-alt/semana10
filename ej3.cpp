
#include <iostream>
#include <vector>
using namespace std;

int main() {

    int cantidadNumeros;
    vector<int> numeros;

    std:: cout << "Cuantos numeros va a ingresar?: ";
    std::cin >> cantidadNumeros;
   

    for (int i = 0; i < cantidadNumeros; i++) {
        int num;
        std::cout << "Ingrese el numero " << i + 1 << ": ";
        std::cin >> num;
        numeros.push_back(num);
    }

     for (int i = 0; i < cantidadNumeros; i++) {
        for (int j = 0; j < cantidadNumeros; j++) {
            if (i != j) {  
                std::cout << "(" << numeros[i] << ", " << numeros[j] << ")\n";
                }
         }
    }

    return 0;
}

/*Complejidad Big O: O(n^2) porque el algoritmo utiliza dos bucles 
anidados para generar todas las combinaciones posibles de pares de numeros, 
donde n es la cantidad de numeros ingresados.*/
