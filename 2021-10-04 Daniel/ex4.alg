algoritmo "ex4"

// Autor : Lucas Bortoli
// Data : 04/10/2021

var
   n1, n2, soma: real
inicio
repita
   escreva("Dê o primeiro número: ")
   leia(n1)
   escreva("Dê o segundo número: ")
   leia(n2)
   
   soma <- n1 + n2
   
   escreval("A soma de", n1, " com", n2, " é:", soma)
ate (soma > 15)
fimalgoritmo
