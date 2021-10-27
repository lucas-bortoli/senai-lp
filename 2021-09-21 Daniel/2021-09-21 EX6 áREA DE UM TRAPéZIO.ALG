Algoritmo "ex6 área de um trapézio"

// Autor(a)    : Lucas Bortoli
// Data atual  : 21/09/2021

Var
   base_maior, base_menor, area: real
Inicio
   escreva("Base maior do trapézio, em cm: ")
   leia(base_maior)
   escreva("Base menor do trapézio, em cm: ")
   leia(base_menor)
   
   area <- (base_maior + base_menor) / 2

   escreva("Área do trapézio =", area, " cm²")
Fimalgoritmo