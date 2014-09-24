#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void encrypt(int key, string text);

int main(int argc, string argv[])
{
    string plainText;
    int k;
    if (argc == 2){
        k = atoi(argv[1]);
    } else {
        return 1;
    }
    plainText = GetString();
    encrypt(k, plainText);
    return 0;
}

void encrypt(int key, string text)
{
	
	for (int i = 0; i < strlen(text); i++){
		if (65 <= text[i] && text[i] <= 90) {
			int temp = text[i] - 65;
			int num = (temp + key) % 26;
			printf("%c", 65 + num);
        	} else if (97 <= text[i] && text[i] <= 122) {
			int temp = text[i] - 97;
			int num = (temp + key) % 26;
			printf("%c", 97 + num);
        	} else {
			printf("%c", text[i]);
		}
    	}
	printf("\n");
    
}




