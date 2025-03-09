#include <iostream>
#include <cmath>

using namespace std;

double pi(){
    return 3.14;
}

int main(){

double raio,area;

cout <<" Digite o raio do circulo: " <<"\n";
cin>>raio;

area= pow(raio,2.0)*pi();
cout <<"A area da circunferencia e: " <<area<<"\n\n";

system ("pause");
return 0;

}