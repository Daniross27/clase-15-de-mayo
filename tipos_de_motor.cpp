#include<iostream>
using namespace std;
int main(){
 int tipomotor;
 cout<<"Ingrese tipo de motor del 0-4: ";
 cin>>tipomotor;
 switch (tipomotor)
 {
 case 0:cout<<"No esta establecido un valor definido para el tipo de bomba";
    break;
   case 1:cout<<"La bomba es una bomba de agua";
    break;
 
  case 2:cout<<"La bomba es una bomba de gasolina";
    break;
 case 3:cout<<"La bomba es una bomba de hormigon";
    break;
 
  case 4:cout<<"La bomba es una bomba de pasta alimenticia";
    break;
 
 default: cout<<"No existe un valor valido para tipo de bomba"; 
    break;
 }

    return 0;
}