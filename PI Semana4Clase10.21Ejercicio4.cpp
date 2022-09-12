/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
    {
    int numero1, numero2, numero3;
    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;
    cout << "Ingrese el tercer numero: ";
    cin >> numero3;
    if (numero1 > numero2 && numero1 > numero3){
        cout << "El numero mayor es: " << numero1 << edl ;
    }else if (el numero2 > numero1 && numero2 > numero3){
     cout << "El numero mayor es: " << numero2 <<endl;
    }else if (el numero3 > numero1 && numero3 > numero2){
        cout << "El numero mayor es: " << numero3 <<endl;
    }else {
        cout << "Los numeros son iguales " << endl;
    }
}