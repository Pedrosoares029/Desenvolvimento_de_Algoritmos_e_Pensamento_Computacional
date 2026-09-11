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
## 🚀 Como Compilar e Executar o Programa

Se você nunca mexeu com código C antes, não se preocupe! Para rodar este programa, o computador precisa traduzir o código-fonte (que nós lemos) em um arquivo executável (que o computador entende). Esse processo se chama **compilação**.

Você pode testar o programa de duas formas: **online** (sem instalar nada) ou **no seu computador** (usando o VSCode).

---

### Opção 1: Executando Online (Mais Fácil e Rápido)

Não precisa instalar nada no seu computador.

1. Acesse o site [OnlineGDB](https://www.onlinegdb.com/).
2. No canto superior direito, procure a caixa **Language** e selecione **C**.
3. Apague todo o código que estiver na tela e cole o código do arquivo `Conversor_De_Temperatura.C`. Que está nesse repositório
4. Clique no botão verde **Run** (na barra superior) ou aperte a tecla `F9`.
5. O programa vai começar a rodar na caixa preta (terminal) na parte inferior da tela.

---

### Opção 2: Executando no VS Code (Instalação Local)

#### Pré-requisitos
- Ter o **Visual Studio Code** instalado.
- Ter o compilador **GCC** instalado no seu sistema:
  - **Windows:** Instale o [MinGW-w64](https://www.mingw-w64.org/) e adicione-o às variáveis de ambiente do sistema.
  - **Linux / macOS:** Abra o terminal e instale o pacote `gcc` ou `build-essential`.

#### Instalando as Extensões no VS Code
As extensões ajudam o VS Code a entender a linguagem C e a rodar o programa com um clique.

1. Abra o VS Code.
2. Clique no ícone de **Extensões** na barra lateral esquerda (ou aperte `Ctrl + Shift + X`).
3. Pesquise e instale:
   - **C/C++** (criada pela *Microsoft*): Adiciona suporte à sintaxe da linguagem.
   - **Code Runner** (criada por *Jun Han*): Cria um botão de "Play" para rodar o código.

#### Configurando o Code Runner para aceitar digitação
Por padrão, o *Code Runner* apenas mostra resultados, mas este programa precisa que você digite dados.
1. No VS Code, vá em **Arquivo > Preferências > Configurações** (ou `Ctrl + ,`).
2. Pesquise por `Run In Terminal`.
3. Marque a opção **Code-runner: Run In Terminal**.

#### Rodando o código
1. Abra a pasta do projeto no VS Code e clique no arquivo `Conversor_De_Temperatura.C`.
2. Clique no botão de **Play** (`▶`) no canto superior direito do editor.
3. *Alternativa via Terminal manual:* Se preferir usar comandos, abra o terminal do VS Code (`Ctrl + '`) e digite:
   ```bash
   # 1. Compila o código e gera o programa executável
   gcc main.c -o conversor

   # 2. Executa o programa gerado
   ./conversor      # No Linux ou macOS
   conversor.exe    # No Windows


## Objetivos de Aprendizado

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

## Tecnologias & Dependências

* **Linguagem C:** Linguagem utilizada para implementação do projeto.
* **`stdio.h`:** Biblioteca utilizada para entrada e saída de dados através de `scanf` e `printf`.
* **GCC:** Compilador utilizado para compilar o código em ambientes locais.
* **OnlineGDB:** Ambiente online utilizado para executar e testar o código.
* **Visual Studio Code:** Editor que pode ser utilizado para desenvolver e executar o projeto localmente no Windows.

---

## Arquitetura & Sintaxe Aplicada

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
```

### Explicando a função
  -Essa função é para a conversão de celcius para fahrenheit, então ela recebe uma variavel, que no caso é float, porque podemos usar numeros racionais nesse codigo. 
  -Logo depois um nome facil de identificar o nome da função. celsiusFahrenheit 
  -Dentro dos parênteses está a declaração do parâmetro (float temperatura), que funciona como uma variável local pronta para receber o valor numérico transmitido para a função quando ela for executada.
  -As chaves { } delimitam o corpo da função, indicando onde o bloco de código começa e termina.
  -o comando return indica a instrução de retorno, enviando a expressão calculada de volta para o ponto onde a função foi chamada
  -enquanto o ponto e vírgula (;) ao final da linha encerra essa instrução sintática.

## Estudante
  -Trabalho feito por: Pedro Luiz Farias Soares
