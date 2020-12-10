#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

vector <int> dec_to_bin (int liczba){
    int i = 0, tab[31];
    vector <int> vec;
    while(liczba){
        tab[i++]=liczba%2;
        liczba/=2;
    }
    for(int j=i-1; j>=0;j--){
        vec.push_back(tab[j]);
    }
    return vec;
}

void przerwa(vector<int> liczba){
    vector<int> odl;
    vector<int>::iterator it;
    int licznik=0;
    for(it=liczba.begin(); it<liczba.end(); it++){
        if(*it==1){
            odl.push_back(licznik);
            licznik=0;
        }else{
        licznik++;
        }
    }
    sort(odl.begin(), odl.end());
    cout << "najdluzsza odleglosc: " << odl.back()<<endl;
}

int main(){

    int liczba;
    bool znak=true;

    while(znak){
    cout<<"Podaj liczbe "<<endl;
    cin>>liczba;
    cout<<"Podana liczba w postaci binarnej: ";
    for(int i=0; i<dec_to_bin(liczba).size(); i++){
        cout<<dec_to_bin(liczba)[i];
    }
    cout<<endl;
    przerwa(dec_to_bin(liczba));
    }
    return 0;
}
