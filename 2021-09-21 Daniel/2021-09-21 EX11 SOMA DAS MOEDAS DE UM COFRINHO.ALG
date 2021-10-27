Algoritmo "ex11 soma das moedas de um cofrinho"

// Autor(a)    : Lucas Bortoli
// Data atual  : 21/09/2021

Var
   moedas_1_c, moedas_5_c, moedas_10_c, moedas_25_c, moedas_50_c, moedas_1_real, soma: real
Inicio
   escreva("Número de moedas de 1 centavo: ")
   leia(moedas_1_c)
   escreva("Número de moedas de 5 centavos: ")
   leia(moedas_5_c)
   escreva("Número de moedas de 10 centavos: ")
   leia(moedas_10_c)
   escreva("Número de moedas de 25 centavos: ")
   leia(moedas_25_c)
   escreva("Número de moedas de 50 centavos: ")
   leia(moedas_50_c)
   escreva("Número de moedas de 1 real: ")
   leia(moedas_1_real)
   
   soma <- moedas_1_c * 0.01
   soma <- soma + moedas_5_c * 0.05
   soma <- soma + moedas_10_c * 0.10
   soma <- soma + moedas_25_c * 0.25
   soma <- soma + moedas_50_c * 0.50
   soma <- soma + moedas_1_real * 1
   
   escreval("A quantia economizada é de R$", soma)
Fimalgoritmo