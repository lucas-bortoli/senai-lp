algoritmo "2021-09-23 Exemplo - Operador logico - media"

// Disciplina  : UC05 - LP
// Professor   : Daniel Henrique
// Autor(a)    : Lucas Bortoli
// Data atual  : 23/09/2021

var
   N1, N2, media: real

inicio
   escreval("Digite a primeira nota: ")
   leia(N1)
   escreval("Digite a segunda nota: ")
   leia(N2)

   media <- (N1 + N2) / 2

   se media >= 7 entao
      escreval("Aprovado, média =", media)
   senao
      escreval("Reprovado, média =", media)
   fimse
fimalgoritmo