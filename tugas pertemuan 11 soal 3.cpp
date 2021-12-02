#include <iostream> 

using namespace std;

struct Tanggal{
	int hari, bulan, tahun;
};

void cariNextDay(Tanggal tanggal);

string bulan[12]={"Januari", "Februari", "Maret", "April", "Mei", "Juni", "Juli", "Agustus", "September", "Oktober", "November", "Desember"};

int main(){
	Tanggal tanggal;
	char strip = '-';
	
	cout << "\n==================================================\n";
	cout << "            PROGRAM MENCARI NEXT DAY\n";
	cout << "               MENGGUNAKAN STRUCT\n";
	cout << "==================================================\n";
	
	cout << "Input tanggal dengan format dd-mm-yyyy: ";
	cin >> tanggal.hari >> strip >> tanggal.bulan >> strip >> tanggal.tahun;
	cout << "\nHari ini adalah tanggal " << tanggal.hari << " " << bulan[tanggal.bulan-1] << " " << tanggal.tahun <<endl;
	cariNextDay(tanggal);
	
	return 0;
}


void cariNextDay(Tanggal tanggal_besok){
	int max_hari[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	bool akhir_bulan = false;
	
	if (tanggal_besok.tahun % 4 == 0){
	    max_hari[1] = 29;
	}
	
	if(tanggal_besok.hari == max_hari[tanggal_besok.bulan-1]){
		tanggal_besok.hari = 1;
		++tanggal_besok.bulan;
		akhir_bulan = true;
	} else if (tanggal_besok.hari > max_hari[tanggal_besok.bulan-1]) {
	    cout << "Tanggal yang diinputkan tidak ada didalam kalender";
	    cout << "\n==================================================\n";
		return;
	} else {
		++tanggal_besok.hari;
	}

	if ((tanggal_besok.bulan > 12)  && akhir_bulan == true){
		tanggal_besok.bulan = 1;
		++tanggal_besok.tahun;
	}
	cout << "Besok adalah tanggal " << tanggal_besok.hari << " " << bulan[tanggal_besok.bulan-1] << " " << tanggal_besok.tahun <<endl;
	cout << "\n==================================================\n";
}
