algoritmo "2021-09-23 Exemplo - determinar o maior n�mero"

// Disciplina  : UC05 - LP
// Professor   : Daniel Henrique
// Autor(a)    : Lucas Bortoli
// Data atual  : 23/09/2021

var
n1, n2: real

inicio

escreval("D� o primeiro e o segundo n�mero: ")
escreva("> n1 = ")
leia(n1)
escreva("> n2 = ")
leia(n2)

escreval("")

se n1 = n2 entao
   // n�meros iguais (n1 = n2)
   escreval(n1, " =", n2)
   escreval("Os n�meros s�o iguais")
senao
   se n1 > n2 entao
      // primeiro maior que segundo (n1 > n2)
      escreval(n1, " >", n2)
      escreval(" O primeiro n�mero (n1) � maior que o segundo n�mero (n2)")
   senao
      // segundo maior que primeiro (n1 < n2)
      escreval(n1, " <", n2)
      escreval(" O segundo n�mero (n2) � maior que o primeiro n�mero (n1)")
   fimse
fimse

fimalgoritmo
