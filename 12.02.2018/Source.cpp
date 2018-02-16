#include <conio.h>
#include <string.h>
#include <iostream>

using namespace std;

int main() {
	char text[10];
	char word[1];
	char test[11]; 

	int position = 0, i; 

	printf("Enter text: ");
	gets_s(text); 
	printf("%s", text); 

	printf("\nEnter word: ");
	fgets(word, 2, stdin);
	printf("%c", word[0]); 

	



	for (i = 0; i < 11; i++) 
	{ 
		test[i] = text[i];
		printf("%c", test[i]); 
		
	}
	/*Chtoto kakto nepoluchaetsya))*/

}