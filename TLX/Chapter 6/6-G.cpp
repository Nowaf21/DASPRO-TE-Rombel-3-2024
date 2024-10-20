#include <iostream>
using namespace std;

int main() {
    // Ukuran luas kandang dalam cm persegi untuk setiap toko dan merek
    int luas[4][3] = {
        {225 * 335, 299 * 278, 300 * 250}, // Toko 1
        {215 * 394, 144 * 718, 300 * 290}, // Toko 2
        {200 * 400, 240 * 333, 142 * 619}, // Toko 3
        {314 * 298, 411 * 198, 333 * 222}  // Toko 4
    };

    // Harga jual per cm persegi untuk setiap merek
    int harga_jual[3] = {100, 120, 150};

    // Variabel untuk menyimpan total hasil penjualan setiap merek
    long long total_hasil[3] = {0, 0, 0}; // Menggunakan long long untuk hasil besar

    // Menghitung total hasil penjualan untuk setiap merek
    for (int i = 0; i < 4; i++) { // Loop untuk setiap toko
        for (int j = 0; j < 3; j++) { // Loop untuk setiap merek
            total_hasil[j] += luas[i][j] * harga_jual[j]; // Menghitung hasil penjualan
        }
    }

    // Menampilkan total hasil penjualan untuk setiap merek
    for (int j = 0; j < 3; j++) {
        cout << total_hasil[j] << endl; // Mencetak total hasil penjualan untuk merek ke-j
    }

    return 0;
}
