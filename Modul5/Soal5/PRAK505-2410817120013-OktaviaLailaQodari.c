#include <stdio.h>

void Biodata(int tahunLahir, char nama[], char asal[]) {
    int tahun_sekarang = 2020;
    int umur = tahun_sekarang - tahunLahir;
    printf("Perkenalkan Nama Saya : %s\n", nama);
    printf("Umur saya : %d \n", umur);
    printf("Saya Adalah Angkatan : %d \n", tahun_sekarang);
    printf("Asal Saya Dari : %s", asal);
}

int main() {
    int tahunLahir;
    char nama[20], asal[15];
    
    scanf(" %d",&tahunLahir); 
    scanf(" %[^\n]%*c",&nama); 
    scanf(" %[^\n]%*c",&asal);
    Biodata(tahunLahir, nama, asal);
    
    return 0;
}