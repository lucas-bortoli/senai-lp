Algoritmo "ex1 multiplicação de 3 números"

// Autor(a)    : Lucas Bortoli
// Data atual  : 21/09/2021

Var
   // Seção de Declarações das variáveis
   n1, n2, n3, resultado: real
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("Digite o primeiro número: ")
   leia(n1)
   escreva("Digite o segundo número: ")
   leia(n2)
   escreva("Digite o terceiro número: ")
   leia(n3)
   
   resultado <- n1 * n2 * n3
   
   escreva(n1, " x", n2, " x", n3, " =", resultado)
Fimalgoritmo