def biodata(tahun_lahir, nama, asal):
    tahun_sekarang = 2020
    umur = tahun_sekarang - tahun_lahir 
    print("Perkenalkan Nama Saya :", nama)
    print("Umur saya :", umur )
    print("Saya Adalah Angkatan : ", tahun_sekarang)
    print("Asal Saya dari :", asal)

tahun_lahir = int(input())
nama = input()
asal = input()
    
biodata(tahun_lahir, nama, asal)
