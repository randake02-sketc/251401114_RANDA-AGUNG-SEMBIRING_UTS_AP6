#include <iostream>  // Input output
#include <cmath>     // Buat pow()
#include <cstdlib>   //Buat system("cls")
using namespace std; // Shortcut std

int main()
{                               // Start program
    system("cls");              // Bersihin layar
    int n;                      // Variabel input
    cout << "Masukkan angka: "; // Kasih instruksi
    cin >> n;                   // Baca input user

    system("cls");                     // Bersihin layar sebelum tampilin hasil
    int asli = n, temp = n, digit = 0; // asli=backup, temp=buat proses, digit=hitung jumlah digit
    while (temp != 0)
    {               // Loop hitung digit
        temp /= 10; // Buang satuan
        digit++;    // Counter digit nambah
    } // digit sekarang = jumlah digit

    temp = n;                              // Balikin temp ke n lagi
    long long total = 0;                   // Total hasil pangkat, long long biar nggak overflow
    cout << "Perhitungan: " << n << " = "; // Print header
    while (temp != 0)
    {                                // Loop ambil digit satu2
        int d = temp % 10;           // d = digit terakhir
        long long p = pow(d, digit); // p = d pangkat jumlah digit
        total += p;                  // Tambahin ke total
        cout << d << "^" << digit;   // Print "3^3"
        temp /= 10;                  // Buang digit yg udah dipake
        if (temp != 0)
            cout << " + "; // beri tanda+ kalo belum digit terakhir
    } // tutup loop
    cout << " = " << total << endl
         << endl; // Print total + enter 2x

    if (total == asli)
        cout << "Hasil: " << n << " adalah Armstrong Number" << endl; // Kalo sama = Armstrong
    else
        cout << "Hasil: " << n << " bukan Armstrong Number" << endl; // Kalo beda = bukan

    return 0; // Selesai
} // Tutup program