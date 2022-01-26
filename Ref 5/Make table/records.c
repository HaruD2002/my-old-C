 #include <stdio.h>

 int main(void)
 {
         FILE *fp = NULL;
         int c, nrecs;

         fp = fopen("program.txt", "r");
         if (fp != NULL) {
                 nrecs = 0;
                 do {
                         c = fgetc(fp);
                         if (c != EOF) {
                                 if ((char)c == '\n') 
                                         nrecs++;
                         }
                 } while (feof(fp) == 0);
                 printf("%d records on file\n", 
                  nrecs + 1);
                 fclose(fp);
         }
         return 0;
 }
