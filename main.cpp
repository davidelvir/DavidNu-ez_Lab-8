#include "Binaria.h"
#include <iostream>
#include <vector>
#include <string>
#include <time.h>
#include <stdlib.h>
using namespace std;

void imprimirBinarios(vector<Binaria*>);

int main(){
	bool vivo = true;
	srand(time(NULL));
	vector<Binaria*>binarios;
	while(vivo){
		int op;
		cout<<"------Menu------"<<endl;
		cout<<"1. Agregar binario."<<endl;
		cout<<"2. Disyuncion de binarios"<<endl;
		cout<<"3. Conjuncion"<<endl;
		cout<<"4. Implicacion"<<endl;
		cout<<"5. Doble implicacion"<<endl;
		cout<<"6. Disyuncion exclusiva"<<endl;
		cout<<"7. Salir"<<endl;
		cin>>op;
		switch(op){
			case 1:{
				Binaria* a = new Binaria();
				binarios.push_back(a);
				cout<<"Binario agregado: "<<endl;
				cout<<a->toString();
				break;
			}
			case 2:{
				int x;
				int y;
				imprimirBinarios(binarios);
				cout<<"Elija el binario A: ";
				cin >> x;
				cout<<"ELija el binario B: ";
				cin >> y;
				while(x<0 || x>binarios.size()-1 || y<0 || y>binarios.size()-1){
					cout<<"Un valor está equivocado. Elija los valores de nuevo."<<endl;
					cout<<"Elija el binario A: ";
					cin >> x;
					cout<<"ELija el binario B: ";
					cin >> y;
				}
				Binaria* A = binarios[x];
				Binaria* B = binarios[y];
				cout<<"A: "<<endl;
				cout<< A->toString();
				cout<<"B: "<<endl;
				cout<< B->toString();
				cout<<endl;
				cout<<"C: "<<endl;
				Binaria* c = (*A)+(*B);
				cout<< c->toString();
				delete c;
				break;
			}
			case 3:{
				int x;
				int y;
				imprimirBinarios(binarios);
				cout<<"Elija el binario A: ";
				cin >> x;
				cout<<"ELija el binario B: ";
				cin >> y;
				while(x<0 || x>binarios.size()-1 || y<0 || y>binarios.size()-1){
					cout<<"Un valor está equivocado. Elija los valores de nuevo."<<endl;
					cout<<"Elija el binario A: ";
					cin >> x;
					cout<<"ELija el binario B: ";
					cin >> y;
				}
				Binaria* A = binarios[x];
				Binaria* B = binarios[y];
				cout<<"A: "<<endl;
				cout<< A->toString();
				cout<<"B: "<<endl;
				cout<< B->toString();
				cout<<endl;
				cout<<"C: "<<endl;
				Binaria* c = (*A)-(*B);
				cout<< c->toString();
				delete c;
				break;
			}
			case 4:{
				int x;
				int y;
				imprimirBinarios(binarios);
				cout<<"Elija el binario A: ";
				cin >> x;
				cout<<"ELija el binario B: ";
				cin >> y;
				while(x<0 || x>binarios.size()-1 || y<0 || y>binarios.size()-1){
					cout<<"Un valor está equivocado. Elija los valores de nuevo."<<endl;
					cout<<"Elija el binario A: ";
					cin >> x;
					cout<<"ELija el binario B: ";
					cin >> y;
				}
				Binaria* A = binarios[x];
				Binaria* B = binarios[y];
				cout<<"A: "<<endl;
				cout<< A->toString();
				cout<<"B: "<<endl;
				cout<< B->toString();
				cout<<endl;
				cout<<"C: "<<endl;
				Binaria* c = (*A)*(*B);
				cout<< c->toString();
				delete c;
				break;
			}
			case 5:{
				int x;
				int y;
				imprimirBinarios(binarios);
				cout<<"Elija el binario A: ";
				cin >> x;
				cout<<"ELija el binario B: ";
				cin >> y;
				while(x<0 || x>binarios.size()-1 || y<0 || y>binarios.size()-1){
					cout<<"Un valor está equivocado. Elija los valores de nuevo."<<endl;
					cout<<"Elija el binario A: ";
					cin >> x;
					cout<<"ELija el binario B: ";
					cin >> y;
				}
				Binaria* A = binarios[x];
				Binaria* B = binarios[y];
				cout<<"A: "<<endl;
				cout<< A->toString();
				cout<<"B: "<<endl;
				cout<< B->toString();
				cout<<endl;
				cout<<"C: "<<endl;
				Binaria* c = (*A)/(*B);
				cout<< c->toString();
				delete c;
				break;
			}
			case 6:{
				int x;
				int y;
				imprimirBinarios(binarios);
				cout<<"Elija el binario A: ";
				cin >> x;
				cout<<"ELija el binario B: ";
				cin >> y;
				while(x<0 || x>binarios.size()-1 || y<0 || y>binarios.size()-1){
					cout<<"Un valor está equivocado. Elija los valores de nuevo."<<endl;
					cout<<"Elija el binario A: ";
					cin >> x;
					cout<<"ELija el binario B: ";
					cin >> y;
				}
				Binaria* A = binarios[x];
				Binaria* B = binarios[y];
				cout<<"A: "<<endl;
				cout<< A->toString();
				cout<<"B: "<<endl;
				cout<< B->toString();
				cout<<endl;
				cout<<"C: "<<endl;
				Binaria* c = (*A)^(*B);
				cout<< c->toString();
				delete c;
				break;
			}
			case 7:{
				for (int i = 0; i < binarios.size(); ++i){
					delete binarios[i];
				}
				vivo = false;
				break;
			}
		}

	}
	

	
}

void imprimirBinarios(vector<Binaria*>binarios){
	for(int i=0; i<binarios.size(); i++){
		cout<<"Binario: "<<i<<" :"<<endl;
		cout<<binarios[i]->toString();
	}
	
}





