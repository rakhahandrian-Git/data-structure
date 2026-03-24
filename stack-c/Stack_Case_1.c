#include <stdio.h>
#define MAX 1000

char stack[MAX];
int top = -1;

// Push
void push(char x) {
    if(top < MAX-1) {
        stack[++top] = x;
    } else {
        printf("Overflow\n");
    }
}

// Pop
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

    // Push all letter
    for(int i = 0; word[i] != '\0'; i++)
        push(word[i]);

    printf("Reversed: ");
    while(top >= 0)
        printf("%c", pop());
    printf("\n");

    return 0;
}