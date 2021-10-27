Algoritmo "ex2 volume de caixa d agua"

// Autor(a)    : Lucas Bortoli
// Data atual  : 21/09/2021

Var
   raio, altura, resultado: real
Inicio
   escreva("Digite o raio da caixa d'água, (em centímetros): ")
   leia(raio)
   escreva("Digite a altura da caixa d'água (em centímetros): ")
   leia(altura)
   
   // fórmula --> V = pi * r² * h
   resultado <- raio^2 * altura * 3.14

   escreva("Volume da caixa d'água =", resultado, " cm²")
Fimalgoritmo