#include <iostream>
#include <cmath>

using namespace std;

int main (){

    int n1,n2,n3;
    int p1,p2,p,s,c;
    cout << " Apenas numeros inteiros e reais"<<"\n\n";
    cout << "Digite o primeiro numero inteiro: ";
    cin>>n1;
    cout <<"Digite o segundo numero inteiro: ";
    cin >> n2;
    cout << "Digite um numero real: ";
    cin >>n3;

    p1=n1*n1;
    p2=n2/2;
    p=p1*p2;
    s=(n1*3)+n3;
    c=pow(n3,3.0);

    cout << "O produto do dobro do primeiro com metade do segundo e: "<<p<<"\n\n";
    cout << "a soma do triplo do primeiro com o terceiro: "<<s<<"\n\n";
    cout << "O terceir elevado ao cubo: "<<c<<"\n\n";

    system("pause");
    return 0;
}