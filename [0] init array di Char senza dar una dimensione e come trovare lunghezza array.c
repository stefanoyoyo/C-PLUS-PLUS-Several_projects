#include <stdlib.h>

char word [] = "";
int add (char word[], char whatToAdd[]);
void main (char args[], int n) {
	//add(word, "ciao"); // Funziona ma poco elegante secondo me
	
    //printf("%s",word);
    //word= "ciao";  // Non funziona. lvalue
    
     *word = "ciao"; // OK: devo fare assegnamenti al puntatore se sono assrgnare oggetti e non variabili semplici. 
     printf("%s",&word);
}
int add (char word[], char whatToAdd[]) {
	int i = 0;
	int l = sizeof (word) / sizeof (0);
	// l = Array length
	for (i=0;i<l;i++) {
		word[i] = whatToAdd[i];
	}
	return i;
}