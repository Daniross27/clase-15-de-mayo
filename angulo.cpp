#include<iostream>
using namespace std;
int main (){
 float a=0,b=0,resultado=0;
 cout<<"ingrese el angulo a: ";
 cin>>a;
 cout<<"ingrese otro angulo b: ";
 cin>>b;
 if (a +  b < 180)
 {
   resultado=180-(a+b);
   cout<<"el angulo c es "<<resultado; 
 } else if (a+b>=180)
 {
    cout<<"datos invalidos";
 }
 
  

    return 0;
}