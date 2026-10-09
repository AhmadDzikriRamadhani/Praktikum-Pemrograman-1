alas = 5
tinggi = 12

sisi_c = int((alas ** 2 + tinggi ** 2) ** 0.5)
keliling = alas + tinggi + sisi_c
luas = int(0.5 * alas * tinggi)

print(
    f"Diketahui : \n"
    f"Alas = {alas} cm \n"
    f"Tinggi = {tinggi} cm \n\n"
    f"Jawab : \n"
    f"Sisi A = {alas} cm \n"
    f"Sisi B = {tinggi} cm \n"
    f"Sisi C = {sisi_c} cm \n"
    f"Keliling = {keliling} cm \n"
    f"Luas = {luas} cm²"
)