#include <iostream>

using namespace std;

int main(){
    double peso,ex,m;

    cout <<"\nDigite o peso do peixe: ";
    cin >> peso;

    ex=peso-50;
    m=ex*4.00;

    
    if( peso > 50){
        cout << "\nO seu peixe tem " << ex <<" Kilo de excesso";
        cout <<"\nPagaras "<<m<<" R$ por excesso de peso.\n";
    }else if(peso <= 50){
        cout <<"\nPeixe com peso ideal\n";
    }
    system("pause");
    return 0;
}