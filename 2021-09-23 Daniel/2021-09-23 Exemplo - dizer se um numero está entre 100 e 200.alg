algoritmo "2021-09-23 Exemplo - dizer se um numero está entre 100 e 200"

// Disciplina  : UC05 - LP
// Professor   : Daniel Henrique
// Autor(a)    : Lucas Bortoli
// Data atual  : 23/09/2021

var
n: real

inicio

escreval("Digite um número: ")
escreva("> n = ")
leia(n)

escreval("")

se n >= 100 entao
   se n <= 200 entao
      escreval("O número está entre 100 e 200 (100 <= n <= 200)")
   senao
      escreval("O número não está entre 100 e 200 (100 < 200 < n)")
   fimse
senao
   escreval("O número não está entre 100 e 200 (n < 100 < 200)")
fimse

fimalgoritmo
