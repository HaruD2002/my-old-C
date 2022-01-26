#include<stdio.h>

int main(){
	const char* s = "ab234cid*(s349*(20kd";
int total_n = 0;
int n;
int i;
while (1 == sscanf(s + total_n, "%*[^0123456789]%d%n", &i, &n))
{
    total_n += n;
    printf("%d\n", i);
}
}

