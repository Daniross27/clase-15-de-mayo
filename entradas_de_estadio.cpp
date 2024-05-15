#include <iostream>
using namespace std;
int main(){
int localidad,solgeneral=3, solpreferente=5,Sombra=8,Tribuna=15,Platea=20,entradas=0,total=0;
 cout<<"Bienvenido a que localidad quieres asistir \n solgeneral 1 , solpreferente 2 , Sombra 3 , Tribuna 4 , Platea 5 :  ";
 cin>>localidad;
 switch (localidad)
 {
 case 1:cout<<"cuantas entradas deseas: ";cin>>entradas;
       total=solgeneral*entradas;  
       cout<<"\nel total de tus entradas es de: "<<"$"<<total;         
    break;
    case 2:cout<<"\ncuantas entradas deseas: ";cin>>entradas;
       total=solpreferente*entradas; 
       cout<<"\nel total de tus entradas es de: "<<"$"<<total;          
    break;
    case 3:cout<<"\ncuantas entradas deseas: ";cin>>entradas;
       total=Sombra*entradas;
       cout<<"\nel total de tus entradas es de: "<<"$"<<total;           
    break;
    case 4:cout<<"\ncuantas entradas deseas: ";cin>>entradas;
       total=Tribuna*entradas;           
       cout<<"\nel total de tus entradas es de: "<<"$"<<total;
    break;
    case 5:cout<<"\ncuantas entradas deseas: ";cin>>entradas;
       total=Platea*entradas;         
       cout<<"\nel total de tus entradas es de: "<<"$"<<total;  
    break;
 
 default: cout<<"seleccion de entrada no existe ";
    break;
 }
 

 return 0;
}