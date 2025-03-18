#include <iostream>

using namespace std;

int main (){
    
    int d,l,r,i,s;
    double x,y,m;

    cout <<"Quastas horas voce trabalha por mes: ";
    cin >> y;
    cout << "quanto ganhas por hora: ";
    cin >> x;
    
    m=x*y;
    r=0.11*m;
    i=0.08*m;
    s=0.05*m;
    d=r+i+s;
    l=m-d;

    cout <<"\n+ Salario Bruto : R$ " << m <<"\n";
    cout <<"\n- IR (11%) : R$ " << i <<"\n";
    cout << "\n- INSS (8%) : R$ " << s <<"\n";
    cout << "\n- Sindicato (5%) : R$ " << r <<"\n";
    cout <<"\n =Descontos= R$ " << d <<"\n";
    cout <<"\n= Salario Liquido : R$ "<< l <<"\n";
    
    system("pause");
    return 0;
}