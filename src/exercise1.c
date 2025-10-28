#include <stdio.h>
int main() {
 double array[10];

 for (int i = 0; i < 10; i++) {
  scanf("%lf", &array[i]);
 }

 double sum = 0;
 for (int i = 0; i < 10; i++) {
  sum += array[i];
 }
 sum /= 10;
 printf("%.3f", sum);
}
