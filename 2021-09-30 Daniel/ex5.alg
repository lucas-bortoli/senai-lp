algoritmo "ex5"

// Autor : Lucas Bortoli
// Data : 30/09/2021

var
contador: inteiro

ENTER: caractere
inicio
   // valores iniciais para os contadores
   // começar a contar com 100
   contador <- 100
   
   escreval("Vou gerar números ímpares de 100 até 200.")
   escreval("Dê ENTER para começar.")
   leia(ENTER)
   
   timer 10
   
   enquanto (contador <= 200) faca
      // verificar se é ímpar
      se (contador % 2 = 1) entao
         escreval(contador)
      fimse
      
      contador <- contador + 1
   fimenquanto
fimalgoritmo
