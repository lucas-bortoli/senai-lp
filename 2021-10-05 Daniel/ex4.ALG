algoritmo "ex4"

// Autor : Lucas Bortoli
// Data : 05/10/2021

var
num_atual, menor, maior, qnt_numeros: real
erro: logico

inicio
   escreval(" D� os n�meros a serem considerados.")
   escreval(" Eu mostrarei o menor e o maior deles.")
   escreval(" Digite 0 (zero) para terminar.")

   escreval(" -------------")

   repita
      erro <- falso

      escreva(qnt_numeros + 1, "� n�mero: ")
      leia(num_atual)

      // checar se esse � o primeiro n�mero dado
      se (num_atual = 0) entao
         se (qnt_numeros = 0) entao
            // Nesse caso, o primeiro n�mero digitado � "0", e isso � inv�lido
            escreval("            ^ � necess�rio dar um n�mero!")
            
            // n�o deixar o loop terminar ainda (num_atual � 0, e isso termina-
            // ria o loop cedo demais)
            erro <- verdadeiro
         fimse
      senao
         // verificar se esse � o primeiro n�mero
         // se for, configurar as vari�veis "menor" e "maior" para o n�mero dado
         // (sen�o, no final do programa, o menor n�mero ser� "0")
         se (qnt_numeros = 0) entao
            menor <- num_atual
            maior <- num_atual
            qnt_numeros <- qnt_numeros + 1
         fimse
         
         se (num_atual < menor) entao
            menor <- num_atual
            qnt_numeros <- qnt_numeros + 1
         fimse

         se (num_atual > maior) entao
            maior <- num_atual
            qnt_numeros <- qnt_numeros + 1
         fimse
      fimse
   ate (num_atual = 0) e (erro = falso)
   
   escreval("            ^ zero dado, finalizando leitura")

   escreval(" ")
   escreval(qnt_numeros, " n�meros dados")
   escreval(" Menor n�mero:", menor)
   escreval(" Maior n�mero:", maior)
fimalgoritmo
