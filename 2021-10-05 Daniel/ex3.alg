algoritmo "ex3"

// Autor : Lucas Bortoli
// Data : 05/10/2021

var
   ultimo_num_lido, soma, qnt_numeros, media: real
   erro: logico
inicio
   escreval(" D� os n�meros a serem calculados na m�dia.")
   escreval(" Digite 0 (zero) para calcular.")

   escreval(" -------------")

   qnt_numeros <- 0
   soma <- 0

   repita
       erro <- falso

       escreva(qnt_numeros + 1, "� n�mero > ")
       leia(ultimo_num_lido)

       // verificar se o resto da divis�o por 2 � DIFERENTE de zero (� �mpar)
       se (((ultimo_num_lido mod 2) <> 0) e (ultimo_num_lido <> 0)) entao
           escreval(" O n�mero n�o pode ser �mpar!")
           erro <- verdadeiro
       senao
          se (ultimo_num_lido <> 0) entao
             qnt_numeros <- qnt_numeros + 1
             soma <- soma + ultimo_num_lido
          senao
             // "0" foi dado, checar se pelo menos um n�mero foi dado (para evitar
             // uma divis�o por 0)

             se (qnt_numeros = 0) e (erro = falso) entao
                escreval(" � necess�rio pelo menos um n�mero.")

                // vari�vel dada para que o loop n�o finalize (ultimo_num_lido � 0)
                // ela � resetada na pr�xima itera��o
                erro <- verdadeiro
             fimse
          fimse
       fimse
   ate (ultimo_num_lido = 0) e (erro = falso)

   media <- soma / qnt_numeros

   escreval(" -------------")
   escreval(qnt_numeros, " n�meros dados")
   escreval(" M�dia:", media)
fimalgoritmo