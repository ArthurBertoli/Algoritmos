Algoritmo "TempoTemperatura"

Var
   op: inteiro
Inicio
   escreval ("1. Tempo seco e temperatura fria")
   escreval ("2. Tempo seco e temperatura quente")
   escreval ("3. Tempo chuvoso e temperatura quente")
   escreval ("4. Tempo chuvoso e temperatura fria")
   escreval ("escolha uma opção de 1 a 4")
   leia (op)
   escolha (op)
   caso 1
      se op = 1 entao
         escreval ("o jogador irá jogar")
      fimse
   outrocaso
      limpatela
   caso 2
      se op = 2 entao
         escreval ("o jogador não irá jogar")
      fimse
   caso 3
      se op = 3 entao
         escreval ("o jogador irá jogar")
      fimse
   caso 4
      se op = 4 entao
         escreval ("o jogador não irá jogar")
      fimse
   fimescolha

Fimalgoritmo
