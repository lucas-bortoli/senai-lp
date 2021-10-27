algoritmo "2021-09-23 Exemplo - calculo raio circulo"

// Disciplina  : UC05 - LP
// Professor   : Daniel Henrique
// Autor(a)    : Lucas Bortoli
// Data atual  : 23/09/2021

var
   area, raio: real
inicio
   escreval("Dê o raio do círculo: ")
   escreva("> r = ")
   leia(raio)

   se raio > 0 entao
      area <- raio^2 * PI
      escreval("A área do círculo de r =", raio, " é ::", area:6:2)
   senao
      escreval("Raio não pode ser nulo ou negativo!")
   fimse
fimalgoritmo