#include <stdio.h>

int main() {
    int dizi[]={4,8,3,84,47,76,9,24,68};
    int boyut = sizeof(dizi) / sizeof(dizi[0]);
    int aranan = 76;
    
    int sol = 0, sag = boyut - 1, orta;
    
    while(sol <= sag) {
        orta = (sol + sag) / 2;
        
        if(dizi[orta] == aranan) {
            printf("%d elemani %d indisinde bulundu.\n", aranan, orta);
            break;
        } else if(dizi[orta] < aranan) {
            sol = orta + 1;
        } else {
            sag = orta - 1;
        }
    }
    
    if(sol > sag) {
        printf("%d elemani dizide bulunamadi.\n", aranan);
    }
    
    return 0;
}
