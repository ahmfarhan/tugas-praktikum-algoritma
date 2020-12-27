#include <iostream>
using namespace std;

int main(){
    int jml, selisih;
    int max, min;
    float rata, total;
    int selisihmax=0;

    cout << "Masukan banyak angka : ";
    cin >> jml;

    int angka[jml];
    for (int i=0; i<jml; i++){
        cout << "Angka ke-"<<i+1<<" :";
        cin >> angka[i];
    }
        cout << endl;
        cout << "_____Hasil_______"<<endl;
        cout << "Deret       : ";

    for (int i=0; i<jml; i++){
        cout << angka[i] << " ";
    }
        cout << endl;

        max= angka[0];
        min= angka[0];
    for (int i=0; i<jml; i++){
        if (max < angka[i]){
            max = angka[i];
        } else if(min > angka[i]){
            min = angka[i];
        }
    }

        cout << "Maksimum    : "<< max <<endl;
        cout << "Minimum     : "<< min << endl;

    for (int i=0 ; i<jml;i++){
        total = total+angka[i];
    }
        rata=total/jml;
        cout << "Rata-Rata   : "<<rata<<endl;
        
    for(int i = 0; i < jml; i++){
  	selisih = angka[i] - angka[i+1];
		if(i == jml - 1)
			selisih  = angka[i] - angka[i - 1];
		if(selisih < 0)
			selisih*=-1;
		if(selisih >= selisihmax)
			selisihmax = selisih;
			
    }cout<<"Selisih max : "<<selisihmax;
    return 0;
}