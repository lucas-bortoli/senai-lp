Algoritmo "ex2 volume de caixa d agua"

// Autor(a)    : Lucas Bortoli
// Data atual  : 21/09/2021

Var
   raio, altura, resultado: real
Inicio
   escreva("Digite o raio da caixa d'�gua, (em cent�metros): ")
   leia(raio)
   escreva("Digite a altura da caixa d'�gua (em cent�metros): ")
   leia(altura)
   
   // f�rmula --> V = pi * r� * h
   resultado <- raio^2 * altura * 3.14

   escreva("Volume da caixa d'�gua =", resultado, " cm�")
Fimalgoritmo