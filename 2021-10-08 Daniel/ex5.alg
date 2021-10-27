algoritmo "ex5"

// Autor : Lucas Bortoli
// Data : 08/10/2021

var
a, b, c: inteiro
inicio
escreva("Dê o primeiro número: ")
leia(a)

escreva("Dê o segundo número: ")
leia(b)

escreva("Dê o terceiro número: ")
leia(c)

escreval("")

// a < b < c
se (a < b) e (b < c) entao
   escreval(c, b, a)
fimse

// b < a < c
se (b < a) e (a < c) entao
   escreval(c, a, b)
fimse

// b < c < a
se (b < c) e (c < a) entao
   escreval(a, c, b)
fimse

// a < c < b
se (a < c) e (c < b) entao
   escreval(b, c, a)
fimse

// c < a < b
se (c < a) e (a < b) entao
   escreval(b, a, c)
fimse

// c < b < a
se (c < b) e (b < a) entao
   escreval(a, b, c)
fimse

se (a = b) e (b < c) entao
   escreval(c, b, a)
fimse

se (a = b) e (c < b) entao
   escreval(b, a, c)
fimse

se (b = c) e (c < a) entao
   escreval(a, b, c)
fimse

se (b = c) e (a < c) entao
   escreval(b, c, a)
fimse

se (a = c) e (a < b) entao
   escreval(b, a, c)
fimse

se (a = c) e (b < a) entao
   escreval(a, c, b)
fimse

se (a = c) e (c = b) entao
   escreval(b, a, c)
fimse

fimalgoritmo
