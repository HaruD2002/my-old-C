#include<stdio.h>
#include<string.h>
char Delete(char s[],char s1[]) {
	int len=strlen(s);
	int i;
	for(i=0; i<len; i++) {
		if(s[i]==s1[0]) {
			int j;
			for(j=i; j<len; j++) {
				s[j]=s[j+1];
			}
			s[j+1]='\0';

			i--;
		}
	}
	printf("String after delete: %s",s);
}
int main() {
	char s[100];
	int n=1;
	char s2[n];
	int a[100];
	printf("Enter string: ");
	gets(s);
	printf("Character delete: ");
	gets(s2);
	Delete(s,s2);
}
