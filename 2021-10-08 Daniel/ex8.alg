algoritmo "ex8"

// Autor : Lucas Bortoli
// Data : 08/10/2021

var
   cond_pagto: inteiro
   preco_normal, preco_final: real
inicio
   escreva("D� o pre�o da etiqueta [ex. R$ 19.99] > R$ ")
   leia(preco_normal)

   escreval("")
   escreval("1 - � vista em dinheiro ou cheque, 10% desconto")
   escreval("2 - � vista no cart�o de cr�dito, 15% desconto")
   escreval("3 - Em duas vezes, sem juros")
   escreval("4 - Em duas vezes, 10% de juros")
   escreval("")

   repita
      escreva("D� a condi��o de pagamento [ex. 2] > ")
      leia(cond_pagto)
   ate (cond_pagto >= 1) e (cond_pagto <= 4)

   se cond_pagto = 1 entao
      // 10% desconto
      preco_final <- preco_normal * 0.9
   senao
      se cond_pagto = 2 entao
         // 15% desconto
         preco_final <- preco_normal * 0.85
      senao
         se cond_pagto = 3 entao
            // sem juros
            preco_final <- preco_normal
         senao
            // 10% de juros
            preco_final <- preco_normal * 1.1
         fimse
      fimse
   fimse
   
   escreval("")
   escreval("Pre�o final: R$ ", preco_final)
fimalgoritmo
