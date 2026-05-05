#include <iostream>  // Library buat cin, cout
using namespace std; // Biar nggak perlu nulis std::cin, std::cout

int main()
{                 // Fungsi utama, program jalan mulai dari sini
    int angka[5]; // Deklarasi array ukuran 5 buat nampung 5 angka input

    // Bagian input 5 angka dari user
    for (int i = 0; i < 5; i++)
    {                    // Loop dari i=0 sampe i=4, total 5x pengulangan
        cin >> angka[i]; // Baca angka dari keyboard, simpen ke array indeks ke-i
    } // Selesai input, sekarang array udah keisi 5 angka

    // Bagian output dibalik urutannya
    for (int i = 4; i >= 0; i--)
    {                     // Loop mundur dari indeks 4 ke 0, buat ngebalik
        cout << angka[i]; // Print isi array di indeks ke-i
        if (i > 0)
            cout << " "; // Kasih spasi kalo belum angka terakhir, biar rapi
    } // Selesai print semua angka kebalik

    return 0; // Program selesai
} // Tutup fungsi main