algoritmo "ex1"

// Autor : Lucas Bortoli
// Data : 05/10/2021

var
   num_min, num_max, num_atual: inteiro
inicio
   escreval("Dê o número mínimo e o número máximo.")
   
   repita
      escreva("mínimo > ")
      leia(num_min)

      escreva("máximo > ")
      leia(num_max)
      
      se (num_min >= num_max) entao
         escreval("O número mínimo (", num_min, " ) não pode ser MAIOR ou IGUAL ao máximo (", num_max, " )")
      fimse
   ate (num_min < num_max)
   
   escreval("-----------")
   
   num_atual <- num_min
   
   repita
       escreval("atual  =", num_atual)
       num_atual <- num_atual + 1
   ate (num_atual > num_max)
   
   escreval("-----------")
   escreval("Número máximo atingido")
fimalgoritmo
