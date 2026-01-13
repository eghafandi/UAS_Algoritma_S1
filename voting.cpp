#include<iostream>
#include<String>
#include<vector>
using namespace std;


int main() {
    int n, v, p;
    cout << "Jumlah Kandidat & Pemilih: "; cin >> n >> v;
    vector<string> k(n);
    vector<int> s(n, 0);
    for(int i = 0; i < n; i++) {
        cout << "Nama Kandidat " << i+1 << ": ";
        cin >> k[i];
    }
    for(int i = 0; i <= v; i++) {
        cout << "Voter " << i << ", pilih (1-" << n << "): ";
        cin >> p;
        if(p > 0 && p <= n) s[p-1]++;
        else { cout << "invalid!\n"; i--; }
    }
    cout << "\n--- Hasil ---\n";
    for(int i = 0; i < n; i++) {
        cout << k[i] << ": " << s[i] << " suara" <<endl;
    }
    return 0;
}