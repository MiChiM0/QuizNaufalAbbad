#include <iostream>

using namespace std;

 void hitungEk(double massa, double kecepatan) {
	double Ek = massa * (kecepatan * kecepatan);
	cout << "Energi Kinetiknya Adalah: " << Ek << " Joule" << endl;
}

int main() {
	
	double massa = 0, kecepatan = 0, Ek = 0;

	cout << "Menghitung energi kinetik! \n";
	cout << "Masukkan massa: ";
	cin >> massa;
	cout << "Masukkan Kecepatan: ";
	cin >> kecepatan;

	hitungEk(massa, kecepatan);

	return 0;
}
		
	
	
