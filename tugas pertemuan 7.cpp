#include <iostream>
#include <string>

using namespace std;

int main(){
    cout << "Nomor 1\n\n";
    
    for (int i=0; i<5; i++){
        for (int j=0; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    
    
    cout << "\n\nNomor 2\n\n";
    
    float S = 0;
    float pembagi = 0;
    
    for(int i=1; i<=1000; i++){
        pembagi++;
        if (i%2==1){
            S += (1/pembagi);
        } else {
            S -= (1/pembagi);
        }
    }
    cout << "Hasil = " << S;
    
    
    cout << "\n\nNomor 3\n\n";
    
    int n, hasil = 1;
    cout << "Input nilai n : ";
    cin >> n;
    
    for (int i=n; i>=1; i--){
        hasil = hasil * i;
    }
    cout << "\nHasil : " << hasil;
    
    
    cout << "\n\nNomor 4\n\n";
    
    char karakter;
    for (int i=0; i<26; i++){
        karakter = 'A';
        karakter += i;
        for (int j=26-i; j>0; j--){
            cout << karakter << " ";
            karakter++;
        }
        cout << endl;
    }
    
    
    return 0;
}
