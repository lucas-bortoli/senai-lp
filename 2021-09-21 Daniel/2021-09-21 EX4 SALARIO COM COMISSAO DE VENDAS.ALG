Algoritmo "ex4 salario com comissao de vendas"

// Autor(a)    : Lucas Bortoli
// Data atual  : 21/09/2021

Var
   salario_fixo, valor_vendas, comissao, salario_final: real
Inicio
   escreva("Sal�rio fixo do funcion�rio: R$")
   leia(salario_fixo)
   escreva("Valor total das vendas realizadas pelo funcion�rio: R$")
   leia(valor_vendas)
   
   comissao <- valor_vendas * 0.04
   salario_final <- salario_fixo + comissao
   
   escreva("Sal�rio final = R$", salario_final, " (comiss�o de R$", comissao, ")")
Fimalgoritmo