#include<stdio.h>
#include<conio.h>
#include<string.h>
int check(char *p,char s,int n) {
	int j=0;
	for(int i=0; i<=n; i++)
		if(s==p[i]) j++;
	if(j==1)return 1;
	return 0;
}
int count(char *p,char s,int i) {
	int count=0;
	for (int j=i; j<strlen(p); j++) {
		if(s==p[j]) count++;
	}
	return count;
}
int main () {
	char st[255];
	printf("Enter string:");
	gets(st);
	for(int i=0; i<strlen(st); i++) {
		if((st[i]!=' ')&&(check(st,st[i],i)))
			printf("%c: %d \n",st[i],count(st,st[i],i));
	}
	getch();
}
