#include<iostream>
using namespace std;
int main(){
 
 float corto1=0,corto2=0,parcial1=0,parcial2=0,laboratorio=0,proyecto=0,promedio;
 string nombre;
 cout<<"Ingrese su nombre: ";
 cin>>nombre;
 cout<<"Ingrese corto 1: ";
 cin>>corto1;
 cout<<"Ingrese corto 2: ";
 cin>>corto2;
 cout<<"Ingrese parcial 1: ";
 cin>>parcial1;
 cout<<"Ingrese parcial 2: ";
 cin>>parcial2;
 cout<<"Ingrese laboratorio: ";
 cin>>laboratorio;
 cout<<"Ingrese proyecto: ";
 cin>>proyecto;
 promedio = corto1*0.10 + corto2*0.10 + parcial1*0.15 + parcial2*0.20 + laboratorio*0.20 + proyecto*0.25;
 if (promedio >= 6 && promedio == 10 )
 {
    cout <<"Haz aprobado la materia con "<<promedio;
 } else if (promedio <=5.99 && promedio >=0  )
 {
    cout<<"Haz reprobado la materia con "<<promedio;
 } else 
 cout <<"datos invalidos";
 
 
    
 
 
 
    return 0;
}