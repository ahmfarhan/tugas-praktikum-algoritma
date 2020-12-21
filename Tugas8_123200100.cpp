#include <iostream>
#include <iomanip>
#define phi 3.14
using namespace std;

struct declare{
        int r;
        short opsi;
        char ulang;
    };
    declare dc;
    void pilihan(){
        cout<<"\nHitung Lingkaran =========="<<endl;
        cout<<"1. Luas Lingkaran \n2. Keliling Tabung \n3. Volume Tabung"<<endl;
    }
    
    void Luas(){
        float ll;
        cout<<"\njari-jari\t: "; cin>>dc.r;
        ll=phi*dc.r*dc.r;
        cout<<"\nLuas Lingkaran adalah"<<setprecision(4)<<ll<<endl<<endl;
        cout<<"Ulangi Program ?(y/n) : "; cin>>dc.ulang;
    }
    
    void keliling(){
        float lk;
        cout<<"\njari-jari\t; cin>>dc.r";
        lk=2*phi*dc.r;
        cout<<"\nKeliling Lingkaran adalah "<<setprecision(4)<<lk<<endl<<endl;
        cout<<"Ulangi Program? (y/n) : "; cin>>dc.ulang;
        
    }
    
    void volume(){
        int t;
        float vt;
        cout<<"\njari-jari\t: "; cin>>t;
        vt=(phi*dc.r*dc.r)*t;
        cout<<"\nVolume Tabung adalah "<<setprecision(4)<<vt<<endl<<endl;
        cout<<"Ulangi Program? (y/n) : "; cin>>dc.ulang;
    }
    
    void Default(){
        cout<<"Periksa kembali input yang anda masukkan!!"<<endl<<endl;
        cout<<"Ulangi Program? (y/n) : "; cin>>dc.ulang;
    }
    
    int main(){
        do{
            pilihan();
            switch();
        }while(dc.ulang=="y");
        cout<<"\nProgram Selesai :)"<<endl<<endl;
        
        system("pause");
        return 0;
        
    }
    
