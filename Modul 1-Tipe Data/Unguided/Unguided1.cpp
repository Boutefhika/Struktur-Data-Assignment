#include <iostream>
using namespace std;

// Deklarasi fungsi-fungsi untuk menghitung luas bangun datar
float hitungLuasPersegiPanjang(float panjang, float lebar) {
    return panjang * lebar;
}

float hitungLuasPersegi(float sisi) {
    return sisi * sisi;
}

float hitungLuasSegitiga(float alas, float tinggi) {
    return 0.5 * alas * tinggi;
}

float hitungLuasLingkaran(float jariJari) {
    return 3.14 * jariJari * jariJari;
}

int main() {
    int pilihan;
    float panjang, lebar, sisi, alas, tinggi, jariJari;

    do {
        cout << "========================================================" << endl;
        cout << "  SELAMAT DATANG DI PERHITUNGAN LUAS BANGUN DATAR NUHA" << endl;
        cout << "========================================================" << endl;
        cout << "1. Persegi Panjang" << endl;
        cout << "2. Persegi" << endl;
        cout << "3. Segitiga" << endl;
        cout << "4. Lingkaran" << endl;
        cout << "5. Keluar" << endl;
        cout << "Masukkan pilihan (1-5): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan panjang persegi panjang: ";
                cin >> panjang;
                cout << "Masukkan lebar persegi panjang: ";
                cin >> lebar;
                cout << "Luas persegi panjang: " << hitungLuasPersegiPanjang(panjang, lebar) << endl;
                break;
            case 2:
                cout << "Masukkan panjang sisi persegi: ";
                cin >> sisi;
                cout << "Luas persegi: " << hitungLuasPersegi(sisi) << endl;
                break;
            case 3:
                cout << "Masukkan alas segitiga: ";
                cin >> alas;
                cout << "Masukkan tinggi segitiga: ";
                cin >> tinggi;
                cout << "Luas segitiga: " << hitungLuasSegitiga(alas, tinggi) << endl;
                break;
            case 4:
                cout << "Masukkan jari-jari lingkaran: ";
                cin >> jariJari;
                cout << "Luas lingkaran: " << hitungLuasLingkaran(jariJari) << endl;
                break;
            case 5:
                cout << "TERIMAKASIH TELAH MENGGUNAKAN PROGRAM PERHITUNGAN BANGUN DATAR NUHA." << endl;
                
            default:
                cout << "Pilihan Tidak Valid!!!. Silakan masukkan pilihan yang sesuai (1-5)." << endl;
        }
    } while (pilihan != 5);

    return 0;
}
