Algoritmo "moedas"

Var

   op, op2, op3: inteiro
   letra: caracter
   result, resultado, euro, dolar, libra, rublo, iene, reais : real

Inicio
      escreval (" 1. Cotação do dia.")
      escreval (" 2. Conversor para real.")
      escreval (" 3. Conversor de real para moeda enstrangeira.")
      leia (op)
      escolha (op)
      caso 1
         limpatela
         se op = 1 entao
            escreval (" 1 Euro  = 5.12 Reais ( Comunidade Européia )")
            escreval (" 1 Dólar (US) = 5.16 Reais")
            escreval (" 1 Libra (EN) = 5.93 Reais")
            escreval (" 1 Rublo = 0.084 Reais ( Rússia )")
            escreval (" 1 Iene = 0.037 Reais ( Japão )")
         fimse
      fimescolha
   caso 2
      se op = 2 entao
         limpatela
         escreval (" Escolha a moeda (4-8)")
         escreval (" 4.Euro")
         escreval (" 5.Dólar")
         escreval (" 6.Libra")
         escreval (" 7.Rublo")
         escreval (" 8.Iene")
         leia (op2)
      fimse

      se op2 = 4 entao
         escreval (" Digite o valor desejado")
         leia (euro)
         resultado <- euro * 5.12
         escreval (" A conversão para Euro é:", resultado)
      fimse

      se op2 = 5 entao
         escreval ("Digite o valor desejado")
         leia (dolar)
         resultado <- dolar * 5.16
         escreval (" A conversão para Dólar é:", resultado)
      fimse

      se op2 = 6 entao
         escreval (" Digite o valor desejado")
         leia (libra)
         resultado <- libra * 5.93
         escreval (" A conversão para Libra é:", resultado)
      fimse

      se op2 = 7 entao
         escreval(" Digite o valor desejado")
         leia (rublo)
         resultado <- rublo *  0.087
         escreval (" A conversao para Rublo é:", resultado)
      fimse

      se op2 = 8 entao
         escreval(" Digite o valor desejado")
         leia (iene)
         resultado <- iene * 0.037
         escreval (" A conversão para Iene é:", resultado)
      fimse

   Caso 3
      se op = 3 entao
         limpatela
         escreval ("Escolha a moeda para qual quer converter (4-8)")
         escreval (" 4.Euro")
         escreval (" 5.Dólar")
         escreval (" 6.Libra")
         escreval (" 7.Rublo")
         escreval (" 8.Iene")
         leia (op3)
      fimse

      se op3 = 4 entao
         escreval (" Digite o valor desejado")
         leia (reais)
         resultado <- reais / 5.12
         escreval (" A conversão de real para o euro é", resultado)
      fimse

      se op3 = 5 entao
         escreval ("Digite o valor desejado")
         leia (reais)
         resultado <- reais / 5.16
         escreval (" A conversão do real para o Dólar é:", resultado)
      fimse

      se op3 = 6 entao
         escreval (" Digite o valor desejado")
         leia (reais)
         resultado <- reais / 5.93
         escreval (" A conversão do real para a Libra é:", resultado)
      fimse

      se op3 = 7 entao
         escreval(" Digite o valor desejado")
         leia (reais)
         resultado <- reais /  0.087
         escreval (" A conversao do real para o Rublo é:", resultado)
      fimse

      se op3 = 8 entao
         escreval(" Digite o valor desejado")
         leia (reais)
         resultado <- reais / 0.037
         escreval (" A conversão de real o para Iene é:", resultado)
      fimse

Fimalgoritmo
