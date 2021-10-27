algoritmo "ex8"

// Autor : Lucas Bortoli
// Data : 27/09/2021

var
sexo: caractere
n1, n2, n3, n4, media: real
inicio

escreval("Dê o sexo do aluno (M/F):")
escreva("> sexo = ")
leia(sexo)
escreval("")

escreval("Dê a primeira nota do aluno:")
escreva("> n1 = ")
leia(n1)
escreval("")

escreval("Dê a segunda nota do aluno:")
escreva("> n2 = ")
leia(n2)
escreval("")

escreval("Dê a terceira nota do aluno:")
escreva("> n3 = ")
leia(n3)
escreval("")

escreval("Dê a quarta nota do aluno:")
escreva("> n4 = ")
leia(n4)
escreval("")

media <- (n1 + n2 + n3 + n4) / 4

se (sexo = "M") ou (sexo = "m") entao
   escreva("Caro aluno, seu resultado é: ")
senao
   escreva("Cara aluna, seu resultado é: ")
fimse

se media >= 6 entao
   escreva("APROVADO")
senao
   escreva("REPROVADO")
fimse

escreval(" (", media, " )")

fimalgoritmo
