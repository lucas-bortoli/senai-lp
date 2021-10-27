algoritmo "ex6"

// Autor : Lucas Bortoli
// Data : 08/10/2021

var
peso, altura, imc: real
categoria: caractere
inicio
escreva("Dê o peso, em kg       [ex. 65]   > ")
leia(peso)

escreva("Dê a altura, em metros [ex. 1,84] > ")
leia(altura)

escreval("")

imc <- peso / (altura * altura)

se imc <= 18.5 entao
   categoria <- "Abaixo do peso"
senao
   se imc < 25 entao
      categoria <- "Peso normal"
   senao
      se imc <= 30 entao
         categoria <- "Acima do peso"
      senao
         categoria <- "Obeso"
      fimse
   fimse
fimse


escreval("         |")
escreval("---------|--------------")
escreval("PESO     |", peso, " kg")
escreval("ALTURA   |", altura, " m")
escreval("IMC      |", imc:3)
escreval("         |              ")
escreval("CONDIÇÃO | ", categoria)

fimalgoritmo
