#include <stdio.h>

int main(void){

  int ph;

  while (1){
  scanf("%d", &ph);
  if (ph < 0)
    break;
  if (ph < 7)
    printf("ACIDA\n");
  if (ph > 7)
    printf("BASICA\n");
  if (ph == 7)
    printf("NEUTRA\n");
  }
  return 0;
}