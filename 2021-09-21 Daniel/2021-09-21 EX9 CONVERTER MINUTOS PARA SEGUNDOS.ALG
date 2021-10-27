Algoritmo "ex9 converter minutos para segundos"

// Autor(a)    : Lucas Bortoli
// Data atual  : 21/09/2021

Var
   minutos, segundos: real
Inicio
   escreva("Duração do evento, em segundos: ")
   leia(minutos)

   segundos <- minutos * 60

   escreval(minutos, " minuto(s) são", segundos, " segundo(s)")
Fimalgoritmo