#include <stdio.h>
#define MAX 100

int queue[MAX];
int front = 0;
int rear = -1;


void enqueue(int x) {
    if(rear == MAX-1) {
        printf("Antrian penuh!\n");
    } else {
        queue[++rear] = x;
        printf("%d masuk antrian\n", x);
    }
}


void dequeue() {
    if(front > rear) {
        printf("Antrian kosong!\n");
    } else {
        printf("%d dilayani\n", queue[front]);
        front++;
    }
}

// Tampilkan antrian
void display() {
    if(front > rear) {
        printf("Antrian kosong!\n");
    } else {
        printf("Antrian sekarang: ");
        for(int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    display();
    dequeue();
    display();
    enqueue(4);
    display();
    return 0;
}