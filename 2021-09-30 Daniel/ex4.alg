algoritmo "ex4"

// Autor : Lucas Bortoli
// Data : 30/09/2021

var
soma, n_atual: real
primeiro_numero: logico

ENTER: caractere
inicio
   // valores iniciais para os contadores
   n_atual <- 1
   primeiro_numero <- verdadeiro
   
   escreval("Digite, um a um, os n�meros a serem somados.")
   escreval("Para parar a soma, d� o n�mero '0'.")
   escreval("")
   escreval("D� ENTER para come�ar.")
   leia(ENTER)
   
   // para parar o loop, n_atual deve ser 0
   enquanto (n_atual <> 0) faca
      se nao primeiro_numero entao
         escreva("+ ")
      senao
         // esse � o primeiro n�mero
         escreva("  ")
         primeiro_numero <- falso
      fimse

      leia(n_atual)

      soma <- soma + n_atual
   fimenquanto

   // mostrar o resultado da soma
   escreval(" ----")
   escreval(" ", soma)
fimalgoritmo
