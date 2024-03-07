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

	
		 