#include <stdio.h>
#define SIZE 10

int main() {
    double array[SIZE];
    double x;
    int k;

    for (int i = 0; i < SIZE; i++)
        scanf("%lf", &array[i]);
    scanf("%lf%d", &x, &k);

    for (int i = SIZE - 1; i > k; i--)
        array[i] = array[i - 1];

    array[k] = x;

    for (int i = 0; i < SIZE; i++)
        printf("%.0lf ", array[i]);
    return 0;
}
