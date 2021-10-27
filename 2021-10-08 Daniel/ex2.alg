algoritmo "ex2"

// Autor : Lucas Bortoli
// Data : 08/10/2021

var
   a, b, c, soma: inteiro
inicio
   escreva("Dê o primeiro número: ")
   leia(a)

   escreva("Dê o segundo número: ")
   leia(b)

   escreva("Dê o terceiro número: ")
   leia(c)

   soma <- a + b

   se soma > c entao
      escreva("A soma de", a, " com", b, " é maior que", c)
   senao
      escreva("A soma de", a, " com", b, " NÃO é maior que", c)
   fimse
fimalgoritmo
