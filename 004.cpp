#include <iostream>

using namespace std;

int main(){

    int n1,n2,n3,n4;
    int m,media;

    cout << "Nota do primeiro bimestre:" << "\n\n";
    cin >> n1;
    cout << "Nota do segundo bimestre:" << "\n\n";
    cin >> n2;
    cout << "Nota do terceiro bimestre:" << "\n\n";
    cin >> n3;
    cout << "Nota do quarto bimestre:" << "\n\n";
    cin >> n4;

    m=n1+n2+n3+n4;
    media=m/4;
    cout<<"A nota final e:"<<media<<"\n\n";


    system ("pause");
    return 0;
}