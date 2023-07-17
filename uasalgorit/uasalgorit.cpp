#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	int rollNumber;
	string nama;
	Node* next;

};

class CircularLinkedList {
private:
	Node* LAST;
public:
	CircularLinkedList() {
		LAST = NULL;
	}
	void tambahMahasiswa();
	bool listEmpty();
	void tampilkanSemuaMahasiswa();
	void algorithmacariMahasiswaByNIM();
	void algorithmaSortByTahunMasuk();

};
void CircularLinkedList::tambahMahasiswa()
{
	const int MAX_MAHASISWA = 1;
	int NIM[MAX_MAHASISWA];
	string nama[MAX_MAHASISWA];
	string jurusan[MAX_MAHASISWA];
	int tahunMasuk[MAX_MAHASISWA];
	int jumlahMahasiswa = 0;

	if (jumlahMahasiswa < MAX_MAHASISWA) {
		cout << "========== TAMBAH MAHASISWA ==========" << endl;
		cout << "NIM : ";
		cin >> NIM[jumlahMahasiswa];
		cin.ignore();
		cout << "Nama : ";
		getline(cin, nama[jumlahMahasiswa]);
		cout << "Jurusan : ";
		getline(cin, jurusan[jumlahMahasiswa]);
		cout << "Tahun Masuk: ";
		cin >> tahunMasuk[jumlahMahasiswa];
		cin.ignore();
		jumlahMahasiswa++;
		cout << "Mahasiswa berhasil ditambahkan!" << endl;
	}
	else {
		cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
	}
};
bool CircularLinkedList::listEmpty() {
	return LAST == NULL;
}
void CircularLinkedList::tampilkanSemuaMahasiswa() {
	if (listEmpty()) {
		cout << "\nList is empty\n";
	}
	else {
		cout << "\nRecords in the list are:\n";
		const int MAX_MAHASISWA = 1;
		string nama[MAX_MAHASISWA];
		int jumlahMahasiswa = 0;

	}
};
void CircularLinkedList::algorithmacariMahasiswaByNIM() {};
void CircularLinkedList::algorithmaSortByTahunMasuk() {
	if (listEmpty()) {
		cout << "\nList is empty\n";
	}
	else {
		cout << "\nRecords in the list are:\n";
		Node* currentNode = LAST->next;
		while (currentNode != LAST) {
			cout << currentNode->rollNumber << " " << currentNode->nama << endl;
			currentNode = currentNode->next;
		}
		cout << LAST->rollNumber << " " << LAST->nama << endl;
	}
}

int main() {
	CircularLinkedList obj;
	int rollno;
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			obj.tambahMahasiswa();
			break;
		case 2:
			obj.tampilkanSemuaMahasiswa();
			break;
		case 3:
			obj.algorithmacariMahasiswaByNIM();
			break;
		case 4:
			obj.algorithmaSortByTahunMasuk();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}
//2. circularlinkedlist
//3.  perbedaanya kalo stack proses dimana memasukkan prosesnya hanya bisa dimasukkan melalui satu jalan yakni diakhir yang disebut top, dan ketika memasukkannya maka stack harus melalui top tersebut
//    Queue proses dimana proses memasukkan element melalui akhir(end) dan ketika menghapusnya melalui depan, memasukkannya pada queue disebut rear dan manghapusnya disebut front. sudah sangat jelas perbedaan diantara kedua program tersebut.
//4.  jika kita ingin mengubah program yang bisa mengembalikan(undo) pada program maka stack program yang cocok digunakan, karena menggunkan LIFO dimaka data yang kita masukan terakhir, bisa kita keluaran juga
//5 a. 5 kedalamannya
//     
//5 b. in    salah(20,10,5,1,25,22,12,15,8,25,36,30,28,40,38,48,45,50)
//     preorder benar
/* post    salah(20, 22, 10, 13, 15, 5, 8, 1, 36, 30, 40, 28, 38, 45, 48, 50, 25*/