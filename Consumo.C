 #include <stdio.h>

#include<math.h>
int main() {
    int horas, km_h, distancia, soma;
    float litros_usados, km_l;
    scanf("%d", &horas);
    scanf("%d", &km_h);
    km_l = 12;
    soma = horas * km_h;
    litros_usados = soma / km_l;
    printf("%.3f\n", litros_usados);

    return 0;
}
