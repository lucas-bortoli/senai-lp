algoritmo "2021-09-23 Exemplo - calculo raio circulo"

// Disciplina  : UC05 - LP
// Professor   : Daniel Henrique
// Autor(a)    : Lucas Bortoli
// Data atual  : 23/09/2021

var
   area, raio: real
inicio
   escreval("D� o raio do c�rculo: ")
   escreva("> r = ")
   leia(raio)

   se raio > 0 entao
      area <- raio^2 * PI
      escreval("A �rea do c�rculo de r =", raio, " � ::", area:6:2)
   senao
      escreval("Raio n�o pode ser nulo ou negativo!")
   fimse
fimalgoritmo