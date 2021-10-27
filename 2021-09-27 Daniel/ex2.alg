algoritmo "ex2"

// Autor : Lucas Bortoli
// Data : 27/09/2021

var
n1, n2: real
inicio

escreval("Dê o primeiro número:")
escreva("> n1 = ")
leia(n1)
escreval("")

escreval("Dê o segundo número:")
escreva("> n2 = ")
leia(n2)
escreval("")

se n1= n2 entao
   escreval("São iguais")
senao
   se n1 > n2 entao
        escreval("O primeiro é maior que o segundo")
   senao
        escreval("O segundo é maior que o primeiro")
   fimse
fimse

fimalgoritmo
