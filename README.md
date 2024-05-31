# The C Programming Language

Este repositório é dedicado à compreensão da arquitetura dos computadores e da
programação de "baixo nível" através do estudo da primeira e da segunda edições
do livro clássico da linguagem C, o **The C Programming Language**, escrito por
Brian W. Kernighan e Dennis M. Ritchie (este, o inventor da linguagem C). Este
livro ficou mundialmente conhecido como **K&R**.

Juntamente com o estudo do K&R também faremos a leitura e o estudo do livro
**The C Answer Book**, de Clovis L. Tondo e Scott E. Gimpel, que traz as
soluções para os problemas e exercícios do K&R. Para manter o mesmo padrão de
abreviatura, chamarei este livro de T&G.

Acredito que o estudo cuidadoso e detalhado do K&R juntamente com o T&G são
fundamentais no aprendizado e compreensão da linguagem C, e de boas técnicas e
habilidades de programação. O que farei neste estudo é o seguinte:

0. Estudo dos capítulos do K&R, reproduzindo os códigos de exemplo
0. Resolução dos exercícios do livro (ou, pelo menos, uma tentativa séria de
   resolução)
0. Comparação das minhas respostas com as respostas do T&G
0. Estudo detalhado das respostas do T&G


## Sobre os livros

A 1ª edição do K&R lançada em 1978 e tornou-se o padrão oficial da linguagem C
clássica, a **K&R C** ou **Traditional C**. Na época do lançamento do livro a
computação estava sofrendo uma transição: estava saindo da computação centrada
no hardware, específica para cada máquina, para uma computação centrada na
portabilidade de software. Este livro tornou-se um marco na história e mudou a
computação para sempre:


![K&R 1ª edição](https://raw.githubusercontent.com/abrantesasf/the_c_programming_language/master/imagens/c1.png)

Pouco tempo depois T&G lançaram seu livro com as respostas para os exercícios
proposto no K&R:

![T&G 1ª edição](https://raw.githubusercontent.com/abrantesasf/the_c_programming_language/master/imagens/c1ans.png)

A 2ª edição do K&R foi lançada em 1988 e procurava trazer a linguagem C conforme
foi padronizada pelo ANSI em 1989, no que ficou conhecido como padrão ANSI C, ou
C89:

![K&R 2ª edição](https://raw.githubusercontent.com/abrantesasf/the_c_programming_language/master/imagens/c2.jpeg)

Novamente, pouco tempo depois, T&G atualizaram seu livro de soluções para a
segunda edição do K&R:

![T&G 2ª edição](https://raw.githubusercontent.com/abrantesasf/the_c_programming_language/master/imagens/c2ans.jpg)


## Outras informações

Este repositório é um estudo comparado das duas edições do K&R e das soluções
dos exercícios apresentadas por T&G. Para que este repositório não tenha somente
um interesse histórico, reescreverei os exemplos de códigos e soluções para o
padrão mais novo da linguagem C, o C17. Assim, sempre que os códigos nas duas
edições do K&R forem diferentes do padrão atual, reescrevi o código de acordo
com o padrão atual, e fiz uma nota da alteração.

Cada capítulo do livro estará presente no repositório, com breves notas
importantes sobre o conteúdo. Além disso os códigos de exemplos e exercícios
foram reproduzidos aqui, utilizando-se a seguinte convenção:

* Códigos de exemplo: `cNN\_sN.N\_cNN`, onde cNN representa o número do
  capítulo, sN.N representa a seção dentro de cada capítulo, e cNN representa o
  número do código (conforme uma numeração sequencial que fui criando e anotando
  na 2ª edição do livro; a numeração reinicia em cada capítulo).
* Exercícios: `cNN\_sN.N\_eN.N`, onde cNN e sN.N tem os mesmos significados já
  explicados, e eN.N corresponde ao número do exercício conforme identificado no
  próprio livro.

Pequenos trechos de código utilizados pelos autores para explicar uma passagem
ou trecho de um programa não recebem numeração especial pois, via de regra,
aparecem em programas completos já numerados.
