#include <iostream>

using namespace std;

int main(){

    double metros,litros,preco,x=3.0,z=18,c=80.00;
    int latas;

    cout <<"\n Quantos metros quadrados tem a area que vai ser pintada: ";
    cin >> metros;
    litros=metros/x;
    latas=litros/z;
    preco=latas*c;

    cout <<"\n Deve-se comprar: "<<latas<<" latas";
    cout <<"\n Vai pagar-se: "<<preco<<" R$ \n";

    system("pause");
    return 0;
}