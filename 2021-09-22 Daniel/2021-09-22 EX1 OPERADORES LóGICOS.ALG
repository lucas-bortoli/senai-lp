Algoritmo "2021-09-22 ex1 operadores lógicos"

// Autor(a)    : Lucas Bortoli
// Data atual  : 22/09/2021
Var
   r1, r2, r3, r4, r5: logico
   A, B, C: inteiro
Inicio
   escreva("Digite A: ")
   leia(A)
   escreva("Digite B: ")
   leia(B)
   escreva("Digite C: ")
   leia(C)
   
   escreval("")
   
   r1 <- (A + C) > B
   r2 <- B >= (A + 2)
   r3 <- C = (B - A)
   r4 <- (B + A) <= C
   r5 <- (C + A) > B
   
   escreval("(A + C)  >      B    -->", r1)
   escreval("   B     >=  (A + 2) -->", r2)
   escreval("   C     =   (B - A) -->", r3)
   escreval("(B + A)  <=     C    -->", r4)
   escreval("(C + A)  >      B    -->", r5)
Fimalgoritmo