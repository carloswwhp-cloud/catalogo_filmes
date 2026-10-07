//GRUPO 3
//RA: 2611600734
//CARLOS ALEXANDRE SILVA DE CAMARGO
//RA: 2611600680
//ENZO FELIPE XAVIER
//RA: 2611600357
//RAFAEL DE CARVALHO COSTA
//Tema: CATÁLOGO DE FILMES

#include <iostream>
#include <locale>

using namespace std;

struct Filme{

               int ano; //ano de lançamento
               int id;
               string nome;
			   float preco;
               string categoria; //drama, ação, suspense...
               string sinopse;
               float duracao; //tempo do filme (min)
               int faixaet; //faixa etária
               float avaliacao; //nota crítica
               bool disponível;  //(0-Não|1-Sim)

};
    Filme vetor[17];



int main(){
    setlocale(LC_ALL, "Portuguese");

	cout << "\t--------- CATÁLOGO DE FILMES --------- \n\n";
	cout << "\t*** MENU INICIAL ***" << endl;
	cout << "\tSelecione uma opção: " << endl;
    cout <<"\t1 - inserir filme" << endl;


}


