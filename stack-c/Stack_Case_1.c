#include <stdio.h>
#define MAX 1000

char stack[MAX];
int top = -1;


void push(char x) {
    if(top < MAX-1) {
        stack[++top] = x;
    } else {
        printf("Overflow\n");
    }
}


char pop() {
    if(top >= 0) {
        return stack[top--];
    } else {
        printf("Underflow\n");
        return '\0';
    }
}

int main() {
    char word[MAX];
    printf("Enter a word: ");
    scanf("%s", word);

    for(int i = 0; word[i] != '\0'; i++)
        push(word[i]);

    printf("Reversed: ");
    while(top >= 0)
        printf("%c", pop());
    printf("\n");

    return 0;
}