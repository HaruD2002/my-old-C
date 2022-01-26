#include <stdio.h>
#include <string.h>
char symmetrical(char s1[100]) {
	int i;
	for (i = 0; i < strlen(s1) / 2; i++) {
		if (s1[i] != s1[strlen(s1) - 1 - i]) {
			return 0;
		}
	}
	return 1;
}
int main() {
	char s1[100];
	printf("Enter string:");
	gets(s1);
	if (symmetrical(s1) == 1) {
		printf("String is Symmetrical\n");
	}
	if (symmetrical(s1) == 0) {
		printf("String is Asymmetrical\n");
	}
}
