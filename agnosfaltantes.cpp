#include <iostream>
using namespace std;

int main(){

int numero1, numero2;
cin >> numero1;
cin >> numero2;

if(numero1 >= numero2){
int agnos1 = numero1 - numero2;
cout << "Han pasado " << agnos1 << " agnos";
}

else{
int agnos2 = numero2 - numero1;
cout << "Faltan " << agnos2 << " agnos";
}


return 0;
}