algoritmo "2021-09-23 Exemplo - determinar o maior número"

// Disciplina  : UC05 - LP
// Professor   : Daniel Henrique
// Autor(a)    : Lucas Bortoli
// Data atual  : 23/09/2021

var
n1, n2: real

inicio

escreval("Dê o primeiro e o segundo número: ")
escreva("> n1 = ")
leia(n1)
escreva("> n2 = ")
leia(n2)

escreval("")

se n1 = n2 entao
   // números iguais (n1 = n2)
   escreval(n1, " =", n2)
   escreval("Os números são iguais")
senao
   se n1 > n2 entao
      // primeiro maior que segundo (n1 > n2)
      escreval(n1, " >", n2)
      escreval(" O primeiro número (n1) é maior que o segundo número (n2)")
   senao
      // segundo maior que primeiro (n1 < n2)
      escreval(n1, " <", n2)
      escreval(" O segundo número (n2) é maior que o primeiro número (n1)")
   fimse
fimse

fimalgoritmo
