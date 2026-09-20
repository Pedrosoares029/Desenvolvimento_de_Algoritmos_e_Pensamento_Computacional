#include <stdio.h> 
 
int main() 
{ 
    // Variáveis principais 
    float limite; 
    float temperatura; 
     
    // Variáveis para os cálculos 
    float soma = 0; 
    float media; 
    float maior; 
    float menor; 
 
    // Contador de quantas temperaturas foram/vão ser recebidas 
    int quantidade = 0; 
 
    // Contador de temperaturas acima do limite 
    int alertas = 0; 
 
    // Vetor para guardar as temperaturas que causaram alerta 
    float temperaturasAlerta[3]; 
 
    // colocando o usuario para definir a temperatura 
 
    printf("=== MONITORAMENTO DE TEMPERATURA ===\n\n"); 
 
    // O usuario precisa informar um limite valido 
    while (1) 
    { 
        printf("Digite o limite de temperatura (C): "); 
 
        // Verifica se o usuario realmente digitou um numero 
        if (scanf("%f", &limite) == 1) 
        { 
            break; 
        } 
 
        // Limpa o que foi digitado de forma incorreta 
        while (getchar() != '\n'); 
 
        printf("Entrada invalida! Digite apenas um numero.\n\n"); 
    } 
 
    printf("\nLimite definido: %.1f C\n", limite); 
    printf("Iniciando monitoramento...\n\n"); 
 
    // monitoramento das temperaturas 
 
    // O programa continua enquanto nao houver 3 alertas 
    while (alertas < 3) 
    { 
        int quantidadeEntrada; 
 
        printf("Quantas temperaturas deseja inserir? "); 
        scanf("%d", &quantidadeEntrada); 
 
        // Verifica se a quantidade informada e valida 
        if (quantidadeEntrada <= 0) 
        { 
            printf("Quantidade invalida! Digite um numero maior que 0.\n\n"); 
            continue; 
        } 
 
        // Repeticao para receber varias temperaturas 
        for (int i = 0; i < quantidadeEntrada && alertas < 3; i++) 
        { 
            printf("\nDigite a temperatura %d (C): ", i + 1); 
 
            // Verifica se a temperatura digitada e valida 
            if (scanf("%f", &temperatura) != 1) 
            { 
                // Limpa a entrada invalida 
                while (getchar() != '\n'); 
 
                printf("Entrada invalida! Digite apenas um numero.\n"); 
                i--; 
                continue; 
            } 
 
            // Soma a temperatura para calcular a media depois 
            soma = soma + temperatura; 
 
            // A primeira temperatura sera usada como maior e menor 
            if (quantidade == 0) 
            { 
                maior = temperatura; 
                menor = temperatura; 
            } 
            else 
            { 
                // Verifica se encontrou uma temperatura maior 
                if (temperatura > maior) 
                { 
                    maior = temperatura; 
                } 
 
                // Verifica se encontrou uma temperatura menor 
                if (temperatura < menor) 
                { 
                    menor = temperatura; 
                } 
            } 
 
            // Aumenta a quantidade de temperaturas recebidas 
            quantidade++; 
 
            printf("Temperatura atual: %.1f C\n", temperatura); 
 
            //Verificando o limite de temperatura 
 
            if (temperatura > limite) 
            { 
                // Aumenta a quantidade de alertas 
                alertas++; 
 
                // Guarda a temperatura que causou o alerta 
                temperaturasAlerta[alertas - 1] = temperatura; 
 
                printf("ALERTA! Temperatura acima do limite!\n"); 
                printf("Alertas: %d/3\n", alertas); 
            } 
            else 
            { 
                printf("Temperatura dentro do limite.\n"); 
            } 
 
            printf("\n"); 
        } 
    } 
 
    // Calculo de média 
 
    media = soma / quantidade; 
 
    // relatorio final 
 
    printf("====================================\n"); 
    printf("         RELATORIO FINAL\n"); 
    printf("====================================\n"); 
 
    printf("Limite definido: %.1f C\n", limite); 
    printf("Temperaturas recebidas: %d\n", quantidade); 
    printf("Media das temperaturas: %.1f C\n", media); 
    printf("Maior temperatura: %.1f C\n", maior); 
    printf("Menor temperatura: %.1f C\n", menor); 
 
    printf("Temperaturas acima do limite: %d\n", alertas); 
 
    printf("\nTemperaturas que causaram os 3 alertas:\n"); 
 
    // Mostra as temperaturas que ultrapassaram o limite 
    for (int i = 0; i < 3; i++) 
    { 
        printf("Alerta %d: %.1f C\n", i + 1, temperaturasAlerta[i]); 
    } 
 
    printf("\n====================================\n"); 
    printf("3 alertas atingidos.\n"); 
    printf("Encerrando o monitoramento...\n"); 
 
    return 0; 
}
