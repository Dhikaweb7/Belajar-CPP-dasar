# Belajar C++
Belajar Bahasa Pemrograman Dasar C++
Mata pelajaran Pemrograman Dasar  kelas X

Sumber materi ini adalah [Kelas Terbuka 🌱](readme.md) dan [Wikipedia](wiki.md)

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

### Untuk Android bisa menggunakan beberapa aplikasi :

[TERMUX](termux.md) 
> untuk Termux perlu beberapa settingan untuk instalasi kompiler dan text editor

[CXX](cxx.md) ( bisa digunakan langsung )

## Program Dasar C++

```c++

// Program mencetak teks ke layar
// X TKJ 1
#include <iostream>
int main(){
       cout << "PROGRAM BERHASIL DI KOMPILE";
       return 0;
       }

```

## CETAK KE LAYAR

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

```c++

#include <iostream>
using namespace std;
int main(){

        int a = 5;

        cout << a << endl;
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
