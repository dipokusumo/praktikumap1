#include <iostream>

using namespace std;


int saldo = 10000000;
void cetak_saldo();
void penarikan();
void penambahan();
int main(){
	int menu;
	while (menu != 4){
		cout << "Menu ATM BANK PINTAR : " << endl;
		cout << "1. Cek Saldo" << endl;
		cout << "2. Penarikan" << endl;
		cout << "3. Penambahan (Isi Saldo)" << endl;
		cout << "4. Keluar" << endl << endl;
		cout << "Input menu : ";
		cin >> menu;
		if (menu == 1){
			cetak_saldo();
		}
		else if (menu == 2){
			penarikan();
		}
		else if (menu == 3){
			penambahan();
		}
		else{
			cout << endl << "Terima Kasih Telah Menggunakan Layanan ATM Bank Pintar" << endl << endl;
		}
	}
}
void cetak_saldo(){
	cout << endl << "Sisa Saldo Anda adalah : Rp. ";
	cout << saldo << endl << endl;
}
void penarikan(){
	int tarik;
	cout << endl << "Berapa Saldo yang Ingin Anda Tarik : Rp. ";
	cin >> tarik;
	if (tarik > saldo){
		cout << endl << "Saldo Anda Tidak Mencukupi" << endl << endl;
	}
	else {
		saldo = saldo - tarik;
		cout << endl << "Anda Berhasil Menarik Rp. " << tarik << endl << endl;
		cout << "Sisa Saldo Anda adalah Sebesar Rp. " << saldo << endl << endl;
	}
}
void penambahan(){
	int isi_saldo;
	cout << endl << "Berapa Saldo yang Ingin Anda Tambahkan : Rp. ";
	cin >> isi_saldo;
	saldo = saldo + isi_saldo;
	cout << endl << "Saldo Berhasil Ditambahkan" << endl << endl;
	cout << "Saldo Anda Sekarang : Rp. ";
	cout << saldo << endl << endl;
	}
