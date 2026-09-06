<div align="center">

# 🔢 Calculadora Algorítmica em Flowgorithm

![Flowgorithm](https://img.shields.io/badge/Flowgorithm-000000?style=for-the-badge&logo=diagramsdotnet&logoColor=white)
![Operações](https://img.shields.io/badge/Operações-20-00599C?style=for-the-badge)
![GitHub](https://img.shields.io/badge/GitHub-181717?style=for-the-badge&logo=github&logoColor=white)
![Status](https://img.shields.io/badge/Status-Conclu%C3%ADdo-44CC11?style=for-the-badge)

</div>

## 📌 Visão Geral

Desenvolvimento de um **algoritmo visual interativo** no Flowgorithm que simula uma calculadora multifuncional com 20 rotinas de cálculo distintas. O projeto tem como foco a modelagem gráfica de algoritmos, representação de fluxo de dados, uso de blocos de decisão e controle de repetição em um ambiente visual executável.

---

## 🎯 Objetivos de Aprendizado

- **Modelagem de Algoritmos:** Estruturação visual de processos de tomada de decisão e laços de repetição.
- **Abstração Lógica:** Mapeamento de fórmulas matemáticas complexas em diagramas de blocos.
- **Validação de Entrada:** Tratamento básico de dados e fluxo de interação com o usuário.
- **Raciocínio Estruturado:** Construção de subrotinas para cálculos específicos (IMC e Geometria).

---

## 🧮 Mapeamento das 20 Operações

| ID | Operação | Descrição & Escopo |
| :-: | :--- | :--- |
| **01** | Adição | Soma de dois operandos |
| **02** | Subtração | Diferença entre dois valores |
| **03** | Divisão | Razão entre dois valores com validação |
| **04** | Multiplicação | Produto entre dois valores |
| **05** | Logaritmo (Base 10) | Cálculo de logaritmo decimal |
| **06** | Logaritmo Natural | Cálculo de logaritmo em base e ($\ln$) |
| **07** | Fatorial | Multiplicação iterativa sequencial |
| **08** | Módulo | Retorno do valor absoluto $\vert{}x\vert{}$ |
| **09** | Potenciação | Elevação de base por expoente |
| **10** | Raiz Quadrada | Extração de raiz ($\sqrt{x}$) |
| **11** | Porcentagem | Proporção percentual |
| **12** | Média Aritmética | Cálculo da média entre entradas |
| **13** | Celsius $\rightarrow$ Fahrenheit | Conversão de escala termométrica |
| **14** | Fahrenheit $\rightarrow$ Celsius | Conversão de escala termométrica |
| **15** | Constante $\pi$ | Retorno do valor fixo de Pi |
| **16** | Constante de Euler ($e$) | Retorno da constante neperiana |
| **17** | Raiz Cúbica | Extração de raiz ($\sqrt[3]{x}$) |
| **18** | Resto da Divisão | Operação com operador de resto (`%` / `mod`) |
| **19** | **Cálculo de IMC** | Avaliação do Índice de Massa Corporal |
| **20** | **Área Geométrica** | Mapeamento de área para múltiplas figuras |

---

## ⭐ Destaques do Algoritmo

### ⚖️ 1. Índice de Massa Corporal (IMC)
Subrotina configurada para receber peso ($kg$) e altura ($m$), aplicando a fórmula:

$$\text{IMC} = \frac{\text{peso}}{\text{altura}^2}$$

### 📐 2. Geometria Plana (Cálculo de Áreas)
Menu secundário integrado para seleção da figura desejada:
- **Quadrado:** $A = L^2$
- **Retângulo:** $A = b \cdot h$
- **Triângulo:** $A = \frac{b \cdot h}{2}$
- **Círculo:** $A = \pi \cdot r^2$

---

## 🔄 Fluxo de Execução Visual

```text
       [Início]
          │
    ( Exibe Menu )
          │
  [Seleção do Usuário]
          │
 ( Solicita Parâmetros )
          │
  [Processamento / Fórmula]
          │
    ( Exibe Resultado )
          │
  ¿Outro cálculo?
     ├── [Sim] ──► ( Retorna ao Menu )
     └── [Não] ──► [ Fim do Algoritmo ]
