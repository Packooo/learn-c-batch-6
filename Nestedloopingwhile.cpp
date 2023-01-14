#include <iostream>
using namespace std;

int main(){
	int tinggi, baris, kolom;
	cout <<"Tinggi segitiga : ";
	cin << tinggi;
	cout << endl;
	baris = 1;
	while (baris <= tinggi){
		kolom = 1;
		while (kolom <= baris){
			cout <<"*";
			kolom ++;
		}
		cout << endl;
		baris++;
	}
}