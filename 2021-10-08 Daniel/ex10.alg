algoritmo "ex10"

// Autor : Lucas Bortoli
// Data : 08/10/2021

var
altura, peso_ideal: real
sexo: caractere

inicio

repita
   escreva("Dê o sexo da pessoa      [M/F]   > ")
   leia(sexo)
   
   sexo <- minusc(sexo)
ate ((sexo = "f") ou (sexo = "m") ou (sexo = "h"))

escreva("Dê a altura, em metros [ex. 1,84] > ")
leia(altura)

escreval("")

se (sexo = "m") ou (sexo = "h") entao
   // sexo masculino
   peso_ideal <- (72.7 * altura) - 58
senao
   // sexo feminino
   peso_ideal <- (62.1 * altura) - 44.7
fimse


escreval("SEXO       | ", maiusc(sexo))
escreval("ALTURA     |", altura, " m")
escreval("-----------|--------------")
escreval("PESO IDEAL |", peso_ideal:3, " kg")

fimalgoritmo
