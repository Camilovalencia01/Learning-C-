#include<iostream>
using namespace std;

int main(){
	
	char letra;
	cout<<"Introduce una letra vocal: ";cin>>letra;
	
	switch(letra){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"El caracter introducido es una vocal miniscula";break;
		
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': cout<<"El caracter introducido es una vocal mayuscula";break;
		
		default: cout<<"El caracter introducido no es una vocal";  	
	}
	
	return 0;
}
