#include <iostream>

using namespace std;

class Punkt{
private:
    float x,y;
public:
    Punkt():x(0),y(0){};
    void podaj(){
        cout<<"Podaj wspulrzedne x:";
        cin>>x;
        cout<<"Podaj wspulrzedne y:";
        cin>>y;
    }
    float wyprowadz_x(){
        return x;
    }
    float wyprowadz_y(){
        return y;
    }
};

class Prostokad{
private:
    Punkt jeden,dwa;
public:
    float pole(){
        float wynik, d1,d2;
        d1=abs(jeden.wyprowadz_y()-dwa.wyprowadz_y());
        d2=abs(jeden.wyprowadz_x()-dwa.wyprowadz_x());
        wynik = d1 * d2;

        return wynik;
    }
    float obwod(){
        float wynik, d1,d2;
        d1=abs(jeden.wyprowadz_y()-dwa.wyprowadz_y());
        d2=abs(jeden.wyprowadz_x()-dwa.wyprowadz_x());
        wynik = (2* d1) + (2* d2);

        return wynik;
    }
    void podaj(){
        cout<<"Podaj pierwszy punkt: ";
        jeden.podaj();
        cout<<"Podaj drugi punkt: ";
        dwa.podaj();
    }
};

int main()
{
    Prostokad jeden;
    jeden.podaj();
    cout<<"Pole "<<jeden.pole();
    cout<<"Obwod "<<jeden.obwod();
    return 0;
}
