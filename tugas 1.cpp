#include <iostream>

using namespace std;

int main() {
	float nilai_tugas,nilai_uts,nilai_uas,nilai_rata_rata;
	
	cout << "Soal 1" << endl;
	cout << "nilai tugas = ";
	cin >> nilai_tugas;
	cout << "nilai uts = ";
	cin >> nilai_uts;
	cout << "nilai uas = ";
	cin >> nilai_uas;
	
	nilai_rata_rata = (nilai_tugas + nilai_uts + nilai_uas)/3;
	
	cout << " nilai tugas = " << nilai_tugas << endl;
	cout << " nilai uts = " << nilai_uts << endl;
	cout << " nilai uas = " << nilai_uas << endl;
	cout << " nilai rata rata = " << nilai_rata_rata << endl << endl;
	
	float jarak,waktu,kecepatan;
	
	jarak = 750;
	waktu = 20;
	
	kecepatan = jarak/waktu;
	
	cout << "Soal 2" << endl;
	cout << "jarak = " << jarak << " km" << endl;
	cout << "waktu = " << waktu << " jam" << endl;
	cout << "kecepatan = " << kecepatan << " km/jam" << endl;
	return 0;
}
