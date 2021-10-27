algoritmo "ex4"

// Autor : Lucas Bortoli
// Data : 06/10/2021

var
   numero, i, multiplicador: inteiro
inicio
   escreval("Escreva o número cujo fatorial será calculado:")
   
   // não existe fatorial de número negativo, então ler até que um número POSI-
   // TIVO seja dado
   repita
      escreva("número: ")
      leia(numero)
      
      se (numero < 0) entao
         escreval("         ^ Um número positivo deve ser dado")
      fimse
   ate (numero >= 0)
   
   escreval("=", numero, "!      [fatorial]")
   escreva("=")
   
   // começar com 1, senão a conta dá zero no final (independentemente do número
   // dado)
   multiplicador <- 1
   
   // contar de trás para frente, até chegar no número 1
   para i de numero ate 1 passo -1 faca
      escreva(i)
      
      // só escrever "x" se houver um próximo número
      // "5 x 4 x 3 x 2 x 1   "
      //                   ^^^  sem "x"
      se i <> 1 entao
         escreva(" x")
      fimse
      
      multiplicador <- multiplicador * i
   fimpara

   // quebrar a linha e dar o resultado
   escreval("")
   escreval("=", multiplicador)
fimalgoritmo
