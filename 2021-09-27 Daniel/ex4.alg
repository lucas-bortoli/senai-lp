algoritmo "ex4"

// Autor : Lucas Bortoli
// Data : 27/09/2021

var
nome: caractere
n1, n2, n3, media: real
inicio

escreval("D� o nome do aluno:")
escreva("> nome = ")
leia(nome)
escreval("")

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

media <- (n1 + n2 + n3) / 3

escreva(nome, " est�: ")

se media <= 5 entao
   escreval("reprovado")
senao
   se media >= 7 entao
      escreval("aprovado")
   senao
      escreval("em recupera��o")
   fimse
fimse

fimalgoritmo
