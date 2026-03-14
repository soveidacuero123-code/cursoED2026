#include <stdio.h>
#include <math.h>

#include "areas.h"
#include "volumenes.h"

double calcularAreaCirculo(double radio) {
    return PI * radio * radio;
}

double calcularAreaCuadrado(double lado) {
    return lado * lado;
}

double calcularVolumenEsfera(double radio) {
    return (4.0 / 3.0) * PI * pow(radio, 3);
}

double calcularVolumenCubo(double lado) {
    return pow(lado, 3);
}

int main() {
    double radio_circulo = 5.0;
    double lado_cuadrado = 4.0;
    double radio_esfera = 3.0;
    double lado_cubo = 2.5;

    printf("--- Calculadora de Geometría ---\n\n");

    printf("Área del círculo con radio %.2f: %.2f\n", radio_circulo, calcularAreaCirculo(radio_circulo));
    printf("Área del cuadrado con lado %.2f: %.2f\n", lado_cuadrado, calcularAreaCuadrado(lado_cuadrado));
    printf("Volumen de la esfera con radio %.2f: %.2f\n", radio_esfera, calcularVolumenEsfera(radio_esfera));
    printf("Volumen del cubo con lado %.2f: %.2f\n", lado_cubo, calcularVolumenCubo(lado_cubo));

    return 0;
}