#include <iostream>
using namespace std;

int main(){

char calificacion;
cin >> calificacion;

if (calificacion == 'A' or calificacion == 'a'){
cout << "9 \n";}

else{
if (calificacion == 'B' or calificacion == 'b'){
cout << "8 \n";}
}

if (calificacion == 'C' or calificacion == 'c'){
cout << "7 \n";}

else{
if (calificacion == 'D' or calificacion == 'd'){
cout << "6 \n";}
}

if (calificacion == 'E' or calificacion == 'e'){
cout << "5 \n";}

else{
if (calificacion == 'F' or calificacion == 'f'){
cout << "4 \n";}
}

return 0;
}