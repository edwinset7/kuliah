#include <iostream>

using namespace std;

int main()
{
   int tahunLahir, tahunSekarang, umur;

   cout << "\t PROGRAM MENENTUKAN USIA BERDASARKAN TAHUN LAHIR \n\n";

   cout << " Masukkan Tahun Lahir Kamu : ";
   cin >> tahunLahir;

   cout << " Masukkan Tahun Sekarang   : ";
   cin >> tahunSekarang;

   umur = tahunSekarang - tahunLahir;

   cout << "\n Berarti Usia Anda sekarang adalah " << umur << " Tahun ";

}