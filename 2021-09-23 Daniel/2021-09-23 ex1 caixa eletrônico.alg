algoritmo "2021-09-23 ex1 caixa eletr�nico"

// Disciplina  : UC05 - LP
// Professor   : Daniel Henrique
// Autor(a)    : Lucas Bortoli
// Data atual  : 23/09/2021

var
saldo_disponivel, saldo_a_ser_sacado: real
inicio

timer 100

// Saldo dispon�vel
saldo_disponivel <- 1000

enquanto saldo_disponivel > 0 faca

   escreval("")
   escreval("Saldo dispon�vel: R$", saldo_disponivel)
   escreval("Digite o saldo a ser sacado:")
   escreva("> R$ ")
   leia(saldo_a_ser_sacado)

   escreval("")

   se saldo_a_ser_sacado <= 0 entao
      escreval("Quantia a ser sacada deve ser maior que zero.")
   senao
      se saldo_a_ser_sacado > saldo_disponivel entao
         // saldo pedido maior que o dispon�vel
         escreval("A quantia a ser sacada deve ser menor ou igual ao saldo na conta.")
      senao
         // saldo v�lido
         saldo_disponivel <- saldo_disponivel - saldo_a_ser_sacado
         escreval("Foram sacados R$", saldo_a_ser_sacado)
      fimse
   fimse

   // aguardar 2 segundos antes de recome�ar
   timer 2000
   timer 100
   limpatela

fimenquanto

escreval("Saldo final na conta: R$", saldo_disponivel)
escreval("Sess�o encerrada.")

fimalgoritmo
