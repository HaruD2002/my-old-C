#include<stdio.h>

int main() {
    char a[100];
    int i,count = 0;  
    gets(a);
    for(i = 0; a[i] != '\0'; i++){
    	 a[i] = tolower(a[i]);
        if( a[i] == 'a'||a[i] == 'e'||a[i] == 'i'|| a[i] == 'o' || a[i] == 'u'){       
            count++;
        }
    }
    printf("%d",count);
    
    return 0;
}
