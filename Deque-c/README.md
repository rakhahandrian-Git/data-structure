# Deque (C Language)

## Deskripsi
Program ini membuat **deque sederhana** menggunakan array.  
Deque bisa **tambah dan hapus elemen dari depan atau belakang**, tapi tetap gampang untuk dipahami.  
Menggunakan variabel front & rear.

---

## Cara Kerja
1. Enqueue Rear = tambah elemen di belakang  
2. Enqueue Front = tambah elemen di depan  
3. Dequeue Front = hapus elemen dari depan  
4. Dequeue Rear = hapus elemen dari belakang  
5. Tampilkan deque = display()

Deque mengikuti prinsip **FIFO atau LIFO tergantung sisi yang digunakan**.

---

## Contoh Output

1 masuk rear
2 masuk rear
3 masuk rear
Deque sekarang: 1 2 3
1 dihapus dari front
Deque sekarang: 2 3
3 dihapus dari rear
Deque sekarang: 2
4 masuk rear
Deque sekarang: 2 4
5 masuk front
Deque sekarang: 5 2 4

---

## Cara Run
1. Compile:
bash
gcc Deque_Case_1.c -o deque, lalu ./deque

Demo: https://drive.google.com/file/d/1-mDO-LPkWiQqNTYxET3ArmUbeii4dolk/view?usp=drive_link

