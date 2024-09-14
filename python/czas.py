czas = int(input())

sekundy = czas % 60
minuty = int((czas - sekundy) / 60)
godziny = int(minuty / 60)
minuty = int(minuty - godziny*60)

print(f"{godziny}g{minuty}m{sekundy}s")