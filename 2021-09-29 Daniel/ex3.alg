algoritmo "ex3"

// Autor : Lucas Bortoli
// Data : 29/09/2021

var
   prod: inteiro
inicio
   escreval("D� o c�digo do produto:")
   escreva("> ")
   leia(prod)

   escolha prod
      caso 1
         escreval("Alimento n�o-perec�vel")
      caso 2
         escreval("Alimento perec�vel")
      caso 3
         escreval("Vestu�rio")
      caso 4
         escreval("Higiene pessoal")
      caso 5
         escreval("Limpeza e utens�lios dom�sticos")
      outrocaso
         escreval("Produto inv�lido")
   fimescolha
fimalgoritmo
