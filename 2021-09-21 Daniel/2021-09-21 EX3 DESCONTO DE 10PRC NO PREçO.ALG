Algoritmo "ex3 desconto de 10prc no pre�o"

// Autor(a)    : Lucas Bortoli
// Data atual  : 21/09/2021

Var
   preco_original, novo_preco, desconto: real
Inicio
   escreva("Digite o pre�o original do produto: R$")
   leia(preco_original)

   desconto <- preco_original * 0.1
   novo_preco <- preco_original - desconto

   escreva("Pre�o final = R$", novo_preco, " (desconto de R$", desconto, ")")
Fimalgoritmo