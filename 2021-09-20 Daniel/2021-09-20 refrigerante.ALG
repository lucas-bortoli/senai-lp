Algoritmo "refrigerante"

// Disciplina  : [Linguagem e Lógica de Programação]
// Professor   : Daniel Henrique
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Lucas Bortoli
// Data atual  : 20/09/2021

Var
   // n_latas      = número de latas de 350 ml
   // n_garrafas_a = número de garrafas de 600 ml
   // n_garrafas_b = número de garrafas de 2 L
   n_latas, n_garrafas_a, n_garrafas_b: inteiro
   
   // total        = total de refrigerante, em ml
   total: real
Inicio
   escreva("Digite a quantidade de latas de 350ml compradas: ")
   leia(n_latas)
   escreva("Digite a quantidade de garrafas de 600ml compradas: ")
   leia(n_garrafas_a)
   escreva("Digite a quantidade de garrafas de 2L compradas: ")
   leia(n_garrafas_b)
   
   total <- n_latas * 350 + n_garrafas_a * 600 + n_garrafas_b * 2000
   
   escreval("Foram comprados ", total / 1000, "L de refrigerante.")
Fimalgoritmo