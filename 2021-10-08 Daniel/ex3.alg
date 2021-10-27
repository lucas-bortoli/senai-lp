algoritmo "ex3"

// Autor : Lucas Bortoli
// Data : 08/10/2021

var
   a, b, c: inteiro
inicio
   escreva("Dê o primeiro número: ")
   leia(a)

   escreva("Dê o segundo número: ")
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
