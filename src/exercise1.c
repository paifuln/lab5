#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    float a[10];
    a[0]=atof(argv[1]);
    
    float sum = 0;

    for (int i = 0; i<=10; i++){
        a[i] = atof(argv[i+1]);
    }
    for (int i = 0; i<10; i++){
        sum += a[i];
    }
    printf("%.2f", sum/10);
    return 0;
}