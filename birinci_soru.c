#include <stdio.h>

int main() {
    int size, search, found = 0;
    
    printf("Dizinin boyutunu giriniz: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Dizinin elemanlarini giriniz:\n");
    for(int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Aranacak elemani giriniz: ");
    scanf("%d", &search);
    
    // Linear Search algoritması ile arama 
    for(int i=0; i<size; i++) {
        if(arr[i] == search) {
            printf("%d elemani %d indisinde bulundu.\n", search, i);
            found = 1;
            break;
        }
    }
    
    if(found == 0) {
        printf("%d elemani dizide bulunamadi.\n", search);
    }
    
    return 0;
}
