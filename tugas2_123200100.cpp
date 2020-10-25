#include <iostream>
#include <string>
using namespace std;

int main(){
    int umray, umrib, umran1, umran2;
    int x=30000, y=20000, z=15000;
    int total;
    
    cout<<"Umur Ayah   = ";
    cin>>umray;
    cout<<"Umur Ibu    = ";
    cin>>umrib;
    cout<<"Umur Anak 1 = ";
    cin>>umran1;
    cout<<"Umur Anak 2 = ";
    cin>>umran2;
    
    if(umray>20){
        umray=x;
    }
    else{
        if(umray<=12){
            umray=z;
        }
        else{
            umray=y;
        }
   
    }
    if(umrib>20){
        umrib=x;
    }
    else{
        if(umrib<=12){
            umrib=z;
        }
        else{
            umrib=y;
        }
   
    }
    if(umran1>20){
        umran1=x;
    }
    else{
        if(umran1<=12){
            umran1=z;
        }
        else{
            umran1=y;
        }
   
    }
    if(umran2>20){
        umran2=x;
    }
    else{
        if(umran2<=12){
            umran2=z;
        }
        else{
            umran2=y;
        }
   
    }
    total=(umray+umrib+umran1+umran2)*30;
    cout<<"Tagihan satu bulan adalah = "<<total;
}
