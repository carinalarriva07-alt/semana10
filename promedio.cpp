#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector< int > numeros;

    int num1;
    int num2;
    int num3;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    numeros.push_back(num1);
    numeros.push_back(num2);
    numeros.push_back(num3);

    // suma 

    int suma = 0;
    for (int num : numeros) {
        suma += num;        

    }

    int promedio = suma / 3;

    cout << "El promedio de los numeros ingresados es: " << promedio << endl;
        return 0;
}

/*Complejidad Big O: O(1) porque el numero de operaciones es constante,
 ya que siempre se ingresan 3 numeros y se realiza una cantidad fija de
 operaciones para calcular el promedio, 
 independientemente del valor de los numeros ingresados.
*/

