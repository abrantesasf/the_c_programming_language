# 1 Um tutorial introdutório

## 1.1 Iniciando

Um programa em C contém:

* **Funções**:
  * Contém **sentenças**, que especificam as ações a serem feitas
  * As sentenças devem ser terminadas por um ";"
  * A função `main` é especial, pois é o ponto de início da execução do programa
  * Funções não podem ser aninhadas
  * As sentenças de uma função devem ficar dentro de um bloco delimitado por {}
  * Se só houver uma sentença em uma função, o bloco de {} pode ser omitido
* Variáveis:
  * Armazenam os valores durante o processamento

Comunicar dados para funções significa **chamar** a função, fornecendo uma lista
de **argumentos** para a função que é chamada. Os parênteses após o nome da
função contém a lista de argumentos. Se uma função não receber argumentos, a
lista deve ficar vazia e conter a palavra `void` (para indicar que a função não
recebe nenhum argumento).

Uma seqüência de caracteres entre aspas duplas é uma **string**, ou melhor, uma
**string de caracteres** ou uma **string constante**. Atenção: uma string deve
começar e terminar em uma mesma linha, não é possível continuar uma string na
próxima linha.

Podemos utilizar **seqüências de escape**, ou **caracteres de escape**, para
representar caracteres invisíveis ou de difícil representação, por exemplo:

* `\n`: nova linha
* `\t`: tabulação horizontal
* `\b`: backspace
* `\"`: aspas duplas
* `\\`: contra-barra


## 1.2 Variáveis e expressões aritméticas

Comentários podem ser embutidos no código de duas maneiras (note que comentários
não podem ser aninhados):

* Entre os caracteres `/*` e `*/`: esse tipo de comentário pode englobar
  diversas e diversas linhas;
* Após os caracteres `//`: esse tipo de comentário é só até o final da linha

Todas as variáveis devem ser declaradas. A declaração consiste no **tipo de
dado** e uma lista com o nome das variáveis (separadas por vírgulas). Os tipos
básicos de dados são:

* char
* short
* int
* long
* float
* double

Alguns tipos de dados derivados são:

* arrays
* structures
* unions
* pointers
* functions

A indentação enfatiza a estrutura lógica do programa e deve ser sempre
utilizada, com no mínimo 4 espaços (não use tabulações). Escreva uma sentença
por linha e use espaços ao redor dos operadores.

Note que a **divisão inteira** resulta sempre em um número inteiro, truncando a
parte fracionária, se houver.

A função `printf` utiliza **especificadores de formato** para imprimir
argumentos. Alguns desses especificadores são:

* %d: inteiro decimal
* %i: inteiro
* %o: octal
* %x: hexadecimal
* %c: caractere
* %s: string de caracteres
* %%: para imprimir um %

Os especificadores de formato podem ter uma amplitude e precisão, ambos
opcionais. Por exemplo:

* %d: um inteiro
* %6d: um inteiro com, pelo menos, 6 caracteres de largura
* %f: um ponto flutuante
* %6f: um ponto flutuante com, pelo menos, 6 caracteres de largura
* %.2f: um ponto flutuante com 2 caracteres após o ponto decimal
* %6.2f: um ponto flutuante com, pelo menos, 6 caracteres de largura, e 2
  caracteres após o ponto decimal


## 1.3 A sentença for

(em breve)
