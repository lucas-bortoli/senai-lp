algoritmo "semnome"
// Fun��o :
// Autor :
// Data : 30/09/2021
// Se��o de Declara��es
var
nota: real
inicio
// Se��o de Comandos
escreva("Digite uma nota: ")
leia(nota)
enquanto (nota < 0) ou (nota > 10) faca
   escreval("Nota deve ser entre 0 e 10")
   leia(nota)
fimenquanto
se (nota >= 7) entao
   escreval("Aluno aprovado")
senao
   escreval("Aluno reprovado")
fimse
fimalgoritmo
