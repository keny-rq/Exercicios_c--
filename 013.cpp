#include <iostream>

using namespace std;

int main(){

    int sexo;
    double h,h2,h1;

    cout << "Informe o seu sexo" <<"\n\n";
    cout << "Masculino [1]: "<<"\n";
    cout << "Feminino [2]:"<<"\n";
    cin >> sexo;
    cout<<"Digite a sua altura: ";
    cin >> h;

    h1=(72.7*h)-58;
    h2=(62.1*h)-44.7;

    if (sexo == 1){
        cout<<"Voce pesa: " << h1 <<"\n\n";
    } else {
        cout<<"Voce pesa: " << h2<<"\n\n";
    }

    system("pause");
    return 0;
}