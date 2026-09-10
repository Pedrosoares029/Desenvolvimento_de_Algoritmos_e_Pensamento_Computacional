#include <stdio.h>

// C para F
float celsiusFahrenheit(float temperatura) {
    return (temperatura * 9.0 / 5.0) + 32.0;
}

// C para K
float celsiusKelvin(float temperatura) {
    return temperatura + 273.15;
}

// F para C
float fahrenheitCelsius(float temperatura) {
    return (temperatura - 32.0) * 5.0 / 9.0;
}

// F para K
float fahrenheitKelvin(float temperatura) {
    return (temperatura - 32.0) * 5.0 / 9.0 + 273.15;
}

// K para C
float kelvinCelsius(float temperatura) {
    return temperatura - 273.15;
}

// K para F
float kelvinFahrenheit(float temperatura) {
    return (temperatura - 273.15) * 9.0 / 5.0 + 32.0;
}

int main() {

    int opcao;
    float temperatura;
    float resultado;
    char continuar = 'S';

    while (continuar == 'S' || continuar == 's') {  //  o || é usado como operador logico representando o OU.

        printf("\n===== CONVERSOR DE TEMPERATURA =====\n");
        printf("1 - Celsius -> Fahrenheit\n");
        printf("2 - Celsius -> Kelvin\n");
        printf("3 - Fahrenheit -> Celsius\n");
        printf("4 - Fahrenheit -> Kelvin\n");
        printf("5 - Kelvin -> Celsius\n");
        printf("6 - Kelvin -> Fahrenheit\n");

        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                printf("Digite a temperatura em Celsius: ");
                scanf("%f", &temperatura);

                resultado = celsiusFahrenheit(temperatura);

                printf("Resultado: %.2f Fahrenheit\n", resultado);
                break;

            case 2:
                printf("Digite a temperatura em Celsius: ");
                scanf("%f", &temperatura);

                resultado = celsiusKelvin(temperatura);

                printf("Resultado: %.2f Kelvin\n", resultado);
                break;

            case 3:
                printf("Digite a temperatura em Fahrenheit: ");
                scanf("%f", &temperatura);

                resultado = fahrenheitCelsius(temperatura);

                printf("Resultado: %.2f Celsius\n", resultado);
                break;

            case 4:
                printf("Digite a temperatura em Fahrenheit: ");
                scanf("%f", &temperatura);

                resultado = fahrenheitKelvin(temperatura);

                printf("Resultado: %.2f Kelvin\n", resultado);
                break;

            case 5:
                printf("Digite a temperatura em Kelvin: ");
                scanf("%f", &temperatura);

                resultado = kelvinCelsius(temperatura);

                printf("Resultado: %.2f Celsius\n", resultado);
                break;

            case 6:
                printf("Digite a temperatura em Kelvin: ");
                scanf("%f", &temperatura);

                resultado = kelvinFahrenheit(temperatura);

                printf("Resultado: %.2f Fahrenheit\n", resultado);
                break;

            default:
                printf("Opcao invalida!\n");
                break;
        }

        printf("\nDeseja fazer outra conversao? (S/N): ");
        scanf(" %c", &continuar);
    }

    printf("\nPrograma encerrado.\n");

    return 0;
}