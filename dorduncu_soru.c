#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5 // Kuyruğun maksimum boyutunu tanımlama

// Kuyruk veri yapısı tanımı
struct Queue {
    int items[MAX_SIZE];
    int front;
    int rear;
};

// Kuyruk fonksiyonları
void enqueue(struct Queue* q, int value) {
    if (q->rear == MAX_SIZE - 1) {
        printf("Kuyruk dolu! Eleman eklenemedi.\n");
    }
    else {
        if (q->front == -1) {
            q->front = 0;
        }
        q->rear++;
        q->items[q->rear] = value;
    }
}

void dequeue(struct Queue* q) {
    if (q->front == -1) {
        printf("Kuyruk boş! Eleman çıkarılamaz.\n");
    }
    else {
        printf("Silinen eleman: %d\n", q->items[q->front]);
        q->front++;
        if (q->front > q->rear) {
            q->front = q->rear = -1;
        }
    }
}

void display(struct Queue* q) {
    if (q->rear == -1) {
        printf("Kuyruk boş!\n");
    }
    else {
        int i;
        printf("Yığının elemanları:\n");
        for (i = q->front; i <= q->rear; i++) {
            printf("%d ", q->items[i]);
        }
        printf("\n");
    }
}

int main() {
    struct Queue q;
    q.front = -1;
    q.rear = -1;

    int choice, value;
    printf("Lütfen aşağıdaki işlemlerden birini seçiniz\n\n");
    do {
        printf("1. Ekleme\n");
        printf("2. silme\n");
        printf("3. Görüntüleme\n");
        printf("4. Çıkış\n\n");
        printf("Seçiminiz: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Eklemek istediğiniz değeri giriniz: ");
                scanf("%d", &value);
                enqueue(&q, value);
                break;
            case 2:
                dequeue(&q);
                break;
            case 3:
                display(&q);
                break;
            case 4:
                printf("Programdan çıkılıyor...\n");
                break;
            default:
                printf("Geçersiz seçim. Tekrar deneyin.\n");
        }
    } while (choice != 4);

    return 0;
}
