<div align="center">

# 🧮 Calculadora Multifuncional em C

![C](https://img.shields.io/badge/Linguagem_C-00599C?style=for-the-badge&logo=c&logoColor=white)
![GCC](https://img.shields.io/badge/Compilador_GCC-000000?style=for-the-badge&logo=gnu&logoColor=white)
![GitHub](https://img.shields.io/badge/GitHub-181717?style=for-the-badge&logo=github&logoColor=white)
![Status](https://img.shields.io/badge/Status-Conclu%C3%ADdo-44CC11?style=for-the-badge)

</div>

## 📌 Visão Geral

Desenvolvimento de uma **solução interativa em linha de comando** que consolida 20 operações matemáticas distintas. O projeto aplica de forma integrada conceitos fundamentais de algoritmos, estruturas de controle e manipulação de tipos de dados em C.

---

## 🎯 Objetivos de Aprendizado

- **Lógica e Controle de Fluxo:** Implementação de menus dinâmicos com ciclos contínuos e seleções condicionais.
- **Tratamento de Exceções Lógicas:** Prevenção de erros operacionais em tempo de execução (ex: divisão por zero).
- **Manipulação Numérica:** Aplicação avançada da biblioteca `<math.h>` para cálculos trigonométricos, logarítmicos e estatísticos.
- **Compilação e Toolchain:** Uso de flags de compilação com linkagem de bibliotecas via terminal.

---

## 🧮 Operações Implementadas

| ID | Operação | Descrição & Escopo |
| :-: | :--- | :--- |
| **01** | Adição | Soma aritmética de dois operandos |
| **02** | Subtração | Diferença entre dois valores |
| **03** | Multiplicação | Produto de dois fatores |
| **04** | Divisão | Razão com verificação de divisor zero |
| **05** | Potenciação | Cálculo de base elevada a um expoente ($x^y$) |
| **06** | Raiz Quadrada | Extração de raiz ($\sqrt{x}$) |
| **07** | Porcentagem | Cálculo percentual proporcional |
| **08** | Seno | Razão trigonométrica para ângulo em graus |
| **09** | Cosseno | Razão trigonométrica para ângulo em graus |
| **10** | Tangente | Razão trigonométrica para ângulo em graus |
| **11** | Constante Pi | Exibição do valor preciso de $\pi$ |
| **12** | Fatorial | Produto sequencial dos inteiros ($n!$) |
| **13** | Logaritmo | Logaritmo natural ($\ln$) |
| **14** | MMC | Mínimo Múltiplo Comum |
| **15** | MDC | Máximo Divisor Comum |
| **16** | Moda | Apuração estatística do elemento de maior frequência |
| **17** | Média | Média aritmética de conjunto de dados |
| **18** | Mediana | Determinação do elemento central do conjunto |
| **19** | Graus $\rightarrow$ Radianos | Conversão de unidade angular |
| **20** | Radianos $\rightarrow$ Graus | Conversão de unidade angular |

---

## 🛠️ Tecnologias & Depedências

* **Linguagem C:** Linguagem base de implementação.
* **`stdio.h`:** Leitura (`scanf`) e saída formatada (`printf`).
* **`math.h`:** Funções matemáticas avançadas (requer linkagem `-lm`).
* **`stdlib.h`:** Funções de alocação e utilitários do sistema.

---

## 💻 Arquitetura & Sintaxe Aplicada

### Tipagem de Dados
Uso estratégico de `int` para opções/contadores, `double` para alta precisão de ponto flutuante e `char` para controle de repetição.

### Controle de Fluxo Interativo
* **`switch...case`:** Desvio condicional direto baseado na opção escolhida no menu.
* **`if...else`:** Validação preventiva de entradas inválidas.
* **`do...while`:** Manutenção da sessão ativa até comando explícito de saída.

---

## 🔄 Fluxo de Execução

```text
       [Início]
          │
    ( Exibe Menu )
          │
  [Seleção do Usuário]
          │
 ( Solicita Parâmetros )
          │
  [Executa Otimização]
          │
    ( Exibe Resultado )
          │
  ¿Executar outro cálculo?
     ├── [Sim] ──► ( Retorna ao Menu )
     └── [Não] ──► [ Encerrar Programa ]
