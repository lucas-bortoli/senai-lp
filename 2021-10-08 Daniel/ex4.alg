algoritmo "ex4"

// Autor : Lucas Bortoli
// Data : 08/10/2021

var
   numero, resultado: inteiro
inicio
   escreva("Dê o número: ")
   leia(numero)
   
   escreval("")

   // mostrar o dobro do número se ele for negativo
   se numero < 0 entao
      resultado <- numero * 2
      escreval("  negativo")
      escreval("  --------")
   // e se for positivo, mostrar seu triplo
   senao
      resultado <- numero * 3
      escreval("  positivo")
      escreval("  --------")
   fimse

   escreval("=", resultado)
fimalgoritmo
