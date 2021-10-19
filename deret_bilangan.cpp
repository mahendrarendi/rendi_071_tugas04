#include <iostream>

using namespace std;
 
int main(){
    int a=0, b, c, jumlah=0, i, n;
    char x;
     
    cout<<"MENGHITUNG JUMLAH DERET BILANGAN ARITMATIKA"<<endl;
    do{
    cout<<"Masukkan Nilai Awal (a) : ";
    cin>>a;
    cout<<"Masukkan Beda (b) : ";
    cin>>b;
    cout<<"Masukkan jumlah sampai deret ke-n : ";
    cin>>n;
     
    cout<<"Deret ke-"<<n<<" : ";
    cout<<a<<",";
    jumlah=jumlah+a; 
    for(i=0; i<n-1; i++){
             c=a+b;
             a=c;
             cout<<c<<",";
             jumlah=jumlah+c;                      
    }
     
    cout<<"\nJumlah deret ke-"<<n<<" : ";
    cout<<jumlah; 
    cout<<endl;
    
    cout<<"\Lagi ? [Y/T] : "; cin>>x;
    cout<<endl;
    } while(x == 'y' || x == 'Y');
    cout<<"exit !"<<endl;
    cout<<" "<<endl;
    cout<<"\n develop @mahendrarendi";
     
    return 0;    
}
