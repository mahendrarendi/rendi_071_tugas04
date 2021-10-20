#include <iostream>

using namespace std;
 
int main(){
    int a=3, b=4, c, jumlah=0, i, n;
    char x;
     
    cout<<"MENGHITUNG JUMLAH DERET"<<endl;
    cout<<" "<<endl;
    cout<<"Nilai Awal (a) = 3 ; Beda (b) = 4"<<endl;
    cout<<"Rumus =>  Sn = n/2(2a+(n-1)b) ";
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<"Masukkan Deret ke-n : ";
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

    cout<<"\ndevelop @mahendrarendi";
     
    return 0;    
}
