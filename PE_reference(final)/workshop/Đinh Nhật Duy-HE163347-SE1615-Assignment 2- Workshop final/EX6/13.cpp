#include <stdio.h>
#include <string.h>

int main() {
	char s[100];
	printf("Enter string:");
	int f[100], maxn = 0, i = 0, j = 0;
	for(int i = 0; i < 100; i++) f[i] = 1;
	gets(s);
	for(i = 0; i < strlen(s) - 1; i++) {
		for(j = i + 1; j < strlen(s); j++ )
			if(s[i] == s[j])
				f[i]++;
		if(maxn < f[i]) maxn = f[i];
	}
	for(i = 0; i < strlen(s); i++) {
		if(f[i] == maxn)
			printf("Character: %c ",s[i]);
	}
	return 0;
}
