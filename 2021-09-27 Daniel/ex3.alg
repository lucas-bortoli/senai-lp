algoritmo "ex3"

// Autor : Lucas Bortoli
// Data : 27/09/2021

var
n: real
inicio

escreval("Dê o número:")
escreva("> n = ")
leia(n)
escreval("")

se (n < 100) ou (n > 200) entao
   escreval("Não está no intervalo de 100 a 200")
senao
   escreval("Está no intervalo de 100 a 200")
fimse

fimalgoritmo
