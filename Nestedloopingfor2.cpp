#include <iostream>
using namespace std;

int main(){
	int tinggi, baris, kolom;
	cout << "Masukan jumlah tinggi = ";
	cin >> tinggi;
	
	for(baris=1; baris<=tinggi; baris++){
		for(kolom=tinggi; kolom>=baris; kolom--){
			cout<<"*";
		}
		cout<<endl;
	}
	
}