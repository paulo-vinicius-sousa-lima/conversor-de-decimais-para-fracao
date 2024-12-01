#include <stdio.h>

int main() {
    double num;
    int numerador, denominador;
    int divisor = 1;
    
    printf("Digite um numero francionado (por exemplo, 1.5): ");
    scanf("%lf", &num);
    
    double num2 = num;
    while (num2 != (int)num2) {
        num2 *= 10;
        divisor *= 10;
    }
    
    numerador = (int)num2;
    denominador = divisor;
    
    printf("A representacao em fracao e: %d/%d\n", numerador, denominador);
    
    return 0;
}
