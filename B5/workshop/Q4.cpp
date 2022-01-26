#include <stdio.h>
#include <string.h>
 
int main(){
    char s[200];
    int count = 0, i;

    scanf("%[^\n]s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == 'h'|| s[i] =='g'){
            count++;    
    }
}
    printf("\nOUTPUT\n");
    printf("%d", count);

return 0;
}
