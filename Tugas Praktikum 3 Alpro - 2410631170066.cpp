#include<iostream>
using namespace std;

int main(){
    cout<<"Tugas Praktikum 2 Alpro"<<endl<<endl;
    cout<<"Nama       : Defry Ananta Perangin Angin"<<endl;
    cout<<"NPM        : 2410631170066"<<endl;
    cout<<"Kelas/Prodi: 1B/Informatika"<<endl<<endl;

    cout<<"Nomor 1"<<endl;
    int skor;
    cout<<"     Masukkan skor: ";
    cin>>skor;

    if(skor>=90){
        cout<<"     Selamat! Anda mendapatkan nilai A."<<endl<<endl;
    }
    else if(skor>=80){
        cout<<"     Anda mendapatkan nilai B."<<endl<<endl;
    }
    else if(skor>=70){
        cout<<"     Anda mendapatkan nilai C."<<endl<<endl;
    }
    else if(skor>=60){
        cout<<"     Anda mendapatkan nilai D."<<endl<<endl;
    }
    else if(skor<60){
        cout<<"     Anda mendapatkan nilai E."<<endl<<endl;
    }

    cout<<"Nomor 2"<<endl;

    int a1, a2, a3;

    // Meminta pengguna untuk memasukkan tiga angka
    cout << "       Masukkan tiga angka: ";
    cin >> a1 >> a2 >> a3;
    // Menentukan angka terbesar
    int terbesar = a1;

    if (a2 > terbesar) {
        terbesar = a2;
    }if (a3 > terbesar) {
        terbesar = a3;
    }

    // Mencetak angka terbesar
    cout<<"     Angka terbesar adalah: "<<terbesar<<endl<<endl;

    cout<<"Nomor 3"<<endl;
    int pilihan;
    float sisi,panjang,lebar,alas,tinggi,luas;

    cout <<"       Pilih Bangun Datar yang ingin dihitung luasnya: "<<endl;
    cout <<"           1. Persegi"<<endl;
    cout <<"           2. Persegi Panjang"<<endl;
    cout <<"           3. Segitiga"<<endl;
    cout <<"       Masukkan pilihan Anda: ";
    cin>>pilihan;

    switch(pilihan) {
        case 1:
            cout<<"       Masukkan panjang sisi persegi: ";
            cin>>sisi;
            luas=sisi*sisi;
            cout<<"       Luas persegi: "<<luas<<endl;
            break;

        case 2:
            cout<<"       Masukkan panjang: ";
            cin>>panjang;
            cout<<"       Masukkan lebar: ";
            cin>>lebar;
            luas=panjang*lebar;
            cout<<"       Luas persegi panjang: "<<luas<<endl;
            break;

        case 3:
            cout<<"       Masukkan alas: ";
            cin>>alas;
            cout<<"       Masukkan tinggi: ";
            cin>>tinggi;
            luas=0.5*alas*tinggi;
            cout<<"       Luas segitiga: "<<luas<<endl;
            break;
    }

    return 0;
    }
