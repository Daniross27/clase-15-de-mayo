#include<iostream>
using namespace std;
int main(){
 float angulo;
 cout<<"ingrese el valor del aungulo: ";
 cin>>angulo;
 if (angulo<90 && angulo > 0 )
 {
    cout<<"el angulo es agudo";
 } else if (angulo == 90  )
 {
    cout<<"su angulo es recto";
 } else if (angulo > 90 && angulo <=360)
 {
    cout<<"su angulo es obtuso";
 }
 
    else
    cout<<"dato invalido";
 
 
    return 0;
}