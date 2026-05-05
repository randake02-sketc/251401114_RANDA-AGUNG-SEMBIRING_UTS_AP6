#include <iostream>  // Library untuk input/output
#include <cstdlib>   // Library untuk membersihkan output
using namespace std; // untuk efisiesi agar tidak selalu mengetik std::cin, std::cout

int fpb(int a, int b) // Deklarasi fungsi fpb
{
    while (b != 0) // Loop selama b belum 0
    {
        int temp = b; // Simpan nilai b ke variabel
        b = a % b;    // b diisi sisa a dibagi b
        a = temp;     // a diisi nilai b yang lama dari variabel temp
    }
    return a; // jika b sudah 0, return a sebagai hasil fpb
}

int main() // fungdi utama program
{
    system("cls");      // sistem membersihkan outout
    int angka1, angka2; // deklarasi 2 variabel untuk menampung input user

    cout << "Input: ";       // Tampilin teks input
    cin >> angka1 >> angka2; // baca 2 angka dari keyboard, kemudian disimpan ke angka1 & angka2

    if (angka1 < 0)
        angka1 = -angka1; // jika angka1 negatif, kali -1 supaya positif
    if (angka2 < 0)
        angka2 = -angka2; // jika angka2 negatif, kali -1 supaya positif

    int hasil = fpb(angka1, angka2); // panggil fungsi fpb, hasilnya simpan ke variabel hasil

    cout << "Output: " << hasil << endl; // tampilkan teks "output"

    return 0; // sistem program selesai
}