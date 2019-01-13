
#include <iostream>
using namespace std;

int main(){
	int a,digito1 = 0,digito2 = 0;
	cout<<"Introduce un numero entero: ";cin>>a;
	
	digito1 = a / 10;
	digito2 = a % 10;
	
	if (digito2 == 1){
		cout<<"\nEl primer digito del numero es: "<<digito1;
	
	}
	
	if (digito2 == 2){
		cout<<"\nLa suma de los digitos es igual a: "<<digito1 + digito2;
	
	}
	
	if (digito2 == 3){
		cout<<"\nEl producto de los digitos es igual a: "<<digito1 * digito2;
	
	}
	
	if (digito2 != 1 and digito2 != 2 and digito2 != 3){
		cout<<"\nEl programa no funciona con los numeros ingresados";
	}	
	
	
	return 0;
}
