jumlah_putaran = 5
jarak_total = 14
phi = 3.14

jari_jari = (jarak_total / jumlah_putaran) / (2 * phi)

print(
    f"Diketahui : \n"
    f"Pak Dengklek mengelilingi taman = {jumlah_putaran} Putaran \n"
    f"Jarak tempuh Pak Dengklek = {jarak_total} Kilometer \n\n"
    f"Jawaban : \n"
    f"Jari-jari taman yang dikelilingi Pak Dengklek adalah {jari_jari:.2f}"
)