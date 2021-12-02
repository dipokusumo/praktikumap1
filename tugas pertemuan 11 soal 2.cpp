#include<iostream>
#include<conio.h>

using namespace std;

struct Mahasiswa{
    char Nama[20], Nim[10], Index;
    float Nilai;
};

struct Mahasiswa mahasiswa[5];

void baca_data();
void tampil_data();
void tampil_data_tertinggi();
char get_index(float nilai);

bool data_kosong = true;

int main (){
    int menu = 0;
    
    while(menu != 4) {
        system("clear");
        cout << "=====================================\n";
        cout << "      Pengelola Data Mahasiswa\n";
        cout << "   Kelas ALGORITMA & PEMROGRAMAN I\n";
        cout << "=====================================\n";
        cout << "1. Input data\n";
        cout << "2. Lihat data\n";
        cout << "3. Lihat nilai tertinggi\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu: ";
        cin >> menu;
        
        if(menu == 1) baca_data();
        else if(menu == 2) tampil_data();
        else if(menu == 3) tampil_data_tertinggi();
    }
}

void baca_data() {
    float nilai_uts = 0, nilai_uas = 0, nilai_tugas = 0;
    
    system("clear");
    cout << "=====================================\n";
    cout << "         Input Data Mahasiswa\n";
    cout << "=====================================\n";
    
    for (int i=0; i<5; i++){
        cout << "\nMahasiswa ke-" << i+1 << endl;
        cout << "Nama    : "; cin >> mahasiswa[i].Nama;
        cout << "NIM     : "; cin >> mahasiswa[i].Nim;
        cout << "Nilai\n";
        cout << "  UTS   : "; cin >> nilai_uts;
        cout << "  UAS   : "; cin >> nilai_uas;
        cout << "  Tugas : "; cin >> nilai_tugas;
        
        mahasiswa[i].Nilai = (nilai_uts + nilai_uas + nilai_tugas) / 3;
        mahasiswa[i].Index = get_index(mahasiswa[i].Nilai);
    }
    data_kosong = false;
}

void tampil_data() {
    system ("clear");
    cout << "=====================================\n";
    cout << "           Data Mahasiswa\n";
    cout << "=====================================\n";
    if (data_kosong){
        cout << "\nBelum ada data mahasiswa, \nmohon input data terlebih dahulu!";
    } else {
        for (int i=0; i<5; i++){
            cout << "\nMahasiswa ke-" << i+1 << endl;
            cout << "Nama    : " << mahasiswa[i].Nama << endl;
            cout << "NIM     : " << mahasiswa[i].Nim << endl;
            cout << "Nilai   : " << mahasiswa[i].Nilai << endl;
            cout << "Index   : " << mahasiswa[i].Index << endl;
        }
    }
    
    cin.ignore();
    cin.get();
}

void tampil_data_tertinggi() {
    Mahasiswa mahasiswa_tertinggi = mahasiswa[0];
    
    for (int i=0; i<5; i++){
        if (mahasiswa[i].Nilai > mahasiswa_tertinggi.Nilai){
            mahasiswa_tertinggi = mahasiswa[i];
        }
    }
    
    system ("clear");
    cout << "=====================================\n";
    cout << "         Mahasiswa Tertinggi\n";
    cout << "=====================================\n";
    if (data_kosong){
        cout << "\nBelum ada data mahasiswa, \nmohon input data terlebih dahulu!";
    } else {
        cout << "Nama    : " << mahasiswa_tertinggi.Nama << endl;
        cout << "NIM     : " << mahasiswa_tertinggi.Nim << endl;
        cout << "Nilai   : " << mahasiswa_tertinggi.Nilai << endl;
        cout << "Index   : " << mahasiswa_tertinggi.Index << endl;
    }
    
    cin.ignore();
    cin.get();
}

char get_index(float nilai){
    if (nilai > 90) return 'A';
    if (nilai >= 80) return 'B';
    if (nilai >= 70) return 'C';
    return 'D';
}
