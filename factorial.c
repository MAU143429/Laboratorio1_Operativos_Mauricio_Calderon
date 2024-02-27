#include <stdio.h>
#include <time.h>

long long int factorial(long long int n) {
    // Factorial de 0
    if (n == 0) {
        return 1;
    }
    // Factorial de n-1
    else {
        return n * factorial(n-1);
    }
}

int main() {
    long long int numero = 30;
    
    clock_t inicio = clock();  
    
    long long int resultado = factorial(numero);
    
    clock_t fin = clock();  

    printf("El factorial de %lld es %lld\n", numero, resultado);
    printf("Tiempo de ejecución: %f segundos\n", (double)(fin - inicio) / CLOCKS_PER_SEC);

    return 0;
}










