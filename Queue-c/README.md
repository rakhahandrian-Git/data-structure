
# Queue (C Language)

## Deskripsi
Program ini mensimulasikan antrian sederhana menggunakan **queue**.  
Data masuk antrian menggunakan **enqueue**, dilayani menggunakan **dequeue**.  
Queue menggunakan **array statis** dengan variabel front & rear.

---

## Cara Kerja
1. Tambah pelanggan ke antrian --> enqueue  
2. Layani pelanggan dari depan --> dequeue  
3. Tampilkan antrian saat ini --> display

Queue mengikuti prinsip **FIFO**: pelanggan pertama masuk --> pertama dilayani.

---

## Contoh Output
1 masuk antrian
2 masuk antrian
3 masuk antrian
Antrian sekarang: 1 2 3
1 dilayani
Antrian sekarang: 2 3
4 masuk antrian
Antrian sekarang: 2 3 4

---

## Cara Run
1. Compile:
```bash
gcc Queue_Case_1.c -o queue
./queue
