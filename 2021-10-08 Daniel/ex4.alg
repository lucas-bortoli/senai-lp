algoritmo "ex4"

// Autor : Lucas Bortoli
// Data : 08/10/2021

var
   numero, resultado: inteiro
inicio
   escreva("D� o n�mero: ")
   leia(numero)
   
   escreval("")

   // mostrar o dobro do n�mero se ele for negativo
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
