algoritmo "ex2"

// Autor : Lucas Bortoli
// Data : 29/09/2021

var
anos: inteiro
inicio
   escreval("Dê a idade do atleta")
   escreva("anos >  ")
   leia(anos)

   se (anos >= 5) e (anos <= 7) entao
      escreval("Infantil A")
   senao
      se (anos >= 8) e (anos <= 10) entao
         escreval("Infantil B")
      senao
         se (anos >= 11) e (anos <= 13) entao
            escreval("Juvenil A")
         senao
            se (anos >= 14) e (anos <= 17) entao
               escreval("Juvenil B")
            senao
               se (anos >= 18) e (anos <= 25) entao
                  escreval("Sênior")
               senao
                  escreval("Idade inválida")
               fimse
            fimse
         fimse
      fimse
   fimse
fimalgoritmo
