Algoritmo "ex4 salario com comissao de vendas"

// Autor(a)    : Lucas Bortoli
// Data atual  : 21/09/2021

Var
   salario_fixo, valor_vendas, comissao, salario_final: real
Inicio
   escreva("Salário fixo do funcionário: R$")
   leia(salario_fixo)
   escreva("Valor total das vendas realizadas pelo funcionário: R$")
   leia(valor_vendas)
   
   comissao <- valor_vendas * 0.04
   salario_final <- salario_fixo + comissao
   
   escreva("Salário final = R$", salario_final, " (comissão de R$", comissao, ")")
Fimalgoritmo