# Reverse Word Stack (C)

## Deskripsi
Program ini buat ngebalik kata yang kita masukin.  
Konsepnya pakai **stack**, jadi huruf terakhir yang masuk bakal keluar duluan (LIFO).  
Stacknya pake **array** dan variabel top buat nyimpen posisi terakhir.

---

## Cara Kerja
1. User masukin kata, misal: RAKHA
2. Setiap huruf dimasukin ke stack pake push()  
3. Huruf-huruf dikeluarin pake pop() satu-satu → otomatis terbalik  
4. Tampil di layar

---

## Contoh Output
Enter a word: RAKHA
Reversed: AHKAR

---

## Cara Run
1. Compile:
gcc Stack_Case_1.c -o reverse, lalu
./reverse


Video Demo: https://drive.google.com/file/d/1AGaHRkHpJLEtw-Tc71vpAvR6gp25ogEP/view?usp=drive_link
