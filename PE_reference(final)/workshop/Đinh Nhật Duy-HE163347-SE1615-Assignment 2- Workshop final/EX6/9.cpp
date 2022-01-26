#include <stdio.h>
#include <string.h>

char* ReverseString(char *S) {
	char* reverse = new char[strlen(S)];
	int j = 0;
	int count = 0;
	for(int i = strlen(S); i >= 0; i--) {
		if (i == strlen(S) || i == strlen(S)-1)
			continue;
		count++;
		if (S[i] == ' ') {
			for(int k = i; k < i+count; k++) {
				reverse[j] = S[k+1];
				j++;
			}
			reverse[j-1] = ' ';
			count = 0;
		}
		if (i == 0) {
			for(int k = i; k < i+count; k++) {
				reverse[j] = S[k];
				j++;
			}
		}

	}

	reverse[strlen(S)-1] = '\0';

	return reverse;
}

int main() {
	char S[100];

	printf("Enter string: ");
	fflush(stdin);
	fgets(S, 100, stdin);

	printf("Reverse String: ");
	char* reverse = ReverseString(S);

	puts(reverse);
}
