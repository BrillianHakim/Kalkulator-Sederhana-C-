#include <iostream>
#include <string>

using namespace std;

int main() {
    char lagi;
    
    do {
        // Deklarasi variabel
        int pil, bil1, bil2;
        string operasi;
        float hasil;

        // Menampilkan menu operator aritmatika
        cout << "|PILIH OPERATOR ARITMATIKA|" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl << endl;

        cout << "==========" << endl;
        // Meminta input pilihan dari pengguna
        cout << "Masukkan Pilihan: ";
        cin >> pil;
        cout << "==========" << endl << endl;
        // Meminta input bilangan pertama dan kedua dari pengguna
        cout << "Masukkan Bilangan Pertama: ";
        cin >> bil1;
        cout << "Masukkan Bilangan Kedua: ";
        cin >> bil2;

        // Menghitung berdasarkan pilihan yang dimasukkan
        switch(pil) {
            case 1:
                hasil = bil1 + bil2;
                operasi = '+';
                break;
            case 2:
                hasil = bil1 - bil2;
                operasi = '-';
                break;
            case 3:
                hasil = bil1 * bil2;
                operasi = '*';
                break;
            case 4:
                if (bil2 != 0) {
                    hasil = bil1 / bil2;
                    operasi = '/';
                } else {
                    cout << "Error: Pembagian dengan nol tidak diperbolehkan." << endl;
                    continue; // Kembali ke awal loop jika terjadi pembagian dengan nol
                }
                break;
            default:
                cout << "Error: Pilihan tidak valid." << endl;
                continue; // Kembali ke awal loop jika pilihan tidak valid
        }

        // Menampilkan hasil
        cout << "Hasil dari " << bil1 << " " << operasi << " " << bil2 << " = " << hasil << endl;

        // Menanyakan apakah ingin menghitung lagi
        cout << "Ingin menghitung lagi? (y/n): ";
        cin >> lagi;

        cout << endl;
    } while (lagi == 'y' || lagi == 'Y');

    cout << "Terima kasih telah menggunakan kalkulator." << endl;
    return 0;
}

