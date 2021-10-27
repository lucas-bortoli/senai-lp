algoritmo "2021-09-23 ex3 fabrica porcentagem de peças defeituosas"

// Disciplina  : UC05 - LP
// Professor   : Daniel Henrique
// Autor(a)    : Lucas Bortoli
// Data atual  : 23/09/2021

var
pecas_produzidas, pecas_defeituosas: real
inicio

escreval("Dê a quantidade de peças produzidas e defeituosas:")
escreva("> Peças produzidas = ")
leia(pecas_produzidas)
escreva("> Peças defeituosas = ")
leia(pecas_defeituosas)

escreval("")

// verifica se o n° de peças defeituosas é maior que 10% do total
se pecas_defeituosas > pecas_produzidas * 0.1 entao
   escreval("A máquina precisa de manutenção.")
senao
   escreval("A máquina está funcionando corretamente.")
fimse

fimalgoritmo
