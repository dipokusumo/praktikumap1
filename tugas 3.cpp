#include<iostream>

using namespace std;

int main(){
	string nama;
	int golongan,jam_masuk_kerja,jam_pulang_kerja,jam_kerja,total_gaji,lembur;
	cout << "Masukan Data" << endl;
	cout << "Nama Karyawan : ";
	cin >> nama;
	cout << "Golongan Karyawan : ";
	cin >> golongan;
	cout << "Jam Masuk Kerja : ";
	cin >> jam_masuk_kerja;
	cout << "Jam Pulang Kerja : ";
	cin >> jam_pulang_kerja;
	
	jam_kerja = (jam_pulang_kerja - jam_masuk_kerja)*30;
	
	lembur = 0;
	
	if (golongan == 1){
		if (jam_kerja > 150){
			lembur = (jam_kerja - 150)*10000;
		}
		total_gaji = 1000000 + lembur;
	}
	else if (golongan == 2){
		if (jam_kerja > 150){
			lembur = (jam_kerja - 150)*20000;
		}
		total_gaji = 2000000 + lembur;
	}
	else if (golongan == 3){
		if (jam_kerja > 150){
			lembur = (jam_kerja - 150)*30000;
		}
		total_gaji = 3000000 + lembur;
	}
	else if (golongan == 4){
		if (jam_kerja > 150){
			lembur = (jam_kerja - 150)*40000;
		}
		total_gaji = 4000000 + lembur;
	}
	else if (golongan == 5){
		if (jam_kerja > 150){
			lembur = (jam_kerja - 150)*50000;
		}
		total_gaji = 5000000 + lembur;
	}
	cout << endl << endl;
	cout << "Total gaji " << nama << " adalah " << total_gaji; 
	return 0;
}
