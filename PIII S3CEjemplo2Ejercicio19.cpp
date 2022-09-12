#include <iostream>
using namespace std;

int main(){
    int opcion = 0;
    do
    {
        cout << "Ingrese 1 para mostrar mensaje";
        cout << "Ingrese 2 para hacer algo más";
        cout << "Ingrese 0 para salir";
        
        cout << "Ingrese una opción a ejecutar";
        cin >> opcion;
    }
    while(opcion != 0);
    system("PAUSE");
    return 0;
}