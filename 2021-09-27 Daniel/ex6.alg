algoritmo "ex6"

// Autor : Lucas Bortoli
// Data : 27/09/2021

var
n1, n2, resultado: real
inicio

escreval("D� o primeiro n�mero:")
escreva("> n1 = ")
leia(n1)
escreval("")

escreval("D� o segundo n�mero:")
escreva("> n2 = ")
leia(n2)
escreval("")

se (n1 > n2) entao
   resultado <- n1 - n2
senao
   resultado <- n2 - n1
fimse

escreval("Resultado =", resultado)

fimalgoritmo
