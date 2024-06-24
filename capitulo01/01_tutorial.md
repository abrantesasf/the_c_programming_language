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

Em qualquer contexto onde é permitido utilizar o valor de uma variável de certo
tipo, também podemos utilizar uma expressão complexa que retorna um valor desse
mesmo tipo.

O loop for é uma generalização do loop while. A escolha entre eles é um tanto
arbitrária, baseado em qual parece mais claro na situação em questão.


## 1.4 Constantes simbólicas

Não devemos deixar números mágicos soltos pelo código. O melhor a fazer é dar
nomes úteis para esses números mágicos. Uma maneira de fazer isso é criando
**nomes simbólicos**, também chamados de **constantes simbólicas**, para
identificar esses números. Isso é feito com a diretiva "#define":

`#define nome texto_a_ser_colocado`

Note que as constantes simbólicas NÃO SÃO variáveis, não podem ser
declaradas. Note também que não devemos colocar um ";" ao final da criação das
constantes simbólicas pois, caso contrário, esse ";" também seria colocado no
código.


## 1.5 Input e output de caracteres

A entrada e saída de caracteres, independentemente de onde esses caracteres
venham ou para onde esses caracteres vão, é feita através de **streams** de
caracteres. Atenção:

* Um **stream de texto** é uma seqüência de caracteres divididos em linhas;
* Cada linha contém 0 ou mais caracteres seguidos por um `\n`
* As bibliotecas que lidam com streams de texto devem seguir as duas observações
  acima
* O programador não precisa se preocupar em como as linhas são representadas
  fora de seu programa: basta saber que em seu programa os streams de texto
  seguem o modelo acima

Funções para ler e/ou escrever **UM CARACTERE POR VEZ**:

* `getchar`: lê o próximo caractere de input a partir de uma stream de texto e
  retorna o valor desse caractere
* `putchar`: imprime um caractere toda vez que é chamada

Sempre tenha em mente o modelo de funcionamento dos streams de texto. Isso é tão
importante que vou repetir aqui:

* Um stream de texto é uma **seqüência de caracteres divididos em linhas**
* Cada linha contém 0 ou mais caracteres seguidos por um `\n`
* O programador não precisa se preocupar em como as linhas são representadas
  fora de seu programa: basta saber que em seu programa os streams de texto
  seguem o modelo acima

Um caractere escrito entre aspas simples representa um valor inteiro igual ao
valor numérico desse caractere no character set da máquina. Nós chamamos
caracteres entre aspas simples de **caracteres constantes**. Atenção:

* 'X' = **caractere constante** (utilizamos aspas simples)
* "XX" = **string constante** (utilizamos aspas duplas)

Observações importantes:4

* Operações de atribuição (=) tem associatividade à direita;
* Operações de comparação lógica tem associatividade à esquerda e avaliam
  em curto circuito.


## 1.6 Arrays

Os índices dos arrays sempre começam em 0 (zero) e podem ser qualquer expressão
que resulte em um inteiro.

O valor numérico de um dígito é dado por `c - '0'`, onde c é uma variável
inteira ou char que está armazenando o dígito. Isso dá certo porque, na tabela
ASCII, os valores dos caracteres que representam os dígitos são os seguintes:

   Dígito em caractere   ASCII
           0              48
           1              49
           2              50
           3              51
           4              52
           5              53
           6              54
           7              55
           8              56
           9              57

Assim, quando calculamos `c - '0'`, estamos calculando um valor numérico de 0 a
9, da seguinte maneira:

* Se c armazenar o caractere '4', ao fazermos `c - '0'` estamos fazendo, na
  verdade, 52 - 48, que resulta em 4;
* Se c armazenar o caractere '8', ao fazermos `c - '0'` estamos fazendo, na
  verdade, 56 - 48, que resulta em 8;
* E assim por diante.

Em geral, se c é uma variável inteira (ou char) que armazena o valor de um
dígito representado por um caractere ASCII, `c - '0'` é uma expressão inteira
com um valor entre 0 e 9, correspondendo ao caractere entre '0' e '9' armazenado
na variável c.


## 1.7 Funções

Funções são uma maneira conveniente de encapsular alguma seqüência de ações, que
podem então ser utilizadas sem que tenhamos que nos preocupar sobre a
implementação dessas ações. Podemos ignorar **como** uma função funciona, basta
saber **o que** ela faz.

Até agora vimos 3 funções: `printf`, `getchar` e `putchar`. Para escrevermos
nossas próprias funções, fazemos o seguinte:

tipo-de-retorno nome-da-função (parâmetros) {corpo; return expression;}

As definições das funções podem aparecer em qualquer ordem, em um único arquivo
ou espalhadas por diversos arquivos-fonte. Ao definirmos a função os parâmetros
(se houverem), devem ser declarados com "tipo nome". Se a função não retornar
nada (ou seja, se for um procedimento), deve ter seu tipo de retorno definido
como `void`. Se não receber parâmetros, a lista de parâmetros deve ter a palavra
`void`.

A função main deve retornar um inteiro para indicar sucesso (geralmente 0) ou
falha (algum inteiro diferente de zero).

Antes da main devemos colocar um protótipo da função que será definida
posteriormente. Nesse protótipo os nomes dos parâmetros NÃO PRECISAM ser os
mesmos dos usados na definição da função; aliás, nos protótipos só o tipo dos
parâmetros é obrigatório, os nomes são opcionais. É boa prática de programação
utilizar bons nomes na definição da função, e repetir esses nomes nos
protótipos, por questões de clareza e documentação.


## 1.8 Argumentos: passagem por valor

Em C, **TODOS** os argumentos de função são **passados por valor**, ou seja, a
função que é chamada recebe cópias dos argumentos em variáveis temporárias, não
as variáveis originais. Assim a função chamada não pode diretamente alterar uma
variável que foi passada como argumento; a função pode alterar apenas a sua
cópia privada temporária.

Quando necessário é possível fazer com que uma função modifique uma variável que
foi passada em uma chamada, se passarmos o endereço da variável (tecnicamente
devemos passar um **ponteiro** para a variável) e, nesse caso, a função deve
declarar que o parâmetro é um ponteiro e acessamos a variável de modo indireto,
através desse ponteiro.

Com **arrays** a situação é um ponto diferente: quando passamos o nome de um
array para uma função, o valor que é passado para a função é o endereço do
início do array (não há cópia dos elementos do array). Fazendo o subscrito desse
endereço a função pode acessar e alterar qualquer elemento no array original.


## 1.9 Arrays de caracteres

O tipo mais comum de array em C é o array de caracteres. Toda linha de texto
tem, pelo menos, 1 caractere, pois mesmo uma linha contendo apenas uma newline
tem comprimento 1.

O caractere nulo (null character) '\0' é utilizado para marcar o fim de uma
string de caracteres. Note que a string pode ter ou não o '\n': não há nada de
especial no '\n', é apenas mais um caractere da string. Mas, tendo ou não o
'\n', é necessário que o '\0' marque o final de uma string. Mas atenção: o '\0'
não é considerado parte da string!
