// Valid Parentheses

#include <stdio.h>   // untuk printf
#include <stdbool.h> // supaya bisa menggunakan tipe bool (true/false)

bool isValid(char* s) {
    
    char stack[10000]; // array untuk stack menyimpan kurung buka
    int top = -1;      // posisi paling atas stack, -1 berarti stack kosong

    int i = 0;         // index untuk membaca string

    while (s[i] != '\0') {

        char c = s[i]; // ambil karakter ke-i

        // jika kurung buka
        if (c == '(' || c == '[' || c == '{') {

            top++;
            stack[top] = c; // push ke stack
        }

        // jika kurung tutup
        else {

            if (top == -1) // stack kosong → tidak valid
                return false;
                
            char last = stack[top]; // ambil elemen paling atas
            top--; // pop

            // cek apakah pasangan cocok
            if (c == ')' && last != '(')
                return false;
            
            if (c == ']' && last != '[')
                return false;
            
            if (c == '}' && last != '{')
                return false;
        }  // ← ini yang tadi kurang

        i++; // lanjut ke karakter berikutnya
    }

    // setelah selesai membaca semua karakter
    if (top == -1)
        return true;
    else
        return false;
}

int main() {

    char s[10000];
    scanf("%s", s);
    
    if (isValid(s))
        printf("Valid\n");
    else
        printf("Invalid\n");

    return 0;
}