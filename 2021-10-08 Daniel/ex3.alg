algoritmo "ex3"

// Autor : Lucas Bortoli
// Data : 08/10/2021

var
   a, b, c: inteiro
inicio
   escreva("D� o primeiro n�mero: ")
   leia(a)

   escreva("D� o segundo n�mero: ")
   leia(b)

   escreval("")

   se a = b entao
      c <- a + b
      escreval("  iguais")
      escreval("  ----------")
      escreval(" ", a, " +", b)
   senao
      c <- a * b
      escreval("  diferentes")
      escreval("  ----------")
      escreval(" ", a, " x", b)
   fimse

   escreval("=", c)
fimalgoritmo
