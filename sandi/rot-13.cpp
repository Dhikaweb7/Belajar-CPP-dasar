#include <iostream>
// ===============|
// SMK RADEN PAKU |
// ===============|
// X TKJ 1 | A.OUT|
// ===============|
using namespace std;

// Program Enkripsi
void habib(){
// banner
cout << "██╗░░██╗████████╗██╗░░██╗░░░░░██╗░░███╗░░\n";
cout << "╚██╗██╔╝╚══██╔══╝██║░██╔╝░░░░░██║░████║░░\n";
cout << "░╚███╔╝░░░░██║░░░█████═╝░░░░░░██║██╔██║░░\n";
cout << "░██╔██╗░░░░██║░░░██╔═██╗░██╗░░██║╚═╝██║░░\n";
cout << "██╔╝╚██╗░░░██║░░░██║░╚██╗╚█████╔╝███████╗\n";
cout << "╚═╝░░╚═╝░░░╚═╝░░░╚═╝░░╚═╝░╚════╝░╚══════╝\n";
// =========
cout << "=========================================\n";
cout << "|===PROGRAM SANDI | ROT-13 | XCYBERONE===|\n";
cout << "=========================================\n";
    cout <<"Pesan harus berupa huruf alpabet" << endl;
    string pesan;
    cout << "Ketik pesan: ";
    getline(cin, pesan);
    cin.ignore();

    //pesan
    for(int i = 0; i < pesan.length(); i++){
        pesan[i] = toupper(pesan[i]);
    }

    int dewi = 13;
    string dafa = "";

    for(int i = 0; i < pesan.length(); i++){
        int temp = pesan[i] + dewi;
        if(pesan[i] == 32){
            dafa += " ";
        } else if(temp > 90){
            temp -= 26;
            dafa += (char)temp;
        } else {
            dafa += (char)temp;
        } //if-else
    } //for

    cout << "Pesan tersandi anda: " << dafa;
}

/*
     Pesan enkripsi menggunakan algoritma ROT-13
     "Biarlah Menjadi Rahasia Kita
        ===== Program Sandi =====
            Keamanan Informasi
 */


// Program Deskripsi
void ragil(){
// banner
cout << "██╗░░██╗████████╗██╗░░██╗░░░░░██╗░░███╗░░\n";
cout << "╚██╗██╔╝╚══██╔══╝██║░██╔╝░░░░░██║░████║░░\n";
cout << "░╚███╔╝░░░░██║░░░█████═╝░░░░░░██║██╔██║░░\n";
cout << "░██╔██╗░░░░██║░░░██╔═██╗░██╗░░██║╚═╝██║░░\n";
cout << "██╔╝╚██╗░░░██║░░░██║░╚██╗╚█████╔╝███████╗\n";
cout << "╚═╝░░╚═╝░░░╚═╝░░░╚═╝░░╚═╝░╚════╝░╚══════╝\n";
// =========
cout << "=========================================\n";
cout << "|===PROGRAM SANDI | ROT-13 | XCYBERONE===|\n";
cout << "=========================================\n";
    cout << "Pesan harus berupa huruf alpabet" << endl;
    string pesan;
    cout << "Ketik pesan: ";
    getline(cin, pesan);
    cin.ignore();

    //pesan
    for(int i = 0; i < pesan.length(); i++){
        pesan[i] = toupper(pesan[i]);
    }

    int chika = 13;
    string rendy = "";

    for(int i = 0; i < pesan.length(); i++){
        int temp = pesan[i] - chika;
        if(pesan[i] == 32){
            rendy += " ";
        } else if(temp < 65){
            temp += 26;
            rendy += (char)temp;
        } else {
            rendy += (char)temp;
        } //if-else
    } //for

    cout << "Hasil Deskripsi Pesan: " << rendy;
}

int main()
{
    int pilih;
    // banner
cout << "██╗░░██╗████████╗██╗░░██╗░░░░░██╗░░███╗░░\n";
cout << "╚██╗██╔╝╚══██╔══╝██║░██╔╝░░░░░██║░████║░░\n";
cout << "░╚███╔╝░░░░██║░░░█████═╝░░░░░░██║██╔██║░░\n";
cout << "░██╔██╗░░░░██║░░░██╔═██╗░██╗░░██║╚═╝██║░░\n";
cout << "██╔╝╚██╗░░░██║░░░██║░╚██╗╚█████╔╝███████╗\n";
cout << "╚═╝░░╚═╝░░░╚═╝░░░╚═╝░░╚═╝░╚════╝░╚══════╝\n";
// =========
cout << "=========================================\n";
cout << "|===PROGRAM SANDI | ROT-13 | XCYBERONE===|\n";
cout << "=========================================\n";
// input
    cout << "1. Enkripsi\n2. Deskripsi\nPilih(1,2): ";
    cin >> pilih;
    cin.ignore();

    if(pilih == 1){
        cout << endl << "---Enkripsi---" << endl;
        habib();

    } else if(pilih == 2){
        cout << endl << "---Deskripsi---" << endl;
        ragil();

    } else {
        cout << endl << "===Kesalahan sistem===" << endl;
    }

    return 0;
}
