#include <stdio.h>
#include <math.h>

double Esfera(double r){
    return 4.0/3.0*3.14159*r*r*r;
}

int main(){
    double R;

    scanf("%lf", &R);

    printf("VOLUME = %.3lf\n", Esfera(R));

    return 0;
}