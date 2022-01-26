// Tabular Data
 // table.c

 #include <stdio.h>

 int main(void)
 {
         FILE *fp = NULL;
         int sku;
         char status;
         double price;

         fp = fopen("sale.txt","r");
         if (fp != NULL) {
                 printf(" Produce Items\n"
                        " =============\n\n"
                        "sku Sale  Price\n"
                        "---------------\n");
                 while (fscanf(fp, "%d;%c;%lf", 
                  &sku, &status, &price) == 3)
                         printf("%4d %c %8.2lf\n", 
                          sku, status, price);
                 fclose(fp);
         }
         return 0;
 }
