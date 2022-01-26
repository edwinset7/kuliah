#include<iostream>
using namespace std;

int main(){
    string nama[100];
    string nim[100];

    for(int i = 1; i<=5; i++){
        cout << "Masukkan Nama ke-" << i << ": ";
        cin >> nama[i];
        cout << "Masukkan Nim ke-" << i <<  ": ";
        cin >> nim[i];
    }

    cout << endl << endl << "Berikut daftar nama dan nim mahasiswa di universitas Esgul " << endl;
    for(int i=1; i<=5; i++){
        cout << "Nama : " << nama[i] << endl;
        cout << "Nim  : " << nim[i] << endl << endl;
    }
    
    for(int i=1; i<=5;i++){
    	cout << "Lokasi memory string nama " << "ke-" << i << " adalah " <<&nama[i] << endl;
    	cout << "Lokasi memory string nim  " << "ke-" << i << " adalah " <<&nim[i] << endl;
	}

    return 0;
}