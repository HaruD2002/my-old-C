#include<stdio.h>
#include<stdlib.h>

int main() {
    char c;
    FILE *fp;
    // Open file
    fp = fopen("D:\README2.md", "r"); // location of the files 
    if (fp == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }
    // Read file
    c = fgetc(fp);
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(fp); 
    } 
    // Close the file
    fclose(fp);
    return 0;
}

