#include <iostream>
#include <fstream>
using namespace std;
struct STUDENT {
string imie;
string nazwisko;
int numerAlbumu;
};
int main()
{
    fstream binar;

    int n;
    cout << "Ile studentow" << endl;
    cin>> n;
    STUDENT st[n];
    binar.open("binar.bin", ios::out);
    if(binar.is_open()){
        for(int i=0;i<n;i++){
            cin>>st[i].imie;
            cin>>st[i].nazwisko;
            cin>>st[i].numerAlbumu;

        }
        for(int i=0;i<n;i++){
            binar.write((char*)&st, sizeof(st));

        }

    }else{
        cout << "BLAD!" << endl;
    }

    return 0;
}
