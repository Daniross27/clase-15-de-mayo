#include <iostream>
using namespace std;
int main(){
 int edad;
 cout<<"ingrese su edad: ";
 cin>>edad;
 if (edad < 18)
 {
    cout<<"Usted es menor de edad";
 } else if (edad >= 18)
 {
    cout<<"Usted es mayor de edad";
 }
 
 

    return 0;
}