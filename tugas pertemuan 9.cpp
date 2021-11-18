#include <iostream>

using namespace std;

int main(){
	int N;
	int angka[N];
	int sum=0;
	float rata2;
		
	cout << "Berapa angka yang akan diinput : ";
	cin >> N;
	
	for (int i=0; i<N; i++){
        cout << "\nAngka ke-" << i+1 << ": ";
        cin >> angka[i];
    }
    
    cout << "\nAdakah nilai yang sama : ";
    for (int i=0; i<N; i++){
    	for (int j=i+1; j<N; j++){
    		if (angka[i] == angka[j]){
    			cout << angka[i] << endl << endl;
			}
		}
	}
	
	for (int i=0; i<N; i++){
		cout << angka[i] << ", ";
	}
		
	for (int i=0; i<N; i++){
		sum = sum+angka[i];
		rata2 = sum/N;
	}
		
	cout << "\n\nTotal angka : ";
	cout << sum;
	cout << "\n\nRata-rata angka : ";
	cout << rata2;
	
	return 0;
}
