angka = []
while len(angka) < 6:
  baris = input()
  if baris.strip():
    angka.extend(map(float, baris.split()))

a, b, i, j, x, y = angka[:6]
print(f"\n{(a - b) * i / j - ( x + y ):.3f}")