#include<iostream>
using namespace std;

int main() {
    string tipe[] = {"Standard", "Executive", "Deluxe"};
    int harga[] = {300000, 600000, 1000000}, status[] = {1, 1, 1,};
    int pil, malam;
    char ulang;

    do {
        system("cls");
        cout << "=== Hotel Magnolia ===\n";
        for (int i = 0; i < 3; i++) {
            cout << i + 1 << ". " << tipe[i] << " - Rp" << harga[i];
            cout << (status[i] ? " [Tersedia]\n" : " [Penuh]\n");
        }

        cout << "\nPilih No Kamar:  "; cin >> pil;

        if (pil >= 1 && pil <= 3 && status[pil - 1]) {
            cout << "Berapa Malam: "; cin >> malam;
            status[pil - 1] = 0;

            cout << "\n--- Nota Pembayaran ---" << endl;
            cout << "Tipe  : " << tipe[pil - 1] << endl;
            cout << "Total : Rp" << (long)harga[pil - 1] * malam << endl; 
        } else{
            cout << "\nKamar Tidak Tersedia!" << endl;
        }
        cout << "\nPesan Lagi? (y/n): "; cin >> ulang;
    }while (ulang == 'y' || ulang == 'Y');
    
    cout << "\nTerima Kasih!" <<endl;
    return 0;
}