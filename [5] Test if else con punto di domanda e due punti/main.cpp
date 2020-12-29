#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	 int n = 888;
         n = n == 5 ? n : 4;
         printf("Il risultato e "); printf("%d",n);
         /**
         *		FUNZIONA! INVECE DI SCRIVERE UN 
         *		if (n==5) {
		 			n = n;
				 }	else {
				 	n = 4;
				 }
		 *	HO SCRITTO UNA RICHIESTA EQUIVALENTE IN UN'UNICA RIGA DI CODICE!
        */
}
