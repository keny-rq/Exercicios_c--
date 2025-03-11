#include <iostream>

using namespace std;

int main(){

    int f,c;

    cout<<"Temperatura em Farenheit: ";
    cin>>f;

    
    c=(5*(f-32)/9);
    cout<<"Temperatura em graus Celsius: "<<c<<endl;

    system("pause");
    return 0;
}