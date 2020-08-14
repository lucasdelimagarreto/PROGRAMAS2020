bola_copo = 2.5
bola_copo_desconto1 = 2.25
bola_copo_desconto2 = 2.15
bola_casquinha = 3.5
bola_casquinha2 = 6
bola_casquinha_nutella = 5
bola_casquinha_nutella2 = 7
valor = 0
expediente = 'n'
while expediente != 's':

    recipiente = str(input('Digite qual o recipiente: (co - para copo, ca - para casquinha e cn - para casquinha com nutella): '))

    if recipiente == 'co':

        bolas = int(input('Digite a quantidade de bolas de sorvete: '))

        if bolas >= 1 and bolas <= 2:
            valor = bolas * bola_copo
            print('o valor e R$', valor,'.')
            

        elif bolas > 2 and bolas < 13:
            valor = bolas * bola_copo_desconto1
            print('o valor e R$', valor,'.')
        
        else:
            valor = bolas * bola_copo_desconto2
            print('o valor e R$', valor,'.')

    elif recipiente == 'ca':
        
        bolas = int(input('Digite a quantidade de bolas de sorvete: '))
            
        if bolas == 1:
            valor = bola_casquinha
            print('o valor e R$', valor,'.')

        elif bolas == 2:
            valor = bola_casquinha2
            print('o valor e R$', valor,'.')
        
        else:
            print('Acasquinha so comporta até 2 bolas de sorvete!')

    elif recipiente == 'cn':

        bolas = int(input('Digite a quantidade de bolas de sorvete: '))

        if bolas == 1:
            valor = bola_casquinha_nutella
            print('o valor e R$', valor,'.')

        elif bolas == 2:
            valor = bola_casquinha_nutella2
            print('o valor e R$', valor,'.')
        
        else:
            print('Acasquinha so comporta até 2 bolas de sorvete!')

    expediente = str(input('O expediente acabou? (s - para sim, n - para não): '))
print('até amanhã!')
    



        
