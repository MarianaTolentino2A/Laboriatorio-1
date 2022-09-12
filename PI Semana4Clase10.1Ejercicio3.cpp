/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main(){
    double nota1, nota2, nota3, promedio;
    cout << "Ingrese la primera nota: " << endl;
    cin >> nota1;
    cout << "Ingrese la segunda nota: " << endl;
    cin >> nota2;
    cout << "Ingrese la tercera nota: " << endl;
    cin >> nota3;
    promedio = (nota1 + nota2 + nota3)/3;
    if (promedio  >= 7 and promedio <= 10){
        cout << "Aprobado";
    } else if (promedio >= 4 && promedio < 7){
        cout << "Reprobado";
    } else if (promedio > 0 && promedio < 4){
        cout << "Reprobado";
    } else {
        cout << "Nota no Valida";
    }
}