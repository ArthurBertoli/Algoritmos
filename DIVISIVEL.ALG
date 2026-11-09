Algoritmo "divisivel"

Var
   num:inteiro
   op, op2, op3, op4:inteiro

Inicio

   escreval("Digite um numero inteiro")

   leia (num)
   op <- num mod 2
   op2 <- num mod 3
   op3 <- num mod 5
   op4 <- num mod 7

   se (num mod 2) = 0 entao
      escreval ("Divisível por 2")
   fimse
   se (num mod 3) = 0 entao
      escreval ("Divisível por 3")
   fimse
   se (num mod 5) = 0 entao
      escreval ("Divisível por 5")
   fimse
   se (num mod 7) = 0 entao
      escreval ("Divisível por 7")
   fimse

Fimalgoritmo