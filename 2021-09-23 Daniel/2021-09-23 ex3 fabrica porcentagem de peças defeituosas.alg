algoritmo "2021-09-23 ex3 fabrica porcentagem de pe�as defeituosas"

// Disciplina  : UC05 - LP
// Professor   : Daniel Henrique
// Autor(a)    : Lucas Bortoli
// Data atual  : 23/09/2021

var
pecas_produzidas, pecas_defeituosas: real
inicio

escreval("D� a quantidade de pe�as produzidas e defeituosas:")
escreva("> Pe�as produzidas = ")
leia(pecas_produzidas)
escreva("> Pe�as defeituosas = ")
leia(pecas_defeituosas)

escreval("")

// verifica se o n� de pe�as defeituosas � maior que 10% do total
se pecas_defeituosas > pecas_produzidas * 0.1 entao
   escreval("A m�quina precisa de manuten��o.")
senao
   escreval("A m�quina est� funcionando corretamente.")
fimse

fimalgoritmo
