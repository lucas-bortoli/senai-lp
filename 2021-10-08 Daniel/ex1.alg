algoritmo "ex1"

// Autor : Lucas Bortoli
// Data : 27/09/2021

var
   nome: caractere
   nota1, nota2, nota3, media: real
inicio
   escreva("D� o nome do aluno: ")
   leia(nome)

   escreva("D� a primeira nota do aluno: ")
   leia(nota1)
   
   escreva("D� a segunda nota do aluno: ")
   leia(nota2)

   escreva("D� a terceira nota do aluno: ")
   leia(nota3)

   media <- (nota1 + nota2 + nota3) / 3

   escreva(nome, " foi: ")

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
