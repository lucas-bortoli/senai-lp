algoritmo "ex3"

// Autor : Lucas Bortoli
// Data : 29/09/2021

var
   prod: inteiro
inicio
   escreval("Dê o código do produto:")
   escreva("> ")
   leia(prod)

   escolha prod
      caso 1
         escreval("Alimento não-perecível")
      caso 2
         escreval("Alimento perecível")
      caso 3
         escreval("Vestuário")
      caso 4
         escreval("Higiene pessoal")
      caso 5
         escreval("Limpeza e utensílios domésticos")
      outrocaso
         escreval("Produto inválido")
   fimescolha
fimalgoritmo
