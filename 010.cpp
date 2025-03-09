#include <iostream>

using namespace std;

int main(){

    int f,c;

    cout<<"Digite a temperatura em Graus celsius: ";
    cin>>c;

    f=32+(c*1.8);
    cout<<"A temperatura em Farenheit:  "<<f<<endl;

    system("pause");
    return 0;
}