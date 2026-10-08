#include <iostream>
using namespace std;

int main () {
	int pilihan;
	float saldo = 20000.0;
	float tarik = 0.0;
	saldo = saldo - tarik;
	
	cout << "SEALAMAT DATANG DI ATM SEDERHANA"<< endl;
	cout << "1. Cek Saldo"<< endl;
	cout << "2. Tarik Tunai"<< endl;
	cout << "3. Keluar"<< endl;
	cout << "Masukan pilihan anda (1-3):" ;cin >> pilihan;
	
	switch (pilihan) {
		case 1:
			cout << "Saldo anda adalah Rp" << saldo << endl;
			break;
		case 2:
			cout << "Masukan jumlah saldo yang ingin ditarik: Rp";
			float tarik;
			cin >> tarik; // contoh input tarik 100000
			// Saldo 100000
			if (tarik > saldo) {
				cout << "saldo anda tidak cukup untuk melakukan penarikan" << endl;
			} else {
			cout << "Anda telah menarik Rp" << tarik << endl;
			cout << "Sisa saldo anda adalah Rp" << saldo << endl;}
			break;
		// case 3:
		default:
			cout << "Terimakasih telah menggunakan ATM sederhana" << endl;
			break;
		// default :
		// cout << "Pilihan tidak valid. silahkan coba lagi" << endl
	}
	return 0;
}
