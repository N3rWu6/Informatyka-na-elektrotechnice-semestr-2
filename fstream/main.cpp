#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream fout;
    string imie, nazwisko;
    int wiek,n;
    cout << "Ile wpisów? " << endl;
    cin >> n;
    for(int i =0;i<n;i++){
    cout<< "Podaj Imie: ";
    cin>>imie;
    cout<< "Podaj Nazwisko: ";
    cin>>nazwisko;
    cout<< "Podaj Wiek: ";
    cin>>wiek;
    fout.open("osoby.txt", ios::app);
    fout<< "Imie: "<<imie<<'\n'<<"Nazwisko: "<<nazwisko<<'\n'<<"Wiek: "<<wiek<<'\n'<<"*********"<<'\n';
    fout.close();
    }
    fstream fin;
    string imieStud, nazwiskoStud;
    int ocena;
    fin.open("studenci.txt", ios::in);
    while(!fin.eof()){

    fin>>imie;
    fin>>nazwisko;
    fin>>ocena;
    cout<< " Imie: "<< imie<<endl<< " Nazwisko: "<< nazwisko<<endl<< " Ocena: "<< ocena<<endl;
    }
    while(!fin.eof()){

    }
    fout.close();
    return 0;
}
