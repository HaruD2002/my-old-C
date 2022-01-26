#include <stdio.h>

int main()
{
 FILE *fp;
 char filename[100];
 char writestr[100];

  // Read filename
  printf("Create file :");
  gets(filename);
  
  // Read string to write
  printf("Write something cool :");
  gets(writestr);
  
   // Open file in write mode
   fp = fopen(filename,"w+");

   // If file opened successfully, then write the string to file
   if ( fp )
   {
	   fputs(writestr,fp);
    }
   else
      {
         printf("Can't open file\n");
        }
//Close the file
   fclose(fp);
return(0);
}

