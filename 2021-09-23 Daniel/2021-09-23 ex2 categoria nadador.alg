algoritmo "2021-09-23 ex2 categoria nadador"

// Disciplina  : UC05 - LP
// Professor   : Daniel Henrique
// Autor(a)    : Lucas Bortoli
// Data atual  : 23/09/2021

var
idade: real
inicio

escreval("Dê a idade do nadador:")
escreva("> idade = ")
leia(idade)

se idade < 2 entao
   escreval("Idade deve ser maior ou igual a 2 anos.")
senao
   se idade <= 10 entao
      escreval("Categoria do nadador: INFANTIL")
   senao
      se idade <= 17 entao
         escreval("Categoria do nadador: JUVENIL")
      senao
         escreval("Categoria do nadador: SÊNIOR")
      fimse
   fimse
fimse

fimalgoritmo
