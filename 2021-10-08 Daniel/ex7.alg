algoritmo "ex7"

// Autor : Lucas Bortoli
// Data : 08/10/2021

var
   est_civil, sexo, nome: caractere
   tempo_casada: inteiro
inicio
escreva("D� seu nome              [ex. Fulana] > ")
leia(nome)

escreva("D� seu sexo                   [ex. F] > ")
leia(sexo)

escreva("D� seu estado civil      [ex. CASADA] > ")
leia(est_civil)

se minusc(est_civil) = "casada" entao
   escreva("D� o tempo de casada, em anos [ex. 5] > ")
   leia(tempo_casada)
fimse

escreval("               |")
escreval("---------------|--------------")
escreval("NOME           | ", maiusc(nome))
escreval("SEXO           | ", maiusc(sexo))
escreval("EST. CIVIL     | ", maiusc(est_civil))

se minusc(est_civil) = "casada" entao
   escreval("DUR. CASAMENTO |", tempo_casada)
fimse

fimalgoritmo
