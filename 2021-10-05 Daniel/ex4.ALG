algoritmo "ex4"

// Autor : Lucas Bortoli
// Data : 05/10/2021

var
num_atual, menor, maior, qnt_numeros: real
erro: logico

inicio
   escreval(" Dê os números a serem considerados.")
   escreval(" Eu mostrarei o menor e o maior deles.")
   escreval(" Digite 0 (zero) para terminar.")

   escreval(" -------------")

   repita
      erro <- falso

      escreva(qnt_numeros + 1, "° número: ")
      leia(num_atual)

      // checar se esse é o primeiro número dado
      se (num_atual = 0) entao
         se (qnt_numeros = 0) entao
            // Nesse caso, o primeiro número digitado é "0", e isso é inválido
            escreval("            ^ É necessário dar um número!")
            
            // não deixar o loop terminar ainda (num_atual é 0, e isso termina-
            // ria o loop cedo demais)
            erro <- verdadeiro
         fimse
      senao
         // verificar se esse é o primeiro número
         // se for, configurar as variáveis "menor" e "maior" para o número dado
         // (senão, no final do programa, o menor número será "0")
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
   escreval(qnt_numeros, " números dados")
   escreval(" Menor número:", menor)
   escreval(" Maior número:", maior)
fimalgoritmo
