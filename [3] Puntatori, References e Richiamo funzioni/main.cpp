#include <iostream>
#include <string.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int numero = 5;
int *pointer = &numero; // Definisco una variabile puntatore nella quale applico un reference di numero

void show (int n);
void hello () ;
int somma (int a, int b);

int main(int argc, char** argv) {
	
	printf("ciaoo\n");
	hello();
	int s = somma (3,4);
	show(s);
	return 0;
}

void hello () {
	printf("ciao\n");
}

int somma (int a, int b) {
	return a+b;
}

void show (int n) {
	cout<<n;
}
