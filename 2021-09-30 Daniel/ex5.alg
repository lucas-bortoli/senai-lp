algoritmo "ex5"

// Autor : Lucas Bortoli
// Data : 30/09/2021

var
contador: inteiro

ENTER: caractere
inicio
   // valores iniciais para os contadores
   // come�ar a contar com 100
   contador <- 100
   
   escreval("Vou gerar n�meros �mpares de 100 at� 200.")
   escreval("D� ENTER para come�ar.")
   leia(ENTER)
   
   timer 10
   
   enquanto (contador <= 200) faca
      // verificar se � �mpar
      se (contador % 2 = 1) entao
         escreval(contador)
      fimse
      
      contador <- contador + 1
   fimenquanto
fimalgoritmo
