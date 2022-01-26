#include <stdio.h>
 
int main()
{
  long array[100], *max, size, c;
 
  printf("Enter the number of elements in array\n");
  scanf("%ld", &size);
 
  printf("Enter %ld integers\n", size);
 
  for ( c = 0 ; c < size ; c++ )
    scanf("%ld", &array[c]);
 
  max  = array;
  *max = *array;
 
 
  printf(" max value is %ld.\n", *max);
  return 0;
}
 
