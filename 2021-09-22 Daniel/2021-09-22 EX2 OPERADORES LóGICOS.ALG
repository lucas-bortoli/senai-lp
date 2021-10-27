Algoritmo "2021-09-22 ex2 operadores lógicos"

// Autor(a)    : Lucas Bortoli
// Data atual  : 22/09/2021
Var
   r1, r2, r3, r4, r5, r6, r7: logico
   A, B, C: inteiro
Inicio
   escreva("Digite A: ")
   leia(A)
   escreva("Digite B: ")
   leia(B)
   escreva("Digite C: ")
   leia(C)

   escreval("")

   r1 <- A > 3 e C = 8
   r2 <- A <> 2) ou B <= 5
   r3 <- (A = 3) ou (B >= 2) e (C = 8)
   r4 <- (A = 3) e não (B <= 4) e (C = 8)
   r5 <- (A <> 8) ou (B = 4) e (C > 2)
   r6 <- (B > A) e (C <> A)
   r7 <- (A > B) ou (B < 5)

   escreval("(A > 3) e C = 8 -->", r1)
   escreval("A <> 2 ou B <= 5 -->", r2)
   escreval("(A = 3 ou B >= 2) e C = 8 -->", r3)
   escreval("(A = 3 e não B <= 4) e C = 8 -->", r4)
   escreval("(A <> 8 ou B = 4) e C > 2 -->", r5)
   escreval("B > A e C <> A -->", r6)
   escreval("A > B ou B < 5 -->", r7)
Fimalgoritmo