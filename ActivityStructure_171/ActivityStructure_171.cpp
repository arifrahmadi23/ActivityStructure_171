#include <iostream>

using namespace std;

struct Mahasiswa {
	string nim;
	string nama;
	string alamat;
	int umur;
};

int main()
{
	Mahasiswa mhs1, mhs2;

	mhs1.nim = "20210140011";
	mhs1.nama = "Tasya";
	mhs1.alamat = "Semarang";
	mhs1.umur = 20;

	cout << "Masukkan NIM : ";
	cin >> mhs2.nim;
	cout << "Masukkan Nama : ";
	cin >> mhs2.nama;
	cout << "Masukkan Alamat : ";
	cin >> mhs2.alamat;
	cout << "Masukkan Umur : ";
	cin >> mhs2.umur;


}