#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (void)
{
	string inpStr = GetString();

	//capitalize and print the first initial
	if ((int) inpStr[0] > 'Z') {
		printf("%c", inpStr[0] - ('a' - 'A'));
	} else {
		printf("%c", inpStr[0]);
	}

	//capitalize and print any other initials
	for (int i = 0; i < strlen(inpStr); i++) {
		if (inpStr[i] == ' ') {
		char curInitial = inpStr[i + 1];
			if ((int) curInitial > 'Z') {	
				printf("%c", curInitial - ('a' - 'A'));
			} else {
				printf("%c", curInitial);
			}
		}
	}
	printf("\n");
}
