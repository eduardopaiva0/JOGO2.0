#include<iostream>
using namespace std;

int main(){
	int numOcult,jogadores,numMin,numMax,cont,num;
	bool cancelar = true;
	numMin = 1;
	numMax = 100;
	do{
		cout << "Digite a quantidade de jogadores: ";
		cin >> jogadores;
		if(jogadores < 2 || jogadores > 5){
			cout << "Apenas valores entre 2 e 5." << endl;
		}
	}while(jogadores < 2 || jogadores > 5);
	
	do{
		cout << "Digite o valor do numero oculto: ";
		cin >> numOcult;
		if(numOcult <= 1 || numOcult >= 100){
			cout << "Apenas valores entre 1 e 100." << endl;
		}
	}while(numOcult < 1 || numOcult > 100);
	while(cancelar){
		for(int i = 1;i <= jogadores;i++){
			cout << "Jogador " << i << ". digite o valor do numero entre " << numMin << " e " << numMax << ": ";
			cin >> num;
			if(num <= numMin || num >= numMax){
				cout << "Digite o valor dentro do intervalo dos numeros." << endl;
				i--;
			}
			if(num >= numMin && num < numOcult){
				numMin = num;
			}else if(num <= numMax && num > numOcult){
				numMax = num;
			}else{
				cout << "Jogador " << i << " perdeu!";
				cancelar = false;
				i = jogadores + 1;
			}
		}
	}
	return 0;
}