#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int latas, galoes, latas_mistura, galoes_mistura;
   const double cobertura=6.0;
   const double latas_litros=18.0;
   const double galoes_litros=3.6;
   const double preco_lata=80.0;
   const double preco_galao=25.0;
   double area,litros_necessarios,custo_latas,custo_galoes,restante,custo_mistura;

   cout <<" digite o tamanho da area a ser pintada em metros quadrados: ";
   cin>>area;

   litros_necessarios=(area/cobertura)*1.1;
   latas= ceil(litros_necessarios/latas_litros);
   custo_latas = (latas*preco_lata);
   galoes= ceil(litros_necessarios/galoes_litros);
   custo_galoes=galoes*preco_galao;
   latas_mistura=litros_necessarios/latas_litros;
   restante=litros_necessarios-(latas_mistura*latas_litros);
   galoes_mistura=ceil(restante/galoes_litros);
   custo_mistura=(latas_mistura*preco_lata)+(galoes_mistura*preco_galao);


   cout << "\nOpcoes de compra:\n";
   cout << "1.Apenas latas de 18 litros: "<<latas <<"latas - Custo: R$" << custo_latas <<"\n";
   cout<<"2.Apenas galoes de 3,6 litros: "<<galoes<<"galoes - custo: R$"<< custo_galoes<<"\n";
   cout << "3.Mistura de latas e galoes: "<< latas_mistura<<"latas e "<< galoes_mistura<<"galoes- custo: R$" <<custo_mistura<<"\n";

   system ("pause");
   return 0;
}