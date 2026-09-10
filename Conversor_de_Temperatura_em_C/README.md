<div align="center">

# 🌡️ Conversor de Temperatura em C

![C](https://img.shields.io/badge/Linguagem_C-00599C?style=for-the-badge&logo=c&logoColor=white)
![GCC](https://img.shields.io/badge/Compilador_GCC-000000?style=for-the-badge&logo=gnu&logoColor=white)
![GitHub](https://img.shields.io/badge/GitHub-181717?style=for-the-badge&logo=github&logoColor=white)
![Status](https://img.shields.io/badge/Status-Conclu%C3%ADdo-44CC11?style=for-the-badge)

</div>

## 📌 Visão Geral

Desenvolvimento de um **conversor de temperatura interativo em linha de comando**, capaz de realizar conversões entre as escalas **Celsius, Fahrenheit e Kelvin**.

O projeto foi desenvolvido em linguagem C com o objetivo de aplicar conceitos fundamentais de programação, como **funções, estruturas de repetição, estruturas de seleção, variáveis e entrada/saída de dados**.

<p align="center">
  <img src="images/conversor.png" alt="Conversor de Temperatura em execução" width="700">
</p>

---

## 🎯 Objetivos de Aprendizado

- **Criação de Funções:** Organização das fórmulas de conversão em funções independentes.
- **Controle de Fluxo:** Utilização de `while` para permitir múltiplas conversões durante a execução.
- **Seleção Condicional:** Implementação de `switch...case` para controlar as opções do menu.
- **Manipulação Numérica:** Uso do tipo `float` para trabalhar com valores decimais de temperatura.
- **Entrada e Saída de Dados:** Utilização de `scanf` e `printf` para interação com o usuário.
- **Operadores Lógicos:** Aplicação do operador `||` para controlar a repetição do programa.

---

## 🌡️ Conversões Implementadas

| ID | Conversão | Fórmula |
| :-: | :--- | :--- |
| **01** | Celsius → Fahrenheit | $F = (C \times \frac{9}{5}) + 32$ |
| **02** | Celsius → Kelvin | $K = C + 273.15$ |
| **03** | Fahrenheit → Celsius | $C = (F - 32) \times \frac{5}{9}$ |
| **04** | Fahrenheit → Kelvin | $K = (F - 32) \times \frac{5}{9} + 273.15$ |
| **05** | Kelvin → Celsius | $C = K - 273.15$ |
| **06** | Kelvin → Fahrenheit | $F = (K - 273.15) \times \frac{9}{5} + 32$ |

---

## 🛠️ Tecnologias & Dependências

* **Linguagem C:** Linguagem utilizada para implementação do projeto.
* **`stdio.h`:** Biblioteca utilizada para entrada e saída de dados através de `scanf` e `printf`.
* **GCC:** Compilador utilizado para compilar o código em ambientes locais.
* **OnlineGDB:** Ambiente online utilizado para executar e testar o código.
* **Visual Studio Code:** Editor que pode ser utilizado para desenvolver e executar o projeto localmente no Windows.

---

## 💻 Arquitetura & Sintaxe Aplicada

<p align="center">
  <img src="images/codigo.png" alt="Código do Conversor de Temperatura" width="800">
</p>

### Tipagem de Dados

Uso de diferentes tipos de dados de acordo com sua finalidade:

* **`int`:** Armazenamento da opção selecionada no menu.
* **`float`:** Armazenamento da temperatura e dos resultados das conversões.
* **`char`:** Controle da repetição do programa através das opções `S` ou `N`.

### Funções

Cada conversão possui sua própria função, tornando o código mais organizado e facilitando a reutilização das fórmulas.

Exemplo:

```c
float celsiusFahrenheit(float temperatura) {
    return (temperatura * 9.0 / 5.0) + 32.0;
}
