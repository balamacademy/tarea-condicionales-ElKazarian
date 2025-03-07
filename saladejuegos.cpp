#include <iostream>
using namespace std;

int main(){

int edad= 0;
cin >> edad;

if (edad <= 4){
cout << "Gratis!! \n";}

else{
if (edad > 4 and edad <= 18){
cout << "Paga $5 \n";}
}

if (edad > 18){
cout << "Paga $10 \n";}

return 0;
}