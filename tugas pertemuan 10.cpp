#include <iostream>
#include<conio.h>

using namespace std;

void insertion_sort();
void maximum_sort();
void bubble_sort();
int main(){
	int menu;
	while (menu != 5){
		cout << "Menu Sorting : " << endl;
		cout << "2. Insertion Sort" << endl;
		cout << "3. Maximum Sort" << endl;
		cout << "4. Bubble Sort" << endl;
		cout << "5. Keluar" << endl << endl;
		cout << "Input menu : ";
		cin >> menu;
		if (menu == 2){
			insertion_sort();
		}
		else if (menu == 3){
			maximum_sort();
		}
		else if (menu == 4){
			bubble_sort();
		}
		else{
			cout << endl << "Terima kasih telah menggunakan menu sorting" << endl << endl;
		}
	}
}

void insertion_sort(){
	
	int i, j, k, N, temp, angka[N];
	cout<<"Masukkan Banyak Bilangan : ";
	cin>>N;for(i=1; i<N; i++){
		cout << "Angka ke-" << i << " : ";
		cin >> angka[i];
	}
    
	for(i=1; i<N; i++){
		temp = angka[i];
    	j=i-1;
		while((temp <= angka[j]) && (j>=1)){
			angka[j+1] = angka[j];
    		j--;
    	}
		if(temp >= angka[j])
    	angka[j+1] = temp;
    	else{
      		angka[j+1] = angka[j];
      		angka[j] = temp;
    	}
    	cout << endl;
    	for(k=0; k<N; k++)
      	cout << angka[k];
	}
  
	cout<<"\nData Setelah di urut : ";
	for(i=0; i<N; i++)
    cout << angka[i];
	getch();
  }
  
void maximum_sort(){
	
	int i, j, l, N, U, temp, Imaks, angka[N];
	
	cout<<"Masukkan Banyak Bilangan : ";
	cin>>N;for(i=0; i<N; i++){
		cout << "Angka ke-" << i+1 << " : ";
		cin >> angka[i];
	}
    
	U=N-1;
	for(i=0; i<=N-2; i++){
		Imaks = 0;
    	for(j=1; j<=U; j++){
			if(angka[j] > angka[Imaks])
			Imaks = j;
    	}
	temp = angka[U];
    angka[U] = angka[Imaks];
    angka[Imaks] = temp;
    U--;
    cout<<endl;
    for(l=0; l<N; l++)
	cout<<angka[l];
	}
	cout<<"\nData Setelah di urut : ";
	for(i=0; i<N; i++)
    cout << angka[i];
	getch();
}

void bubble_sort(){
	int i, j, k, N, angka[N];
	int temp;
	bool tukar;
	
	cout<<"Masukkan Banyak Bilangan : ";
	cin>>N;for(i=0; i<N; i++){
		cout << "Angka ke-" << i+1 << " : ";
		cin >> angka[i];
	}
    
	i=0;
	tukar = true;
	while ((i<=N-2) && (tukar)){
    	tukar=false;
    	for(j=N-1; j>=i+1; j--){
			if(angka[j] > angka[j-1]){
				temp = angka[j];
				angka[j] = angka[j-1];
				angka[j-1] = temp;
				tukar = true;
				cout<<endl;
				for(k=0; k<N; k++)
				cout << angka[k];
			}
		}
    i++;
	}
	
	cout<<"\nData Setelah di urut : ";
	for(i=0; i<N; i++)
    cout << angka[i];
    getch ();
}
