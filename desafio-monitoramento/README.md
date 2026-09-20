<div align="center">

# Monitoramento de temperatura em C

![C](https://img.shields.io/badge/Linguagem_C-00599C?style=for-the-badge&logo=c&logoColor=white)
![GCC](https://img.shields.io/badge/Compilador_GCC-000000?style=for-the-badge&logo=gnu&logoColor=white)
![GitHub](https://img.shields.io/badge/GitHub-181717?style=for-the-badge&logo=github&logoColor=white)
![Status](https://img.shields.io/badge/Status-Conclu%C3%ADdo-44CC11?style=for-the-badge)

</div>


## Identificação

| Informação | Detalhes                                    |
| :---------:| :----------------------------------------   |
| **Aluno**  | Pedro Luiz                                  |
| **Disciplina** | Algoritmo e Pensamento Computacional    |
| **Professora** | Profa. Karla Sartin                     |
| **Projeto** | Desafio: Monitoramento de Temperatura em C |


## 📌 Visão Geral

Desenvolvimento de um **programa de monitoramento de temperatura em linguagem C**, desenvolvido com fins de estudo e prática dos conceitos fundamentais de programação.

O sistema recebe continuamente valores de temperatura informados pelo usuário e verifica se o valor ultrapassa o **limite de 80 °C**.

Sempre que a temperatura estiver acima do limite estabelecido, o programa emite um **alerta** e contabiliza a ocorrência. Ao atingir **3 alertas**, o monitoramento é encerrado automaticamente.

O projeto tem como objetivo aplicar conceitos de **laços de repetição, estruturas condicionais, variáveis e entrada e saída de dados**.

---

## 🎯 Objetivos de Aprendizado

* **Laços de Repetição:** Utilização do `while` para manter o monitoramento ativo.
* **Estruturas Condicionais:** Aplicação do `if...else` para verificar se a temperatura ultrapassou o limite.
* **Contadores:** Utilização de uma variável para contabilizar a quantidade de alertas.
* **Entrada de Dados:** Utilização do `scanf()` para receber a temperatura informada pelo usuário.
* **Saída de Dados:** Utilização do `printf()` para apresentar informações e alertas na tela.
* **Tipos de Dados:** Utilização de `float` para armazenar valores de temperatura e `int` para contabilizar os alertas.

---

## 🌡️ Funcionamento do Programa

O programa possui um limite de temperatura definido em:

```c
80 °C
```

O usuário informa uma temperatura e o programa realiza a verificação:

| Temperatura | Comportamento                            |
| :---------: | :--------------------------------------- |
| **≤ 80 °C** | Temperatura considerada normal           |
| **> 80 °C** | Um alerta é emitido e o contador aumenta |

O programa continua solicitando novas temperaturas enquanto a quantidade de alertas for menor que **3**.

Ao atingir o terceiro alerta, o programa encerra o monitoramento.

---

## Explicação da escolha do while

Eu escolhi o while porque no nosso programa precisamos verificar a condição antes de continuar o monitoramento. Enquanto a quantidade de alertas for menor que 3, o programa continua recebendo temperaturas.
Quando chegar a 3 alertas, a condição deixa de ser verdadeira e o programa encerra.
O do...while também poderia ser usado, mas ele executaria o código pelo menos uma vez antes de verificar a condição, o que não é necessário nesse caso.

## Execução do programa ( NO VSCODE )

Para executar o programa em C no Visual Studio Code, primeiro é necessário ter o VS Code instalado, juntamente com uma extensão para a linguagem C, como a C/C++ da Microsoft. Também é necessário ter um compilador C instalado, como o GCC.

Depois de criar o arquivo do programa com a extensão .c, abra o arquivo no VS Code. Em seguida, abra o terminal integrado pelo menu Terminal → Novo Terminal.

No terminal, compile o programa utilizando:

gcc nome_do_arquivo.c -o programa

Depois da compilação, execute o programa com:

.\programa.exe

O programa será iniciado diretamente pelo terminal do VS Code. A partir desse momento, será possível informar o limite de temperatura e inserir as temperaturas que serão monitoradas.

## Excução simples do programa (ONLINE GDB)

Para rodar o programa de uma forma mais simples:

Acesse o site https://www.onlinegdb.com/

Clique em Upload file ( do lado do botão verde escrito RUN ) e adicione o arquivo

Rode o programa clicando no botão verde ( RUN )



## 🚨 Sistema de Alertas

O sistema possui um contador responsável por armazenar a quantidade de temperaturas acima do limite.

Inicialmente:

```c
int alertas = 0;
```

Quando uma temperatura acima de 80 °C é detectada:

```c
alertas++;
```

O contador aumenta em uma unidade.

O monitoramento permanece ativo através da condição:

```c
while(alertas < 3)
```

Dessa forma, o programa continua funcionando até que o contador alcance 3 alertas.

### Exemplo

```text
Temperatura: 75 °C
Temperatura normal.

Temperatura: 82 °C
ALERTA: temperatura acima do limite!
Quantidade de alertas: 1/3

Temperatura: 90 °C
ALERTA: temperatura acima do limite!
Quantidade de alertas: 2/3

Temperatura: 85 °C
ALERTA: temperatura acima do limite!
Quantidade de alertas: 3/3

ATENCAO: 3 alertas foram atingidos!
Encerrando o monitoramento...
```

---

## 🛠️ Tecnologias & Dependências

* **Linguagem C:** Linguagem utilizada para desenvolver o programa.
* **`stdio.h`:** Biblioteca utilizada para entrada e saída de dados.
* **`printf()`:** Exibição de mensagens, temperaturas e alertas.
* **`scanf()`:** Recebimento da temperatura informada pelo usuário.

O projeto utiliza apenas recursos básicos da linguagem C, não sendo necessárias bibliotecas externas.

---

## 💻 Arquitetura & Sintaxe Aplicada

### Tipagem de Dados

O programa utiliza diferentes tipos de dados de acordo com sua finalidade:

```c
float temperatura;
int alertas = 0;
```

* **`float`:** Armazena a temperatura, permitindo valores com casas decimais.
* **`int`:** Armazena a quantidade de alertas.

### Controle de Fluxo

#### `while`

Utilizado para manter o programa em funcionamento enquanto o número de alertas for menor que 3:

```c
while(alertas < 3)
```

#### `if...else`

Utilizado para verificar se a temperatura ultrapassou o limite:

```c
if(temperatura > 80)
{
    alertas++;
    printf("ALERTA: temperatura acima do limite!\n");
}
else
{
    printf("Temperatura normal.\n");
}
```

#### Operador `++`

Utilizado para aumentar o contador de alertas:

```c
alertas++;
```

Cada vez que uma temperatura acima de 80 °C é detectada, o valor do contador aumenta em 1.

---

## 🔄 Fluxo de Execução

```text
             [Início]
                 │
                 ▼
      [Inicia o monitoramento]
                 │
                 ▼
       [Usuário digita a
          temperatura]
                 │
                 ▼
      [Temperatura > 80 °C?]
             /         \
           NÃO          SIM
            │            │
            ▼            ▼
     [Temperatura    [Emite alerta]
        normal]           │
                          ▼
                   [Aumenta contador]
            \            /
             \          /
              ▼        ▼
          [Alertas < 3?]
             /      \
           SIM       NÃO
            │          │
            ▼          ▼
     [Nova temperatura] [Encerra]
            │
            └──────► [Monitoramento]
```

---

## 📚 Conceitos Praticados

Este projeto foi desenvolvido para praticar conceitos fundamentais de **Algoritmo e Pensamento Computacional**, incluindo:

* Variáveis;
* Tipos de dados;
* Entrada e saída de dados;
* Estruturas condicionais;
* Laços de repetição;
* Contadores;
* Operadores relacionais;
* Operadores de incremento;
* Lógica de programação;
* Desenvolvimento de programas interativos em C.

---

## 📝 Conclusão

O projeto **Desafio: Monitoramento de Temperatura em C** apresenta uma aplicação simples dos fundamentos da linguagem C.

Por meio do monitoramento contínuo da temperatura, foi possível aplicar na prática conceitos como **`while`**, **`if...else`**, variáveis, contadores, entrada de dados e saída de informações.

O sistema também demonstra como estruturas básicas de programação podem ser combinadas para criar um programa capaz de tomar decisões e controlar automaticamente seu próprio fluxo de execução.
