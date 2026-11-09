Algoritmo "CorreçãoProva"


Var
   b: caracter
   V, K, C: real
   d, m, a: inteiro


Inicio
   escreval ("Informe a quantidade de KWH aparece no seu relógio medidor")
   leia (K)
   escreval ("Informe a cor de sua bandeira")
   leia (b)
   escreval ("Informe a data de hoje(dia, mês e ano).")
   leia (d, m, a)
   
   Se (b = "verde") entao  C <- K * 0,45
   senao
      Se (b = "amarela") entao C <- (K*0,45) + 1,5 * K/100
      senao
         Se (b  "vermelha 1") entao C <- (K*0,45) + 3* K/100
         senao
            Se (b = "vermelha 2") entao C <- (K*0,45) + 4,5* K/100
            fimse
         fimse
      fimse
   fimse
   Se ((d = 29) E (m =1)) entao d = 28
   fimse
   Se (m = 12) entao m = 1 E a = a + 1
   fimse
   V <- ((m + 1), a)
   escreval ("Sua conta é:", C, "Sua bandeira é:", b, "O vencimento é no dia:", V)



Fimalgoritmo













