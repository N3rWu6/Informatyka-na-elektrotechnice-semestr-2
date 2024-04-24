#include <iostream>

using namespace std;

class KlasaString{
private:
    string lancuch;
public:
    KlasaString(){};
    dodaj(){
        cout<<"podaj zawartosc: ";
        cin>>lancuch;
    }
    int get_lenght(){
        return lancuch.size();
    }
    void concate(const string &referencja){
        lancuch = lancuch + referencja;
    }
    string wypisz(){
        return lancuch;
    }
};


int main()
{
    int n,wyb,wyb2,opcje;
    cout << "Ile pol" << endl;
    cin>>n;
    KlasaString str[n];

    while(wyb!=-1)
    {
    cout<<"Podaj pole: ";
    cin>>wyb;
    cout<<"1.Dodaj 2.Wypisz 3.Podaj dlugosc 4.Polacz dwa \n";
    cin>>opcje;
    switch(opcje){
    case 1:
        str[wyb].dodaj();
        break;
    case 2:
        cout<<str[wyb].wypisz()<<'\n';
        break;
    case 3:
        cout<<str[wyb].get_lenght()<<'\n';
        break;
    case 4:
        cout<<"Pole do polaczenia: ";
        cin>>wyb2;
        str[wyb].concate(str[wyb2].wypisz());
        break;

    }
    }

    return 0;
}
