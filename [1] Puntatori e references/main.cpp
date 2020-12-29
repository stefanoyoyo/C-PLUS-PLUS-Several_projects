#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

void show (int *pointer);							// Permette di vedere l'indirizzo a cui punta un puntatore
string show (string s); 							// Permette di vedere la stringa passata come parametro
int show (int numero);								// Permette di vedere il numero intero passato come parametro	

//--------------GUARDARE SOLO IL MAIN IN QUESTO ESEMPIO--------------------------

int main(int argc, char** argv) {
	
	int numero = 8;									// Creo una variabile 
	int *puntatore;									// Creo un puntatore di tipo int
	puntatore = &numero; 							// Assegno al puntatore una reference di numero. 
	
	int number = 9;									// Creo una variabile 
	int *pointer;									// Creo un puntatore di tipo int
	pointer = &number; 								// Assegno al puntatore una reference di numero.
	
	show("Il numero in memoria e' '"); show (numero); 
	show("\n");										// Vado a capo
	show("Il puntatore vale "); show (puntatore);	// Mostro in output l'indirizzo a cui punta il puntatore in memoria	
	
	show ("\n\n");									// Vado a capo due volte
	
	show("Il numero in memoria e' '"); show (number); 
	show("\n");
	show("Il puntatore vale "); show (pointer);	// Mostro in output l'indirizzo a cui punta il puntatore in memoria	
	
			
	return 0;
}

//--------------FUNZIONI--------------------------

void show (int *pointer) {							// Permette di vedere l'indirizzo della variabile intera cui punta un puntatore
	cout<<pointer;
}

string show (string s) {							// Permette di vedere la stringa passata come parametro
	cout<<s;
	return s;
}

int show (int numero) {								// Permette di vedere il numero intero passato come parametro
	cout<<numero;
	return numero;
};	
