algoritmo "ex9"

// Autor : Lucas Bortoli
// Data : 08/10/2021

var
   numero: inteiro
inicio
   escreva("Dê o número [ex. 41] > ")
   leia(numero)

   // é par?
   se (numero mod 2 = 0) entao
      numero <- numero + 5
   senao
      numero <- numero + 8
   fimse
   
   escreval("")
   escreval("Resultado: ", numero)
fimalgoritmo
