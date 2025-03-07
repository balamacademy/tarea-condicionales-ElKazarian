#include <iostream>
using namespace std;

int main(){

float numero1, numero2, mult, iva, bruto, desc, total;
cin >> numero1;
cin >> numero2;

mult= numero1 * numero2;
iva= mult * 0.15;
bruto= mult + iva;

if(bruto > 1000){
desc= bruto * 0.05;
total= bruto - desc;
cout << "Pagar $" << total;
}

else{
cout << "Pagar $" << bruto;
}


return 0;
}