algoritmo "ex3"

// Autor : Lucas Bortoli
// Data : 30/09/2021

var
c_aluno: inteiro
nota1, nota2, media: real
inicio
   // valores iniciais para os contadores
   c_aluno <- 1
   
   enquanto (c_aluno <= 10) faca
      nota1 <- -1
      nota2 <- -1
      
      escreval("aluno ", c_aluno, "  ")
      escreval("-----------------------")
      
      // validar as variáveis
      enquanto (nota1 < 0) ou (nota1 > 10) faca
         escreva("prova A  | ")
         leia(nota1)
      fimenquanto
      
      enquanto (nota2 < 0) ou (nota2 > 10) faca
         escreva("prova B  | ")
         leia(nota2)
      fimenquanto
      
      // calcular média
      media <- (nota1 + nota2) / 2
      
      escreval("=========|=============")
      escreval("média    |", media)
      escreval("")
      escreval("")
      
      // ir para o próximo aluno
      c_aluno <- c_aluno + 1
   fimenquanto
fimalgoritmo
