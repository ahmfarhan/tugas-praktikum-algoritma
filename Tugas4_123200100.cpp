#include <iostream>
#include <string>
using namespace std;

int main(){
    int kali, pangkat;
    int pilihan;
    int n, m, m1, u, n1;
    int hasil;
    
    cout<<"Perkalian dan Perpangkatan"<<endl;
    cout<<"=========================="<<endl;
    cout<<"1. Perkalian"<<endl;
    cout<<"2. Perpangkatan"<<endl;
    cout<<"Pilih : ";
    cin>>pilihan;
    
    switch (pilihan){
		case 1 :
		cout << "Input angka N : " ; cin >> n ;
		cout << "Input angka M : " ; cin >> m ;
		cout << "Hasil " << n << " x " << m << endl;
		m1 = m;
		u = 0;
		while (u<=n){	
			u++ ;
			if(u<n){
			m1 = m + m1 ;
			cout << m << " + " ;
			}
			else if (u==n){
			cout<< m << " = " << m1 <<endl;
			cout << "=======Terima Kasih=======" << endl;
			}
			}
			break ;
		case 2 :
			cout << "Input angka N = "; cin >> n;
			cout << "Input angka M = "; cin >> m;
			cout << "Hasil " << n << " ^ " << m << endl;
			n1 = n ;
			u = 0;
			while (u<=m)
			{
			u++ ;
			if (u<m){
			n1 = n * n1;
			cout<< n << " x ";
			}
			else if (u==m){
			cout << n << " = " << n1 << endl;	
			cout << "=======Terima Kasih=======" << endl;
			}
		}
		    break ;
		default :
		cout << "Ramasuk!" << endl;
	}
    
}