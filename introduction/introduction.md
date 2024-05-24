# Introdução

Algumas características da linguagem C:

* É uma linguagem de programação de uso geral
* Não é exclusiva de nenhum hardware ou sistema em particular, ou seja, é
  portável
* É uma linguagem relativamente de "baixo nível", ou talvez seja melhor descrita
  como uma linguagem que não é de "muito alto nível"
* Com um pouco de cuidado é possível escrever programas portáveis

Podemos traçar as origens de C, grosso modo, da seguinte forma:

0. Linguagem BCPL, de Martin Richards
0. Linguagem B, de Ken Thompson, em 1970, para o primeiro UNIX em um DEC PDP-7
0. Linguagem C, de Dennis Ritchie.

BCPL e B eram linguagem sem tipo: o único tipo de dado era a word da máquina. Já
a linguagem C tem tipos de dados fundamentais e uma hierarquia de tipos de dados
derivados (mas não é fortemente tipada).

Algumas outras características:

* Não possui operações para lidar diretamente com objetos compostos, como
  strings, sets, listas ou arrays
* Não define nenhuma facilidade de alocação de armazenamento, a não ser a
  disciplina estática e de stack
* Não há heap ou coletor de lixo automatizados
* Não tem nenhuma facilidade de entrada/saída
* Não é uma linguagem muito grande
* Não fornece de forma automática multiprogramação, operações paralelas,
  sincronização ou corrotinas

Como a linguagem não possui essas características de mais alto nível, ela é
pequena, facilmente compreensível e utilizável. Compiladores são relativamente
fáceis de escrever e os programas tendem a ser eficientes. A idéia geral é **ter
uma linguagem enxuta e confiar na chamada de funções para executar as operações
de mais alto nível**.

Uma característica da linguagem C é acreditar que **os programadores sabem o que
estão fazendo; a linguagem só requer que eles pronunciem suas intenções de modo
explícito**.
