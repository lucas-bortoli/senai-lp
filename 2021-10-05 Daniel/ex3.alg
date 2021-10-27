algoritmo "ex3"

// Autor : Lucas Bortoli
// Data : 05/10/2021

var
   ultimo_num_lido, soma, qnt_numeros, media: real
   erro: logico
inicio
   escreval(" Dê os números a serem calculados na média.")
   escreval(" Digite 0 (zero) para calcular.")

   escreval(" -------------")

   qnt_numeros <- 0
   soma <- 0

   repita
       erro <- falso

       escreva(qnt_numeros + 1, "° número > ")
       leia(ultimo_num_lido)

       // verificar se o resto da divisão por 2 é DIFERENTE de zero (é ímpar)
       se (((ultimo_num_lido mod 2) <> 0) e (ultimo_num_lido <> 0)) entao
           escreval(" O número não pode ser ímpar!")
           erro <- verdadeiro
       senao
          se (ultimo_num_lido <> 0) entao
             qnt_numeros <- qnt_numeros + 1
             soma <- soma + ultimo_num_lido
          senao
             // "0" foi dado, checar se pelo menos um número foi dado (para evitar
             // uma divisão por 0)

             se (qnt_numeros = 0) e (erro = falso) entao
                escreval(" É necessário pelo menos um número.")

                // variável dada para que o loop não finalize (ultimo_num_lido é 0)
                // ela é resetada na próxima iteração
                erro <- verdadeiro
             fimse
          fimse
       fimse
   ate (ultimo_num_lido = 0) e (erro = falso)

   media <- soma / qnt_numeros

   escreval(" -------------")
   escreval(qnt_numeros, " números dados")
   escreval(" Média:", media)
fimalgoritmo