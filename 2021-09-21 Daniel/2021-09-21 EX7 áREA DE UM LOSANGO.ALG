Algoritmo "ex7 �rea de um losango"

// Autor(a)    : Lucas Bortoli
// Data atual  : 21/09/2021

Var
   diag_maior, diag_menor, area: real
Inicio
   escreva("Diagonal maior do losango, em cm: ")
   leia(diag_maior)
   escreva("Diagonal menor do losango, em cm: ")
   leia(diag_menor)

   area <- (diag_maior * diag_menor) / 2

   escreva("�rea do losango =", area, " cm�")
Fimalgoritmo