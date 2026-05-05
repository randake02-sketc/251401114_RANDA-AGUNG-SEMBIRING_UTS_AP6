#include <iostream>  //  Library input output standar
#include <cstdlib>   //  Library buat system("cls"), buat bersihin layar
using namespace std; //  supaya tidak perlu ngetik std::

long long fibo(int n)
{ // Fungsi hitung Fibonacci, return long long
    if (n <= 1)
        return n;           // Base case: kalo n=0 return 0, n=1 return 1
    long long a = 0, b = 1; // Inisialisasi 2 suku pertama: 0 dan 1
    for (int i = 2; i <= n; i++)
    {                           // Loop dari suku ke-2 sampe ke-n
        long long temp = a + b; // Hitung suku sekarang = a + b, simpen di temp
        a = b;                  // Geser: a jadi nilai b yg lama
        b = temp;               // Geser: b jadi nilai temp / suku yg baru dihitung
    } // Selesai loop kalo i udah lewat n
    return b; // Return b karena b selalu nyimpen suku terakhir
} // Tutup fungsi fibo

int main()
{                                          // Fungsi utama
    system("cls");                         // Bersihin layar console biar rapi
    int n;                                 // Variabel buat nampung indeks input
    cout << "Masukkan indeks Fibonacci: "; // Kasih tau user suruh input apa
    cin >> n;                              // Baca angka yg diketik user

    system("cls");                                       // Bersihin layar lagi sebelum nampilin hasil
    cout << "Suku ke-" << n << " = " << fibo(n) << endl; // Print hasil: "Suku ke-n = nilai"

    return 0; // program selesai
} // 22. Tutup main