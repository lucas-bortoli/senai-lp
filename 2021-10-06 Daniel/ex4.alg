algoritmo "ex4"

// Autor : Lucas Bortoli
// Data : 06/10/2021

var
   numero, i, multiplicador: inteiro
inicio
   escreval("Escreva o n�mero cujo fatorial ser� calculado:")
   
   // n�o existe fatorial de n�mero negativo, ent�o ler at� que um n�mero POSI-
   // TIVO seja dado
   repita
      escreva("n�mero: ")
      leia(numero)
      
      se (numero < 0) entao
         escreval("         ^ Um n�mero positivo deve ser dado")
      fimse
   ate (numero >= 0)
   
   escreval("=", numero, "!      [fatorial]")
   escreva("=")
   
   // come�ar com 1, sen�o a conta d� zero no final (independentemente do n�mero
   // dado)
   multiplicador <- 1
   
   // contar de tr�s para frente, at� chegar no n�mero 1
   para i de numero ate 1 passo -1 faca
      escreva(i)
      
      // s� escrever "x" se houver um pr�ximo n�mero
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
