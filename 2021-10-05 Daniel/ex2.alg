algoritmo "ex2"

// Autor : Lucas Bortoli
// Data : 05/10/2021

var
   num_dado, multiplicador: inteiro
inicio
   escreval("D� o n�mero, e eu mostrarei sua tabuada.")
   escreva("n�mero > ")
   leia(num_dado)
   escreval("-------------")

   // tabuada do zero e um � desnecess�ria, ent�o come�ar a contagem a partir
   // do dois
   multiplicador <- 2

   repita
       escreval(num_dado, " x", multiplicador, " =", num_dado * multiplicador)
       multiplicador <- multiplicador + 1
   ate (multiplicador > 10)

   escreval("-------------")
fimalgoritmo
