poczatek, koniec, dzielnik = input().split(' ')
poczatek, koniec, dzielnik =  int(poczatek), int(koniec), int(dzielnik)

podzielne = int((koniec / dzielnik)) - int((poczatek / dzielnik))
if poczatek % dzielnik == 0:
    podzielne += 1

print(podzielne)