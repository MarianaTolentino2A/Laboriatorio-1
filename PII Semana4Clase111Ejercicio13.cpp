#include <iostream>
using namespace std;

float calcularPerimetro(float);

int main(){
    double lado;
    cout << "Ingrese el lado del cuadraro: " << endl;
    cin >> lado;
    cout << "El perimetro del cuadrado es: " << calcularPerimetro(lado);
    return 0;
}
float calcularPerimetro(float lado){
    double perimetro = lado * 4;
return perimetro;
}