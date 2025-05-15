#include <iostream>
using namespace std;

void aplikasiHitung() {
    double a, b;
    char operasi;
    
    cout << "\n== Aplikasi Hitung Sederhana ==" << endl;
    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Pilih operasi (+, -, *, /): ";
    cin >> operasi;
    cout << "Masukkan angka kedua: ";
    cin >> b;

    switch (operasi) {
        case '+':
            cout << "Hasil: " << (a + b) << endl;
            break;
        case '-':
            cout << "Hasil: " << (a - b) << endl;
            break;
        case '*':
            cout << "Hasil: " << (a * b) << endl;
            break;
        case '/':
            if (b != 0)
                cout << "Hasil: " << (a / b) << endl;
            else
                cout << "Error: Pembagian dengan nol tidak diperbolehkan!" << endl;
            break;
        default:
            cout << "Operasi tidak dikenali." << endl;
    }

    cout << endl;
}

void tampilkanMenu() {
    cout << "=== MENU UTAMA ===" << endl;
    cout << "1. Beranda (Aplikasi Hitung)" << endl;
    cout << "2. Tentang" << endl;
    cout << "3. Layanan" << endl;
    cout << "4. Kontak" << endl;
    cout << "5. Keluar" << endl;
    cout << "Pilih menu (1-5): ";
}

void prosesPilihan(int pilihan) {
    switch (pilihan) {
        case 1:
            aplikasiHitung();
            break;
        case 2:
            cout << ">> Tentang: Program ini dibuat sebagai contoh menu UI berbasis teks dengan fitur kalkulator." << endl;
            break;
        case 3:
            cout << ">> Layanan: Saat ini hanya tersedia fitur kalkulator sederhana." << endl;
            break;
        case 4:
            cout << ">> Kontak: Hubungi kami di email@example.com" << endl;
            break;
        case 5:
            cout << ">> Keluar dari program. Terima kasih!" << endl;
            break;
        default:
            cout << ">> Pilihan tidak valid. Silakan coba lagi." << endl;
    }
}

int main() {
    int pilihan;
    do {
        tampilkanMenu();
        cin >> pilihan;
        prosesPilihan(pilihan);
        cout << endl;
    } while (pilihan != 5);

    return 0;
}