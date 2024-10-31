#include <iostream>

using namespace std;

int main() {

	int hargaApel = 0, hargaJeruk = 0, hargaSemangka = 0;
	double beratApel = 0, beratJeruk = 0, beratSemangka = 0;
	double totalBerat = 0, totalHarga = 0, pembayaran = 0;
	int hargaApelPerkilo = 24000, hargaJerukPerkilo = 32500, hargaSemangkaPerkilo = 8000;

	cout << "Masukkan berat apel (Kg): ";
	cin >> beratApel;
	hargaApel = hargaApelPerkilo * beratApel;

	cout << "Masukkan berat jeruk (kg): ";
	cin >> beratJeruk;
	hargaJeruk = hargaJerukPerkilo * beratJeruk;

	cout << "Masukkan berat Semangka (Kg): ";
	cin >> beratSemangka;
	hargaSemangka = hargaSemangkaPerkilo * beratSemangka;

	totalBerat = beratApel + beratJeruk + beratSemangka;
	totalHarga = hargaApel + hargaJeruk + hargaSemangka;

	if (totalBerat > 10) {
		pembayaran = totalHarga - totalHarga * (5) / 100;
		cout << "total pembayarannya: Rp." << pembayaran;
	}
	else if (totalBerat > 8) {
		pembayaran = totalHarga - totalHarga * (2) / 100;
		cout << "total pembayarannya: Rp." << pembayaran;
	}
	else if (totalBerat < 8) {
		pembayaran = totalHarga;
		cout << "total pembayarannya: Rp." << pembayaran;
	}

	return 0;
}