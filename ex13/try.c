#include <stdio.h>

double i_tri_mass(int width, int height){
  return (double)(width) * (double)(height) /2;
}

int main(void){
  printf("%lf\n", i_tri_mass(1,3));
}
