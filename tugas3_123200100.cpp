#include <iostream>
#include <string>
using namespace std;

int main(){
    string uname;
    string pw;
    int n1, n2, n3, n4;
    int matkul;
    double nh1, nh2, uts1, uts2, uas1, uas2;
    double rata1, rata2;
    
    cout<<"Login Akun ============="<<endl;
    cout<<"Username     : "; getline(cin,uname);
    cout<<"Password     : "; getline(cin,pw);
    cout<<"========================"<<endl;
    
    if(uname=="aingmacan"){
        if(pw=="macan123"){
            cout<<"Login Berhasil"<<endl;
            cout<<"\nInput Nilai Mata Kuliah"<<endl;
            cout<<"1. Algoritma dan Pemrograman"<<endl;
            cout<<"2. Kalkulus"<<endl;
            cout<<"Pilih : "; cin>>matkul;
            
            
        }else {
            cout<<"Password Salah";
        }
        
    }else if(pw== "macan123"){
        cout<<"Username Salah";
    }else {
        cout<<"Password dan Username Salah";
    }
    if(matkul==1){
        cout<<"Nilai Harian : "; cin>>nh1;
        cout<<"Nilai UTS    : "; cin>>uts1;
        cout<<"Nilai UAS    : "; cin>>uas1;
        rata1=(nh1+uts1+uas1)/3;
        if (rata1>=80){
            cout<<"Anda lulus Algoritma dan Pemrograman dengan nilai "<<rata1;
        }else {
            cout<<"Anda tidak lulus Algoritma dan Pemrograman dengan nilai "<<rata1;
        }
    }if(matkul==2){
        cout<<"Nilai Harian : "; cin>>nh2;
        cout<<"Nilai UTS    : "; cin>>uts2;
        cout<<"Nilai UAS    : "; cin>>uas2;
        rata2=(nh2+uts2+uas2)/3;
        if (rata2>=80){
            cout<<"Anda lulus Kalkulus dengan nilai "<<rata2;
        }else {
            cout<<"Anda tidak lulus Kalkulus dengan nilai "<<rata2;
        }
    }else {
        cout<<"Input Anda Salah";
    }

    
    
    
    
    
    
    
}
