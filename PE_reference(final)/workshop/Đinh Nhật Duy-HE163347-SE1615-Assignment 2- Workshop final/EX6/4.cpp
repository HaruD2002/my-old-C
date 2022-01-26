#include <stdio.h>
#include <string.h>

int WordCount(char str[], int length) {
	int word = (str[0] != ' ');
	for (int i = 0; i < length - 1; i++) {
		if (str[i] == ' ' && str[i + 1] != ' ') {
			word++;
		}
	}
	return word;
}

void Correct(char str[], int length) {
	int first = 0, last = length - 1;
	while (first < last && str[first] == ' ')
		first++;
	while (last > first && str[last] == ' ')
		last--;
}

int main() {
	char str[100];
	printf("\nEnter a string: ");
	fgets(str, sizeof str, stdin);
	int length = strlen(str) - 1;
	str[length] = '\0';
	printf("Number of string(\"%s\"): %d", str, WordCount(str, length));
	Correct(str, length);
}
