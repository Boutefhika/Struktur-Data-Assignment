#include <iostream>
#include <map> // Library supaya bisa menggunakan fungsi map dibawah

using namespace std;

int main() {
    
    // Deklarasi map dengan key int dan value string
    map<int, pair<string, double>> fruit_316;
  
    // Menambahkan elemen-elemen ke dalam map
    fruit_316[1] = make_pair("Apel per 1kg", 38000.0);
    fruit_316[2] = make_pair("Mangga per 500kg", 25000.0);
    fruit_316[3] = make_pair("Jeruk per 1kg", 28000.0);
    fruit_316[4] = make_pair("Alpukat per 500gr", 14500.0);
    fruit_316[5] = make_pair("Pisang per 1ssr", 35000.0);

    cout << "============================================" << endl;
    cout << "===== Selamat Datang Di Toko Buah Nuha =====" << endl;
    cout << "============================================" << endl;
    for (int i = 1; i <= fruit_316.size(); ++i) { // Looping untuk menampilkan semua elemen map
        cout << "No." << i << " " << fruit_316[i].first << " - Rp" << fruit_316[i].second << endl; // Menampilkan elemen map
    }

    return 0;
}