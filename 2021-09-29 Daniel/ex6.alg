algoritmo "ex6"

// Autor : Lucas Bortoli
// Data : 29/09/2021

var
   n1, n2, resultado: real
   operacao: caractere
   i: inteiro
inicio
   timer 150
   
   escreval("D� o primeiro n�mero: ")
   escreva("n1       > ")
   leia(n1)
   
   escreval("D� a opera��o (+  -  *  /)")
   escreva("opera��o > ")
   leia(operacao)
   
   escreval("D� o segundo n�mero: ")
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
            escreval("Voc� est� tentando dividir por zero.")
            fimalgoritmo
         senao
            resultado <- n1 / n2
         fimse
      outrocaso
         limpatela
         escreval("Opera��o inv�lida")
         fimalgoritmo
   fimescolha

   escreval("")
   escreval(n1, " ", operacao, n2, " =", resultado)
fimalgoritmo
