algoritmo "ex7"

// Autor : Lucas Bortoli
// Data : 27/09/2021

var
n1, n2, n3, n4, media: real
inicio

escreval("D� a primeira nota do aluno:")
escreva("> n1 = ")
leia(n1)
escreval("")

escreval("D� a segunda nota do aluno:")
escreva("> n2 = ")
leia(n2)
escreval("")

escreval("D� a terceira nota do aluno:")
escreva("> n3 = ")
leia(n3)
escreval("")

escreval("D� a quarta nota do aluno:")
escreva("> n4 = ")
leia(n4)
escreval("")

media <- (n1 + n2 + n3 + n4) / 4

se media >= 6 entao
   escreva("APROVADO")
senao
   escreva("REPROVADO")
fimse

escreval(" (", media, " )")

fimalgoritmo
