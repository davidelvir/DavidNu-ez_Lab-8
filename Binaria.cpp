#include "Binaria.h"
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

Binaria::Binaria(){
	
	//int tem [4];
	tablaDeVerdad = new int [4];
	for (int i = 0; i < 4; i++){
		//int tem = rand() % 2;
		int tem;
		tem = rand() % 200;
		if(tem%2==0){
			tablaDeVerdad[i] = 0;
		}else{
		tablaDeVerdad[i] = 1;	
		}
	}

	

}

int Binaria::getValor(int i){
	return tablaDeVerdad[i];
}

void Binaria::setValor(int i, int valor){
	tablaDeVerdad[i] = valor;
}

string Binaria::toString(){
	string binario="";
	for (int i = 0; i < 4; i++)
	{
		
		if(tablaDeVerdad[i]==0){
			binario+="0 ";
		}else{
			binario+="1 ";
		}
		
	}
	binario+="\n";
	return binario;
}