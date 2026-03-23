
/* Programa: Examen
#include <iostream>

using namespace std;


int main() {

    int n = 0;

    cout << "Ingrese un numero : " << endl;
    cin >> n;

    for ( int i=0; i < 4; i++) {  // Error: utilize 2 for lo que hacia que se repita el bucle mas veces de lo necesario, se debe utilizar un solo for para imprimir los numeros del 1 al n con su cuadrado.
        for ( int j=0; j < n; j++) 
            cout << i << → << j << " "; // Errores: se debe poner "" en lugar de solo → y se debe imprimir la multiplicacion (el cuadrado) en lugar de la j.

        }
    }
    cout << endl;


    return 0;

}

*/

#include <iostream>

using namespace std;


int main() {


    int n = 0;
  

    cout << "Ingrese un numero : " << endl;
    cin >> n;
 
    for (int i = 1; i <= n; i++) {
        int multiplicacion = i * i;
        cout << i << " → " << multiplicacion << endl;
    }


    cout << endl;

    return 0;

}
    
