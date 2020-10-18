#include <iostream>
#include <string>

using namespace std;

int main (){
	string nama;
	string NIM;
	int nilaiuts;
	int nilaiuas;
    int rata;
	
	cout<<"Nama      : ";
	cin>>nama;
	 
	cout<<"NIM       : ";
	cin>>NIM;
	 
	cout<<"Nilai UTS : ";
	cin>>nilaiuts;
	 
	cout<<"Nilai UAS : ";
	cin>>nilaiuas;
	
	rata=(nilaiuts+nilaiuas)/2;
	
	cout<<"Hai, Nama saya "<<nama;
	cout<<",NIM "<<NIM<<endl;
	cout<<"Nilai akhir saya adalah "<<rata<<endl;
	

}
