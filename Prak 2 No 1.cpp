#include <iostream>
using namespace std;

int main () {
	float totalBelanja, diskon, totalBayar;
	
	cout << "Masukan total belanja" << endl;
	cin >> totalBelanja;
	
	if (totalBelanja > 100000){
		diskon = totalBelanja * 10 / 100;
	} else if (totalBelanja > 5000000) {
		diskon = totalBelanja * 20 / 100;
	} else {
		diskon = 0;
	}
	totalBayar = totalBelanja - diskon;
	cout << "diskon : Rp" << diskon << endl;
	cout << "total bayar : Rp" << totalBayar << endl;
	return 0;
}
