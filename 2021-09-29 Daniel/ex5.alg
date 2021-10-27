algoritmo "ex5"

// Autor : Lucas Bortoli
// Data : 29/09/2021

var
   num: inteiro
inicio
   escreval("Dê o número da palestra:")
   escreva("> ")
   leia(num)

   escolha num
      caso 1
         escreval("Linux                       AUDIT. 1    8h ATÉ 9h")
      caso 2
         escreval("Recuperação de Desastre     AUDIT. 2    9h ATÉ 10h")
      caso 3
         escreval("Windows Server              AUDIT. 3    13h ATÉ 14h")
      caso 4
         escreval("Lógica e Programação        AUDIT. 4    15h ATÉ 17h")
      outrocaso
         escreval("Código de palestra inválido")
   fimescolha
fimalgoritmo
