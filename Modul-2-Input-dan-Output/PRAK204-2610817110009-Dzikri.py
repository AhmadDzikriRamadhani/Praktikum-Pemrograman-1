pi = 22 / 7

angka = input().split()
while len(angka) < 2:
  angka.extend(input().split())

r, t = map(float, angka[:2])
        
volume = pi * (r ** 2) * t
luas_permukaan = 2 * pi * r * (r + t)
keliling_alas = 2 * pi * r
        
print("\n"
    f"Volume = {volume:.2f}\n"
    f"Luas = {luas_permukaan:.2f}\n"
    f"Keliling = {keliling_alas:.2f}"
)