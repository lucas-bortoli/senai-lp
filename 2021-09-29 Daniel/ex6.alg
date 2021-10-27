algoritmo "ex6"

// Autor : Lucas Bortoli
// Data : 29/09/2021

var
   n1, n2, resultado: real
   operacao: caractere
   i: inteiro
inicio
   timer 150
   
   escreval("Dê o primeiro número: ")
   escreva("n1       > ")
   leia(n1)
   
   escreval("Dê a operação (+  -  *  /)")
   escreva("operação > ")
   leia(operacao)
   
   escreval("Dê o segundo número: ")
   escreva("n2       > ")
   leia(n2)
   

   escolha operacao
      caso "+"
         resultado <- n1 + n2
      caso "-"
         resultado <- n1 - n2
      caso "*", "x", "X"
         resultado <- n1 * n2
      caso "/"
         se n2 = 0 entao
            limpatela
            escreval("Você está tentando dividir por zero.")
            fimalgoritmo
         senao
            resultado <- n1 / n2
         fimse
      outrocaso
         limpatela
         escreval("Operação inválida")
         fimalgoritmo
   fimescolha

   escreval("")
   escreval(n1, " ", operacao, n2, " =", resultado)
fimalgoritmo
