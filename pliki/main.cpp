#include <iostream>
#include <fstream>


using namespace std;

int main()
{
    ofstream fout;
    string dane, data;
    cout<< "Podaj dane"<<endl;
    cin>>dane;
    fout.open("data.txt");
    fout << dane << endl;
    fout.close();
    ifstream fin;
    fin.open("data.txt");
    fin>> data;
    cout << data;
    return 0;
}
