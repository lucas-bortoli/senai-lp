algoritmo "ex5"

// Autor : Lucas Bortoli
// Data : 27/09/2021

var
sexo: caractere
inicio

escreval("D� o sexo da pessoa (M/F):")
escreva("> sexo = ")
leia(sexo)
escreval("")

se (sexo = "M") ou (sexo = "m") ou (sexo = "F") ou (sexo = "f") entao
   escreval("Sexo v�lido")
senao
   escreval("Sexo incorreto")
fimse

fimalgoritmo
