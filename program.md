### Implementasi bahasa C++
---
 Beberapa contoh program sederhana dengan menggunakan 
 bahasa C++

### Menghitung Kecepatan melalui Jarak

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
cout << "░╚███╔╝░░░░██║░░░█████═╝░░░░░░██║██╔██║░░\n";          cout << "░██╔██╗░░░░██║░░░██╔═██╗░██╗░░██║╚═╝██║░░\n";          cout << "██╔╝╚██╗░░░██║░░░██║░╚██╗╚█████╔╝███████╗\n";
cout << "╚═╝░░╚═╝░░░╚═╝░░░╚═╝░░╚═╝░╚════╝░╚══════╝\n";          // =========

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
cout << "Jadi kecepatan anda adalah : " << hasil << " km/jam " >
cin.get();
return 0;
}


```
