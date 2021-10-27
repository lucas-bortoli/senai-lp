algoritmo "ex2"

// Autor : Lucas Bortoli
// Data : 04/10/2021

var
   sexo: caractere
inicio

repita
   escreva("Dê o sexo da pessoa (M/F): ")
   leia(sexo)
ate ((sexo = "M") ou (sexo = "m") ou (sexo = "F") ou (sexo = "f"))

se (sexo = "m") ou (sexo = "M") entao
   escreval("Sexo masculino selecionado.")
senao
   escreval("Sexo feminino selecionado.")
fimse

fimalgoritmo
