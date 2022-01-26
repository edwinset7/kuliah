#include<iostream>
using namespace std;

void nama(){
	string nama[100];

    for(int i = 1; i<=5; i++){
        cout << "Masukkan nama ke-" << i << ": ";
        cin >> nama[i];
    }

    cout << endl << endl << "Berikut daftar nama mahasiswa di universitas Esgul" << endl;
    for(int i=1; i<=5; i++){
        cout << "nama ke-" << i <<  " adalah " << nama[i] << endl;
    }
    cout << endl << endl;
}

void nim(){
		string nim[100];

    for(int i = 1; i<=5; i++){
        cout << "Masukkan nim ke-" << i << ": ";
        cin >> nim[i];
    }

    cout << endl << endl << "Berikut daftar nim di universitas Esgul" << endl;
    for(int i=1; i<=5; i++){
        cout << "nim ke-" << i <<  " adalah " << nim[i] << endl;
    }
}

int main(){
	nama();
	nim();
    return 0;
}