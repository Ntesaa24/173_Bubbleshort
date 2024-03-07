// Bubbleshort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 


	int a[20];			// Deklarasi array a dengan ukuran 20 
	int n;				// Deklarasi variable n untuk menyimpan banyaknya elemen pada array 

	void input() {		// Procedure untuk input 
		while (true) {  // Looping 
			cout << "Masukan banyaknya elemen pada array : ";	// Output ke layar 
			cin >> n;	// Input dari pengguna 
			if (n <= 20) // Jika n kurang dari atau sama dengan 20 
				break;	// Jikan lebih dari loop 
			else {		// Jika nlebih dari 20 
				cout << "\Array dapat mempunyai maksimal 20 elemen. \n";	// Output ke layar 
			}
		}
		cout << endl;														// Output baris kosong 
		cout << "====================" << endl;								// Output ke layar 
		cout << "Masukan Elemen Array" << endl;								// Output ke layar 
		cout << "====================" << endl;								// Output ke layar 

		for (int i = 0; i < n; i++) {						// Looping dengan i dimulai dari 0 hingga n-1 
			cout << "Data ke" << (i + 1) << "; ";	// Output ke layar 
			cin >> a[1];						// input dari pengguna 
		}
	}

void display() {								// Prosedur untuk menampilkan hasil 
	cout << endl;								// Output baris kosong 
	cout << "===================" << endl;		// Output ke layar 
	cout << "Elemen Array yang telah tersusun" << endl; // Output ke layar 
	cout << "===================" << endl;		// Output ke layar 
	for (int j = 0; j < n; j++) {				// Looping dengan j dimulai dari 0 hingga n-1 
		cout << "Data Ke-" << j + 1 << ": ";
		cout << a[j] << endl;					// Output ke layar 
	}
			cout << endl;						// Output baris kosong 
}

void bubbleSortArray() {							//Prosedur untuk mengurutkan array dengan metode bubble sort 
	int pass = 1;									//Stop 1 

	for (pass; pass <= n - 1; pass++) { 			//Looping dengan 1 dimulai dari 1 hingga n-1 
		for (int j = 0; j <= n - 1 - pass; j++) {	// Looping dengan j dimulai dari 0 hingga n-1 
			if (a[j] > a[j + 1]) {					// Jika nilai pada a[j] lebih besar dari 0 hingga n-1 
				int temp = a[j];					//Simpan nilai a[j] ke variable sementara temp 
				a[j] = a[j + 1];					//Assign nilai a [j+1] ke a[j] 
				a[j + 1] = temp;					// Assign nilai temp 
			}
		}
	}
} 
