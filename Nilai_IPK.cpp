#include <iostream>
using namespace std;

// deklarasi variabel
struct nilai
{
int nim;
char nama[20];
int nilai_tugas;
int nilai_uts;
int nilai_uas;
int nilai_akhir;
char nilai_huruf;
};
int main()
{
nilai nil[5];
int i, data;

  //Melakukan perulangan untuk jumlah mahasiswa
cout<<"\t\t\tPROGRAM MENGHITUNG NILAI dan IPK MAHASISWA\n\n\n";
cout<<"Jumlah Mahasiswa = ";cin>>data;
for(i=0; i<data; i++)
{
cout<<"\n====================================================="<<endl<<endl;
  
  // menampilkan data inputan oleh user
cout<<"Nama \t\t: ";cin>>nil[i].nama;
cout<<"NIM \t\t: ";cin>>nil[i].nim;
cout<<"Nilai Tugas \t: ";cin>>nil[i].nilai_tugas;
cout<<"Nilai UTS \t: ";cin>>nil[i].nilai_uts;
cout<<"Nilai UAS \t: ";cin>>nil[i].nilai_uas;
  
  //logika program
nil[i].nilai_akhir=(nil[i].nilai_tugas*20/100)+(nil[i].nilai_uts*35/100)+(nil[i].nilai_uas*45/100);
  
  // kondisi dan statement 
if(nil[i].nilai_akhir>85&&nil[i].nilai_akhir<=100)

{
nil[i].nilai_huruf='A';
}
else if(nil[i].nilai_akhir>70&&nil[i].nilai_akhir<=85)
{
nil[i].nilai_huruf='B';
}
else if(nil[i].nilai_akhir>55&&nil[i].nilai_akhir<=70)
{
nil[i].nilai_huruf='C';
}
else if(nil[i].nilai_akhir>40&&nil[i].nilai_akhir<=55)
{
nil[i].nilai_huruf='D';
}
else
{
nil[i].nilai_huruf='E';
}
cout<<endl;
}
  
  // Menampilkan hasil program 

cout<<"Hasil Nilai Akhir dan IPK\n"<<endl;
for(i=0; i<data; i++)
{
cout<<"\n====================================================="<<endl<<endl;
cout<<"Nama \t\t: "<<nil[i].nama<<endl;
cout<<"NIM \t\t: "<<nil[i].nim<<endl;
cout<<"Nilai Tugas \t: "<<nil[i].nilai_tugas<<endl;
cout<<"Nilai UTS \t: "<<nil[i].nilai_uts<<endl;
cout<<"Nilai UAS \t: "<<nil[i].nilai_uas<<endl;
cout<<"Nilai Akhir \t: "<<nil[i].nilai_akhir<<endl;
cout<<"IPK \t\t: "<<nil[i].nilai_huruf<<endl;
}
}
