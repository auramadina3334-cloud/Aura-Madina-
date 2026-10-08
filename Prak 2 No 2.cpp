#include <iostream>
using namespace std;

int main (){
	int pilihan ;
	int A = 5000;
	int B = 7000;
	int C = 1000;
	int Uang;
	
	cout << "MENU MINUMAN" << endl;
	cout << "1. Minuman jenis A = Rp" << A << endl ;
	cout << "2. Minuman jenis B = Rp" << B << endl ;
	cout << "3. Minuman jenis C = Rp" << C << endl ;
	cout << "Pilih jenis minuman :" << endl ;
	cin >> pilihan ;
	
	cout << "Masukan Jumlah Uang = Rp" ;
	cin >> Uang ;
	
	switch (pilihan) {
		case 1 :
			if (Uang < A) {
				cout << "Pembelian gagal" << endl;
			} else if (Uang > A) {
				float Total = Uang - A ;
				cout << "Sisa uang anda = Rp" << Total << endl;
				cout << "Anda berhasil membeli minuman" << endl;
			}
			break;
				case 2 :
			if (Uang < B) {
				cout << "Pembelian gagal" << endl;
			} else if (Uang > B) {
				float Total = Uang - B ;
				cout << "Sisa uang anda = Rp" << Total << endl;
				cout << "Anda berhasil membeli minuman" << endl;
			}
			break;
				case 3 :
			if (Uang < C) {
				cout << "Pembelian gagal" << endl;
			} else if (Uang > C) {
				float Total = Uang - C ;
				cout << "Sisa uang anda = Rp" << Total << endl;
				cout << "Anda berhasil membeli minuman" << endl;
			}
			break;
	}
	return 0;
}
