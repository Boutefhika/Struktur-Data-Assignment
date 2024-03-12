#include <iostream>
#include <string>

// Struct untuk merepresentasikan alamat
struct Alamat_316 {
    std::string jalan;
    std::string kecamatan;
    std::string kota;
    std::string kodepos;
};

// Class untuk merepresentasikan data mahasiswa
class Siswa_316 {
public:
    // Data member (atribut)
    std::string nama;
    int umur;
    double ip;
    Alamat_316 alamat; // Penggunaan struct sebagai bagian dari class

    // Constructor
    Siswa_316(std::string n, int u, double i, Alamat_316 almt) : nama(n), umur(u), ip(i), alamat(almt) {}

    // Method untuk menampilkan informasi mahasiswa
    void displayInfo() {
        std::cout << "------------------" << std::endl;
        std::cout << "  Data Mahasiswa:" << std::endl;
        std::cout << "------------------" << std::endl;
        std::cout << "  Nama      : " << nama << std::endl;
        std::cout << "  Umur      : " << umur << std::endl;
        std::cout << "  IP        : " << ip << std::endl;
        std::cout << "--------------" << std::endl;
        std::cout << "  Alamat    : " << std::endl;
        std::cout << "--------------" << std::endl;
        std::cout << "  Jalan     : " << alamat.jalan << std::endl;
        std::cout << "  Kecamatan : " << alamat.kecamatan << std::endl;
        std::cout << "  Kota      : " << alamat.kota << std::endl;
        std::cout << "  Kode Pos  : " << alamat.kodepos << std::endl;
    }
};

int main() {
    // Membuat objek menggunakan class dan struct
    Alamat_316 nuhaAlamat = {"Jl.Jati", "Karangtalun", "Cilacap", "53231"};
    Siswa_316 nuha("Boutefhika Nuha Z. K", 18, 3.9, nuhaAlamat);

    // Memanggil method untuk menampilkan informasi mahasiswa
    nuha.displayInfo();

    return 0;
}
