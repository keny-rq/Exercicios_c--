#include <iostream>

using namespace std;

int main(){

    int salario,horas,mes;

    cout<<" Quanto voce ganha por hora?  ";
    cin>>salario;
    cout<<"Quantas horas trabalhaste este mes?  ";
    cin>>horas;

    mes=salario*horas;
    cout <<"O teu salario mensal e de:  "<< mes << endl ;

    system("pause");
    return 0; 
}