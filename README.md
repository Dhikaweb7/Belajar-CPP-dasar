# Belajar C++
Belajar Bahasa Pemrograman Dasar C++
Mata pelajaran Pemrograman Dasar  kelas X

Sumber materi ini adalah [Kelas Terbuka 🌱](readme.md) dan [Wikipedia](https://en.m.wikipedia.org/wiki/C%2B%2B)

## Apa itu C++ 

C++ adalah bahasa pemrograman komputer yang dibuat oleh [Bjarne Stroustrup](bs.md), 
yang merupakan perkembangan dari bahasa C yang dikembangkan di Bell Labs oleh [Dennis Ritchie](dr.md). 
Pada awal tahun 1970-an

## Alat yang dibutuhkan

- [Text Editor / IDE](text.md)
- [Kompiler](kompiler.md)

Rekomendasi menggunakan tools :

### Untuk Laptop

[Devc++](https://www.bloodshed.net/)

Dev-C++ adalah sebuah IDE (Integrated Development Environment) ``C / C++`` yang sudah dilengkapi dengan ``Compiler`` (bagian dari GNU Compiler Collection / GCC). 
Dev-C++ merupakan IDE gratis dan full fitur untuk pemrograman ``C`` dan ``C++``

### Untuk Android bisa menggunakan beberapa aplikasi

- [TERMUX](termux.md) 
> untuk Termux perlu beberapa settingan untuk instalasi kompiler dan text editor
- [CXX](cxx.md) ( bisa digunakan langsung )
---
#### [Proyek Program Sederhana dengan C++](proyek.md)
> @xcyberone | TKJ 1 | SMK RADEN PAKU 
## Program Dasar C++
contoh program mencetak output berupa teks di layar menggunakan bahasa pemrograman C++

```c++

// Program mencetak teks ke layar
// X TKJ 1
#include <iostream>
using namespace std;
int main(){
       cout << "SMK RADEN PAKU";
       return 0;
       }

```

---

## CETAK KE LAYAR
Untuk mencetak objek di c++ 
, kita dapat menggunakan sintaks  `` cout `` , bersama dengan operator `` << `` , digunakan untuk menampilkan nilai/mencetak teks:


```c++ 


#include <iostream>
using namespace std;
int main(){
        cout << "halo sodara-sodara sekalian";
        cout << "ini adalah baris baru.";
        cout << "ini bukan baris baru.";
        cout << " ini akhir kalimat." << endl;
        cin.get();
        return 0;
}

```

## Variabel
Variabel adalah wadah untuk menyimpan nilai data.

Di C++, ada berbagai jenis variabel (didefinisikan dengan kata kunci yang berbeda), misalnya:

 | tipe data | Keterangan |
 | --- | --- |
 | int | menyimpan bilangan bulat (bilangan bulat), tanpa desimal, seperti 123 atau -123 |
 | double | menyimpan angka floating point, dengan desimal, seperti 19,99 atau -19,99 |
 | char |  menyimpan karakter tunggal, seperti 'a' atau 'B'. Nilai karakter dikelilingi oleh tanda kutip tunggal |
 | string |  menyimpan teks, seperti "Hello World". Nilai string dikelilingi oleh tanda kutip ganda |
 | bool | menyimpan nilai dengan dua status: benar atau salah ( true / false , high / low ) |


```c++

#include <iostream>
using namespace std;
int main(){

       int a = 5; 
      
        /*
       ini variabel a di isi 
       dengan angka 5
       bertipe data integer / int  
       */

       cout << a << endl; // mencetak data dari variabel a
       cin.get();
       return 0;
}

```

## Deklarasi

```c++ 

#include <iostream>

using namespace std;

int main(){

        int a;
        a = 10;
        cout << a << endl;

        int b;
        cout << "masukan nilai : ";
        cin >> b;
        cout << "nilai yang anda masukan adalah: ";
        cout << b << endl;

        cin.get();
        return 0;
}

```

## Tipe Data

```c++

#include <iostream>

using namespace std;

int main(){

        // bilangan bulat
        unsigned int a = 5; // 32-bit
        long b = 6;
        short c = 7;

        // bilangan decimal
        float d = 1.0;
        double e = 2.5;

        // character
        char f = 'a'; //character 1-bit

        // boolean
        bool g = true; // true/false

        cout << a << endl;
        cout << sizeof(a) << " byte" << endl;
        cout << numeric_limits<unsigned int>::max() << endl;
        cout << numeric_limits<unsigned int>::min() << endl;
        cin.get();
        return 0;
}

```

## Aritmatika

```c++

#include <iostream>

using namespace std;

int main(){

        // Deklarasi Variabel
        int a = 6;
        int b = 4;
        int hasil;

        // operatornya +, -, *, /, %

        // penjumlahan
        hasil = a + b;
        cout << a << " + " << b << " = " << hasil << endl;

        // pengurangan
        hasil = a - b;
        cout << a << " - " << b << " = " << hasil << endl;

        // perkalian
        hasil = a * b;
        cout << a << " x " << b << " = " << hasil << endl;

        // pembagian
        hasil = a / b;
        cout << a << " / " << b << " = " << hasil << endl;

        // modulus
        hasil = a % b;
        cout << a << " % " << b << " = " << hasil << endl;

        // urutan eksekusi;

        hasil = a + b * a;
        cout << hasil << endl;

        cin.get();
        return 0;
}

```

## Komparasi

```c++

#include <iostream>

using namespace std;

int main()
{
        int a = 2;
        int b = 2;

        bool hasil1, hasil2;

        // komparasi, relation expression

        // sebanding ==
        hasil1 = (a == b);
        // tidak sebanding !=
        hasil2 = (a != b);

        // kurang dari
        hasil1 = (a < b);
        // lebih dari
        hasil2 = (a > b);

        // kurang dari sama dengan
        hasil1 = (a <= b);
        // lebih dari sama dengan
        hasil2 = (a >= b);

        cout <<  hasil1 << endl;
        cout <<  hasil2 << endl;

        cin.get();
        return 0;
}

```

## Program Menghitung kecepatan 

```c++

 #include <iostream>
using namespace std;
int main(){
// deklarasi tipe data

int s;
int t;
int hasil;

// banner

cout << "██╗░░██╗████████╗██╗░░██╗░░░░░██╗░░███╗░░\n";
cout << "╚██╗██╔╝╚══██╔══╝██║░██╔╝░░░░░██║░████║░░\n";
cout << "░╚███╔╝░░░░██║░░░█████═╝░░░░░░██║██╔██║░░\n";
cout << "░██╔██╗░░░░██║░░░██╔═██╗░██╗░░██║╚═╝██║░░\n";
cout << "██╔╝╚██╗░░░██║░░░██║░╚██╗╚█████╔╝███████╗\n";
cout << "╚═╝░░╚═╝░░░╚═╝░░░╚═╝░░╚═╝░╚════╝░╚══════╝\n";
// =========

// input

cout << "\nProgram menghitung kecepatan\n";
cout << "====================\n";
cout << "Satuan jarak adalah Kilometer\n";
cout << "Satuan waktu adalah Jam\n";
cout << "====================\n";
cout << "| @xcyberone | TKJ |\n";
cout << "Masukan Jarak: ";
cin >> s;
cout << "Masukan Waktu: ";
cin >> t;

// proses

hasil = s / t;

// output
cout << "Jadi kecepatan anda adalah : " << hasil << " km/jam " << end>
cin.get();
return 0;
}


``` 
## Komparasi Digital

```c++

#include <iostream>

using namespace std;

int main()
{
        int a = 3;
        int b = 2;

        bool hasil;

        // operator logika : not, and, or

        // not
        hasil = !(a == 3);

        // and : kedua nilai benar untuk menghasilkan true

        cout << "untuk and \n";
        hasil = (a == 3) and (b == 2); // true and true
        cout << hasil << endl;
        hasil = (a == 4) and (b == 2); // false and true
        cout << hasil << endl;
        hasil = (a == 3) && (b == 3); // true and false
        cout << hasil << endl;
        hasil = (a == 4) && (b == 3); // false and false
        cout << hasil << endl;

        // or : salah satu nilai true maka hasil true
        cout << "untuk or \n";
        hasil = (a == 3) or (b == 2); // true and true
        cout << hasil << endl;
        hasil = (a == 4) or (b == 2); // false and true
        cout << hasil << endl;
        hasil = (a == 3) || (b == 3); // true and false
        cout << hasil << endl;
        hasil = (a == 4) || (b == 3); // false and false
        cout << hasil << endl;


        cin.get();
        return 0;
}

```

## IF Statement

```c++

#include <iostream>

using namespace std;

int main()
{
        int a;

        cout << "masukan angka = ";
        cin >> a;

        // if statement
        // kondisi dalam bentuk boolean
        if (a == 5)
        {
                cout << "halooo" << endl;
        }

        cout << "selesai" << endl;
        cin.get();
        return 0;
}

```

## IF Else

```c++

#include <iostream>

using namespace std;

int main(){

        int a;

        cout << "masukan angka = ";
        cin >> a;

        if (a == 5){
                cout << "nilai ini adalah 5" << endl;
        } else if (a == 3){
                cout << "nilai ini adalah 3" << endl;
        } else if (a == 1){                                       cout << "nilai ini adalah 1" << endl;
        } else {
                cout << "bukan 5,3, atau 1" << endl;
        }

        cout << "selesai" << endl;
        cin.get();
        return 0;
}

```

## Switch Case

```c++

#include <iostream>

using namespace std;

int main()
{
        int a;

        cout << "masukan nilai = ";
        cin >> a;

        switch(a){
                case 1:
                        cout << "a = 1" << endl;
                        break;
                case 2:
                        cout << "a = 2" << endl;
                case 3:
                        cout << "a = 3" << endl;
                case 4:
                        cout << "a = 4" << endl;
                case 5:
                        cout << "a = 5" << endl;
                default:
                        cout << "default" << endl;
        }

        cout << "akhir dari program" << endl;

        return 0;
}

```

## PROGRAM KALKULATOR 

```c++ 

#include <iostream>

using namespace std;

int main()
{
        float a,b,hasil;
        char aritmatika;

        cout << "Selamat datang di program calculator \n \n";

        // memasukan input dari user
        cout << "Masukan nilai pertama: ";
        cin >> a;
        cout << "Pilih operator +,-,/,*: ";
        cin >> aritmatika;
        cout << "Masukan nilai kedua: ";
        cin >> b;

        cout << "\nHasil perhitungan: ";
        cout << a << aritmatika << b;

        if (aritmatika == '+'){
                hasil = a + b;
        } else if (aritmatika == '-'){
                hasil = a - b;
        } else if (aritmatika == '/'){
                hasil = a / b;
        } else if (aritmatika == '*'){
                hasil = a * b;
        } else {
                cout << "operator anda salah" << endl;
        }

        cout << " = " << hasil << endl;

        cin.get();
        return 0;
}

```

## Assignment

```c++

#include <iostream>

using namespace std;

int main()
{

        // assignment
        int a = 10;

        cout << "nilai awal dari a adalah: " << a << endl;

        // assignment operator
        // variabel = variabel operator ekspresi
        //     a.   =.   a.      -       3
        // variabel operator= ekspresi
        //     a.      +=.       3

        a += 3;
        cout << "ditambah 3 menjadi " << a << endl;

        a -= 3;
        cout << "dikurangi 3 menjadi " << a << endl;

        a /= 3;
        cout << "dibagi 3 menjadi " << a << endl;

        a *= 3;
        cout << "dikali 3 menjadi " << a << endl;

        a %= 3;
        cout << "dimodulus 3 menjadi " << a << endl;

        cin.get();
        return 0;
}

```

### Increment dan Decrement

```c++

#include <iostream>
using namespace std;

int main()
{
        // increment dan decrement
        // preincrement dan postincrement

        int a = 5;
        int b = 5;

        // postincrement
        cout << a << endl;
        cout << a++ << endl;
        cout << a << endl << endl;

        // preincrement
        cout << b << endl;
        cout << ++b << endl;
        cout << b << endl;



        cin.get();
        return 0;
}

```



