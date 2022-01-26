#include<stdio.h>
#include<string.h>
void proper(char str[]) {
	while(str[0]==' ')strcpy(&str[0], &str[1]);

	for(int i=0; i<strlen(str)-1; i++)
		if(str[i] == ' ' && str[i+1]== ' ') {
			strcpy(&str[i], &str[i+1]);
			i--;
		}

	while(str[strlen(str)-1]==' ')
		strcpy(&str[strlen(str)-1], &str[strlen(str)]);
}
void to_title(char str[]) {
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;
		if (str[i - 1] == ' ' || i == 0) {
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
	}
}
int main() {
	char str[100];
	printf("Enter string:");
	fflush(stdin);
	gets(str);
	proper(str);
	to_title(str);
	printf("\nString proper: \"%s\"",str);
	return 0;
}
