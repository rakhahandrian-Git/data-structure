#include <stdio.h>
#define MAX 100

int deque[MAX];
int front = -1;
int rear = -1;


void enqueueRear(int x) {
    if(rear == MAX-1) {
        printf("Deque penuh!\n");
        return;
    }
    if(front == -1) front = 0;
    deque[++rear] = x;
    printf("%d masuk rear\n", x);
}


void enqueueFront(int x) {
    if(front <= 0) {
        printf("Tidak bisa enqueue di depan!\n");
        return;
    }
    deque[--front] = x;
    printf("%d masuk front\n", x);
}


void dequeueFront() {
    if(front == -1 || front > rear) {
        printf("Deque kosong!\n");
        return;
    }
    printf("%d dihapus dari front\n", deque[front]);
    if(front == rear) front = rear = -1;
    else front++;
}

void dequeueRear() {
    if(front == -1 || front > rear) {
        printf("Deque kosong!\n");
        return;
    }
    printf("%d dihapus dari rear\n", deque[rear]);
    if(front == rear) front = rear = -1;
    else rear--;
}

void display() {
    if(front == -1 || front > rear) {
        printf("Deque kosong!\n");
        return;
    }
    printf("Deque sekarang: ");
    for(int i = front; i <= rear; i++)
        printf("%d ", deque[i]);
    printf("\n");
}

int main() {
    enqueueRear(1);
    enqueueRear(2);
    enqueueRear(3);
    display();

    dequeueFront();
    display();

    dequeueRear();
    display();

    enqueueRear(4);
    display();

    enqueueFront(5);
    display();

    return 0;
}