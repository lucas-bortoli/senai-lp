algoritmo "ex3"

// Autor : Lucas Bortoli
// Data : 04/10/2021

var
   n1, n2: real
inicio

escreval("Somar dois n�meros")
escreval("Os n�meros a seguir devem estar no intervalo [1...100]")

repita
   escreva("D� o primeiro n�mero: ")
   leia(n1)

   escreva("D� o segundo n�mero: ")
   leia(n2)
   
   escreval("A soma de", n1, " com", n2, " �:", n1 + n2)
ate ((n1 >= 1) e (n1 <= 100) e (n2 >= 1) e (n2 <= 100))

fimalgoritmo
