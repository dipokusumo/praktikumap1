#include<iostream>

using namespace std;

void tambah_pecahan(int pembilang1, int penyebut1, int pembilang2, int penyebut2);
void kurang_pecahan(int pembilang1, int penyebut1, int pembilang2, int penyebut2);
void kali_pecahan(int pembilang1, int penyebut1, int pembilang2, int penyebut2);
void bagi_pecahan(int pembilang1, int penyebut1, int pembilang2, int penyebut2);
int fpb(int a, int b);
void sederhanakan_pecahan(int pembilang, int penyebut);

int main (){
	int menu, pembilang1, pembilang2, penyebut1, penyebut2;
	while (menu != 5){
	    cout << "\n\n=======================================\n";
		cout << "Menu kasus peccahan bilangan : " << endl;
		cout << "1. Penjumlahan 2 pecahan" << endl;
		cout << "2. Pengurangan 2 pecahan" << endl;
		cout << "3. Perkalian 2 pecahan" << endl;
		cout << "4. Pembagian 2 pecahan" << endl;
		cout << "5. Keluar" << endl;
		cout << "Input menu : ";
		cin >> menu;
		
		if (menu == 5) break;
		
		cout << endl << endl;
		cout << "Pembilang 1 = ";
		cin >> pembilang1;
		cout << "Penyebut 1 = ";
		cin >> penyebut1;
		cout << "Pembilang 2 = ";
		cin >> pembilang2;
		cout << "Penyebut 2 = ";
		cin >> penyebut2;
		
		if (menu == 1) tambah_pecahan(pembilang1, penyebut1, pembilang2, penyebut2);
	    else if (menu == 2) kurang_pecahan(pembilang1, penyebut1, pembilang2, penyebut2);
	    else if (menu == 3) kali_pecahan(pembilang1, penyebut1, pembilang2, penyebut2);
	    else if (menu == 4) bagi_pecahan(pembilang1, penyebut1, pembilang2, penyebut2);
	}
}

void tambah_pecahan(int pembilang1, int penyebut1, int pembilang2, int penyebut2){
    int pembilang3, penyebut3;
    penyebut3 = fpb(penyebut1, penyebut2);
    penyebut3 = (penyebut1 * penyebut2) / penyebut3;
    pembilang3 = (pembilang1) * (penyebut3 / penyebut1) + (pembilang2) * (penyebut3 / penyebut2);
    cout << "\n\nHasil: " << pembilang1 << '/' << penyebut1 << " + " << pembilang2 << '/' << penyebut2 << " = ";
    sederhanakan_pecahan(pembilang3, penyebut3);
}

void kurang_pecahan(int pembilang1, int penyebut1, int pembilang2, int penyebut2){
    int pembilang3, penyebut3;
    penyebut3 = fpb(penyebut1, penyebut2);
    penyebut3 = (penyebut1 * penyebut2) / penyebut3;
    pembilang3 = (pembilang1) * (penyebut3 / penyebut1) - (pembilang2) * (penyebut3 / penyebut2);
    cout << "\n\nHasil: " << pembilang1 << '/' << penyebut1 << " - " << pembilang2 << '/' << penyebut2 << " = ";
    sederhanakan_pecahan(pembilang3, penyebut3);
}

void kali_pecahan(int pembilang1, int penyebut1, int pembilang2, int penyebut2){
    int pembilang3, penyebut3;
    penyebut3 = penyebut1 * penyebut2;
    pembilang3 = pembilang1 * pembilang2;
    cout << "\n\nHasil: " << pembilang1 << '/' << penyebut1 << " * " << pembilang2 << '/' << penyebut2 << " = ";
    sederhanakan_pecahan(pembilang3, penyebut3);
}

void bagi_pecahan(int pembilang1, int penyebut1, int pembilang2, int penyebut2){
    int pembilang3, penyebut3;
    penyebut3 = penyebut1 * pembilang2;
    pembilang3 = pembilang1 * penyebut2;
    cout << "\n\nHasil: " << pembilang1 << '/' << penyebut1 << " / " << pembilang2 << '/' << penyebut2 << " = ";
    sederhanakan_pecahan(pembilang3, penyebut3);
}

int fpb(int a, int b){
    if (a == 0) return b;
    return fpb(b % a, a);
}

void sederhanakan_pecahan(int pembilang, int penyebut){
    int pemfaktor = fpb(pembilang, penyebut);
 
    penyebut = penyebut / pemfaktor;
    pembilang = pembilang / pemfaktor;
    
    cout << pembilang << '/' << penyebut;
}
