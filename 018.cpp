#include <iostream>

using namespace std;

int main(){

    double arquivo, velocidade,velocidad, tempo,temp;

    cout <<"Digite o tamanho do arquivo para download (MB): ";
    cin>>arquivo;
    cout <<"Digite a velocidade do link de internet (Mbps): ";
    cin >> velocidade;

    velocidad=velocidade+0.125;
    tempo=arquivo/velocidade;
    temp=tempo/60;

    cout <<"O tempo aproximado de download do arquivo e de: "<<temp<<" minutos."<<endl;

    system("pause");
    return 0;
}