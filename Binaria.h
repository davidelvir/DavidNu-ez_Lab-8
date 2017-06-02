#ifndef BINARIA_H
#define BINARIA_H
#include <string>

using namespace std;
class Binaria{

private:
	int* tablaDeVerdad;

public:
	Binaria();


	int getValor(int);
	void setValor(int,int);

	string toString();

	Binaria* operator+ (Binaria& binario){
		Binaria* resultado = new Binaria();
		
		for(int i=0; i<4; i++){
			if(tablaDeVerdad[i]==0 && binario.getValor(i)==0){
				resultado->setValor(i,0);
			}else{
				resultado->setValor(i,1);
			}
		}
		//int* pResultado = resultado;
		return resultado;
	}

	Binaria* operator- (Binaria& binario){
		Binaria* resultado = new Binaria();
		
		for (int i = 0; i < 4; i++){
			if(tablaDeVerdad[i]==1 && binario.getValor(i)==1){
				resultado->setValor(i,1);
			}else{
				resultado->setValor(i,0);;
			}
		}
		return resultado;
	}

	Binaria* operator* (Binaria& binario){
		Binaria* resultado=new Binaria();
		for (int i = 0; i < 4; ++i){
			if(binario.getValor(i)==0 && tablaDeVerdad[i]==1){
				resultado->setValor(i,0);
			}else{
				resultado->setValor(i,1);
			}
		}
		return resultado;
	}

	Binaria* operator/ (Binaria& binario){
		Binaria* resultado = new Binaria();
		for (int i = 0; i < 4; i++){
			if(tablaDeVerdad[i]==binario.getValor(i)){
				resultado->setValor(i,1);
			}else{
				resultado->setValor(i,0);
			}
		}
		return resultado;
	}
	Binaria* operator^ (Binaria& binario){
		Binaria* resultado = new Binaria();
		for(int i = 0; i<4; i++){
			if((tablaDeVerdad[i]==1 && binario.getValor(i)==1)||(tablaDeVerdad[i]==0 && binario.getValor(i)==0)){
				resultado->setValor(i,0);
			}else{
				resultado->setValor(i,1);
			}
		}
		return resultado;
	}
};

#endif