algoritmo "ex2"

// Autor : Lucas Bortoli
// Data : 08/10/2021

var
   a, b, c, soma: inteiro
inicio
   escreva("D� o primeiro n�mero: ")
   leia(a)

   escreva("D� o segundo n�mero: ")
   leia(b)

   escreva("D� o terceiro n�mero: ")
   leia(c)

   soma <- a + b

   se soma > c entao
      escreva("A soma de", a, " com", b, " � maior que", c)
   senao
      escreva("A soma de", a, " com", b, " N�O � maior que", c)
   fimse
fimalgoritmo
