Algoritmo "ex7 área de um losango"

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

   escreva("Área do losango =", area, " cm²")
Fimalgoritmo