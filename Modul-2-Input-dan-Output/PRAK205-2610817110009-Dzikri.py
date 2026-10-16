angka = input().split()
while len(angka) < 2:
  angka.extend(input().split())

A, B = map(float, angka[:2])

C = (B**2 - A**2) ** 0.5

print("\n"
    f"Alas = {C:g} cm \n"
    f"Tinggi = {A:g} cm \n"
    f"Keliling = {(A + B + C):g} cm \n"
    f"Luas = {0.5 * C * A:g} cm^2"
)