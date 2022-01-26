#include<stdio.h>

int main() {
	int upper = 0, lower = 0, number=0;
	char ch[100];
	int i;

	printf("\nEnter The String:");
	gets(ch);

	i = 0;
	while (ch[i] !=' ') {
		if (ch[i] >= 'A' && ch[i] <= 'Z')
			upper++;
		if (ch[i] >= 'a' && ch[i] <= 'z')
			lower++;
		if(ch[i] >= '0' && ch[i]<='9')
			number++;
		i++;
	}

	printf("\nUppercase Letters : %d", upper);
	printf("\nLowercase Letters : %d", lower-1);
	printf("\nNumber : %d",number);
	return (0);
}
