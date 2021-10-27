algoritmo "ex2"

// Autor : Lucas Bortoli
// Data : 05/10/2021

var
   num_dado, multiplicador: inteiro
inicio
   escreval("Dê o número, e eu mostrarei sua tabuada.")
   escreva("número > ")
   leia(num_dado)
   escreval("-------------")

   // tabuada do zero e um é desnecessária, então começar a contagem a partir
   // do dois
   multiplicador <- 2

   repita
       escreval(num_dado, " x", multiplicador, " =", num_dado * multiplicador)
       multiplicador <- multiplicador + 1
   ate (multiplicador > 10)

   escreval("-------------")
fimalgoritmo
