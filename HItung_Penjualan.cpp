#include <iostream>
using namespace std;

int main(){
  
  // deklasikan variabel
	int i, jumlah, total, harga = 0, hrg, diskon, potongan;
	string nama;
	char x ;
	
	cout<<"\t\t\tPROGRAM MENGHITUNG NILAI dan IPK MAHASISWA\n\n\n";
  
  // Perulangan awal
	awal:
  
  // Inputan oleh user
	cout << "Masukkan Jumlah Barang : "; cin >> jumlah;
	cout << endl;
  
  // perulangan barang
	for(i=1; i<=jumlah; i++){
		cout << "Harga Barang Ke-" << i << ": "; cin >> hrg;
		harga = harga+hrg;
	    }
  
  // logika program
		if(harga > 500){
			diskon = harga - (harga*10/100);			
		}
		else if(harga >= 200 && harga <= 500){
			diskon = harga - (harga*5/100);
		}
		else {
			diskon = harga;
		}
		
  // besar harga diskon
	potongan = harga-diskon;
		
  //tampilkan output 
	cout<< endl;
	cout<< "==============================" << endl;	
	cout<< "Total Harga \t : Rp. " << harga << endl;
	cout<< "Diskon \t\t : Rp. "<< potongan << endl;
	cout<< "Harga Diskon \t : Rp. " << diskon << endl;
	
    cout<<" "<<endl;
	
  // perulangan program 
	cout<<"Hitung Lagi [Y/N] ? "; cin>> x;
	if (x == 'y' || x == 'Y'){
		goto awal;
	}
	else if (x == 'N' || x == 'n'){
		cout<< "Terima Kasih..." << endl;
		cout<<" "<<endl;
		cout<<"\nDevelop @mahendrarendi";
		
	}
}
