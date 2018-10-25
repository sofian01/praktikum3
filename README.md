# praktikum3

latihan1

mengambil bilangan terbesar dari sejumlah bilangan
Deklarasi
            Integer a,b,c,terbesar;
Deskripsi
            Write(“Masukkan Bilangan Pertama : ”);
            Read(a);
            Write(“Masukkan Bilangan Kedua : ”);
            Read(b);
            Write(“Masukkan Bilangan Ketiga : ”);
            Read(c);
            if (a>b) then
                        if (a>c) 
                                    then write(“Terbesar = ”,a);
                                    else wrie(“Terbesar = ”,c);
                        endif
            else if (b>c)
                        then write(“Terbesar = ”,b);
                        else write(“Terbesar = ”,c);
            endif
            endif
            
![sslatihan1](https://user-images.githubusercontent.com/44091204/47499065-35d3eb00-d889-11e8-8b41-8b0eb2740640.jpg)

FLOWCHART

![latihan1 algoritma menentukan bil terbesar](https://user-images.githubusercontent.com/44091204/47499032-1ccb3a00-d889-11e8-9780-0da183db3d0f.jpg)

latihan2

mengurutkan 3 bilangan acak
masukkan ketiga bilangan
bandingkan ketiga bilangan tersebut
letakkan bilangan terkecil di depan
letakkan bilangan terbesar di belakang
letakkan bilangan yang tersisa di tengah

![sslatihan2](https://user-images.githubusercontent.com/44091204/47499616-94e62f80-d88a-11e8-9e97-319a62f4f6b3.jpg)

FLOWCHART

![flowchart2](https://user-images.githubusercontent.com/44091204/47499724-eabad780-d88a-11e8-93ae-1b89440575fc.jpg)

LATIHAN3

mencetak nilai tengah dari 3 buah bilangan 

1.    Mulai
2.    Deklarasikan variabel
3.    Tentukan banyaknya data (N)
4.    Input data dalam loop
5.    Urutkan data secara Ascending
6.    Cari Nilai Median dengan cara :
       •    Cek lebih dahulu, apakah jumlah data Ganjil atau Genap dengan  mod. 
       •    N1 = N mod 2 
       •    Jika genap (N1=0), maka cari posisi data Median dengan DIV 
       •    I1 = n div 2, maka posisi data Median  adalah i1 dan data ke-2 adalah i1+1
       •    Cari Median,  m = (data[i1] + data[i1+1])/2
       •    Jika Ganjil(N1>0), maka cari posisi data Median dengan DIV
       •    I1 = (n div 2)+1, maka posisi data Median adalah i1
       •    Cari Median , m = data[i1]
7.    Cetak Hasil yaitu m
8.    Selesai


