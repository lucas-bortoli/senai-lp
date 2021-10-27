algoritmo "ex5"

// Autor : Lucas Bortoli
// Data : 06/10/2021

var
   soma, numero, i: inteiro
inicio
   escreval("10 números inteiros serão lidos.")
   escreval("No final, será apresentada a soma desses números.")
   escreval(" ----------------")

   // contar de trás para frente, até chegar no número 1
   para i de 1 ate 10 faca
      // indicar o número atual, com três espaços na frente dele
      escreva(i:3, "° número: ")
      leia(numero)
      
      soma <- soma + numero
   fimpara

   // quebrar a linha e dar o resultado
   escreval(" ----------------")
   escreval("")
   escreval("Soma dos números:", soma)
fimalgoritmo
