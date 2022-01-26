// Record and Fields
 // recordFields.c

 #include <stdio.h>

 int main(void)
 {
         FILE *fp = NULL;
         int sku;
         double price;

         fp = fopen("program.txt", "r");
         if (fp != NULL) {
                 printf(" Produce Items\n"
                        " =============\n\n"
                        "sku       Price\n"
                        "---------------\n");
                 while (fscanf(fp,"%d%lf\n", 
                        &sku, &price) == 2) 
                         printf("%4d %10.2lf\n",
                          sku, price); 
                 fclose(fp);
         }
         return 0;
 }
