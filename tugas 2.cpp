#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int value_after_3_years = 56700000;
    float increment = 0.06;
    int years = 3;
    float current_value_1, current_value_2;
    
    current_value_1 = value_after_3_years / pow((1 + increment), years);
    cout << "Soal 1 \nJumlah tabungan saat ini adalah (bunga per tahun): " << current_value_1 << endl << endl;

    current_value_2 = value_after_3_years / pow((1 + (increment/2)), years*2);
    cout << "Soal 2 \nJumlah tabungan saat ini adalah (bunga per semester): " << current_value_2;

    return 0;
}
