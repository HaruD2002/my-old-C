#include <stdio.h>
#include <math.h>

int main(){
	int n, t, now;
	now = 2015;
	printf("Ban sinh nam bao nhieu: ");
	scanf("%d", &n);
	t = now - n;
	printf("Ban sinh nam %d, vay ban %d tuoi", n, t);
	return 0;
}
