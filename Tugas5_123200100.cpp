#include <iostream>
  
using namespace std;
  
int main() {
    int i,j,n,m;
    int pil;
    
    cout<<"Gambar Bangun Datar ============"<<endl;
    cout<<"1. Kotak Bolong \n2. Segitiga"<<endl;
    cout<<"Pilih : "; cin>>pil;
    
    switch(pil){
        case 1:
 
        cout << "Masukkan Panjang : ";
        cin >> m;
        cout << "Masukkan Lebar  : ";
        cin>> n;
 
        for (i=1;i<=n;i++) {
            for (j=1;j<=m;j++){
                if(j>1 && j<m && i>1 && i<n){
                cout<<"  ";
                }else{
                cout<<" *";
                }
            }
            cout << endl;
        }break;
        case 2:
 
        cout << "Tinggi : ";
        cin >> n;
 
        for (i=1;i<=n;i++) {
            int x=n;
            int y=i;
        
        for (j=1;j<=i;j++) {
            cout <<y<<" ";
            x--;
            y=y+x;
        }
        cout << endl;
        }break;
    }
    return 0;
}