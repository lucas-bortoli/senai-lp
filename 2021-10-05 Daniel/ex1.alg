algoritmo "ex1"

// Autor : Lucas Bortoli
// Data : 05/10/2021

var
   num_min, num_max, num_atual: inteiro
inicio
   escreval("D� o n�mero m�nimo e o n�mero m�ximo.")
   
   repita
      escreva("m�nimo > ")
      leia(num_min)

      escreva("m�ximo > ")
      leia(num_max)
      
      se (num_min >= num_max) entao
         escreval("O n�mero m�nimo (", num_min, " ) n�o pode ser MAIOR ou IGUAL ao m�ximo (", num_max, " )")
      fimse
   ate (num_min < num_max)
   
   escreval("-----------")
   
   num_atual <- num_min
   
   repita
       escreval("atual  =", num_atual)
       num_atual <- num_atual + 1
   ate (num_atual > num_max)
   
   escreval("-----------")
   escreval("N�mero m�ximo atingido")
fimalgoritmo
