#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool towels(char);
bool consonants(char);
void count(char*, int*, int*);

bool towels(char c) {
	return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool consonants(char c) {
	if(!towels(c) && c >= 'a' && c <= 'z') {
		return true;
	}
	return false;
}

void count(char* s, int* countP, int* countN) {
	int len = strlen(s);
	int i;
	for(i = 0; i < len; i++) {
		char c = (s[i]);
		if(towels(c)) {
			(*countN)++;
		} else{
			(*countP)++;
		}
	}
}

int main() {
	char s[100];
	printf("Enter string: "); 
	fgets(s, 99, stdin);
	int countP = 0, countN = 0; 
	count(s, &countP, &countN);
	printf("Number of towels: %d \nNumber of consonants: %d",countN, countP-1);
	return 0;
}
