
#include <iostream>
using namespace std;

int main() {

    int num;
    int cantidad = 0;

    cout << "Ingrese un numero entero: ";
    cin >> num;


    while (num > 1) {
       int resultado = num / 2;
        cantidad++;
        cout << num << " / 2 = " << resultado << endl;
        num = resultado;
    }

    cout << "Se dividio " << cantidad << " veces" << endl;

    return 0;

}

/*Complejidad Big O: O(log n)
 porque el numero de divisiones realizadas es 
 proporcional al logaritmo del numero ingresado, ya que cada division reduce el numero a la mitad. 
 Lo que significa que el numero de divisiones necesarias para reducir el numero a 1 es logaritmico 
 en relacion al valor del numero ingresado.*/