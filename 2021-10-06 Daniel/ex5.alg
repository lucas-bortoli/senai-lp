algoritmo "ex5"

// Autor : Lucas Bortoli
// Data : 06/10/2021

var
   soma, numero, i: inteiro
inicio
   escreval("10 n�meros inteiros ser�o lidos.")
   escreval("No final, ser� apresentada a soma desses n�meros.")
   escreval(" ----------------")

   // contar de tr�s para frente, at� chegar no n�mero 1
   para i de 1 ate 10 faca
      // indicar o n�mero atual, com tr�s espa�os na frente dele
      escreva(i:3, "� n�mero: ")
      leia(numero)
      
      soma <- soma + numero
   fimpara

   // quebrar a linha e dar o resultado
   escreval(" ----------------")
   escreval("")
   escreval("Soma dos n�meros:", soma)
fimalgoritmo
