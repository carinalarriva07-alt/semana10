
/* Programa: Examen
#include <iostream>

using namespace std;


int main() {

    int n = 0;

    cout << "Ingrese un numero : " << endl;
    cin >> n;

    for ( int i=0; i < 4; i++) {  // Errores: el for debe inicializarse en 1
        for ( int j=0; j < n; j++) {  // Errores: el for debe inicializarse en 1 y la condicion debe ser j <= n
            cout << i << → << j << endl; // Errores: se debe poner "" en lugar de → y se debe imprmir

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
    int multiplicacion = 0;

    cout << "Ingrese un numero : " << endl;
    cin >> n;
 
    for (int i = 1; i <= n; i++) {
        int multiplicacion = i * i;
        cout << i << " → " << multiplicacion << endl;
    }


    cout << endl;

    return 0;

}
    
