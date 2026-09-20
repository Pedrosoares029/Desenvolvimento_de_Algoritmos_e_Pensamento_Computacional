#include <stdio.h>

int main()
{
    float temperatura;
    int alertas = 0;

    printf("Iniciando monitoramento de temperatura...\n");

    while(alertas < 3)
    {
        printf("\nDigite a temperatura (°C): ");
        scanf("%f", &temperatura);

        printf("Temperatura atual: %.1f °C\n", temperatura);

        if(temperatura > 80)
        {
            alertas++;

            printf("ALERTA: temperatura acima do limite!\n");
            printf("Quantidade de alertas: %d/3\n", alertas);
        }
        else
        {
            printf("Temperatura normal.\n");
        }
    }

    printf("\nATENCAO: 3 alertas foram atingidos!\n");
    printf("Encerrando o monitoramento...\n");

    return 0;
}