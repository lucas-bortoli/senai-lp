algoritmo "ex2"

// Autor : Lucas Bortoli
// Data : 27/09/2021

var
n1, n2: real
inicio

escreval("D� o primeiro n�mero:")
escreva("> n1 = ")
leia(n1)
escreval("")

escreval("D� o segundo n�mero:")
escreva("> n2 = ")
leia(n2)
escreval("")

se n1= n2 entao
   escreval("S�o iguais")
senao
   se n1 > n2 entao
        escreval("O primeiro � maior que o segundo")
   senao
        escreval("O segundo � maior que o primeiro")
   fimse
fimse

fimalgoritmo
