#include <stdio.h>
#include <math.h>
	float R, h, SDAY, SXQ, v;
	const double pi = 22.0 / 7.0;
int main()
{
  printf("Ban kinh cua hinh tru la: ");
  scanf("%f", &R);
  printf("Chieu cao cua hinh tru la: ");
  scanf("%f", &h);
  SDAY = pi * (R*R);
  SXQ = pi * 2 * R * h;
  v = SDAY * h;
  printf("\nDien tich day hinh tru la: %.2f", SDAY);
  printf("\nDien tich xung quanh hinh tru la: %.2f", SXQ);
  printf("\nThe tich cua hinh tru la: %.2f", v);
  return 0;
	
}
