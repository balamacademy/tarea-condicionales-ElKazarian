#include <iostream>
using namespace std;

int main(){

int numero;
cin >> numero;

if((numero % 4 == 0 && numero % 100 != 0) or (numero % 400 == 0)){
cout << "Es bisiesto \n";
}
else{
cout << "No es bisiesto \n";
}


return 0;
}