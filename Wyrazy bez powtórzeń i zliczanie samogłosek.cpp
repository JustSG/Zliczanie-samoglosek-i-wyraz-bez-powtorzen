#include <iostream>
#include <string>
using namespace std;

class Klasa{
    public: static int zliczSamogloski(string wyraz){
        static string txt = "aąeęiouóyAĄEĘIOUÓY";
        static int liczbaSamoglosek = 0;
        
        if(wyraz == ""){
            return 0;
        }else{
        for (int i = 0; i < wyraz.length(); i++) {
            for (int j = 0; j < txt.length(); j++) {
                if(wyraz[i] == txt[j]){
                    liczbaSamoglosek++;
                }
            }
        }
        cout << "Liczba samogłosek: " << liczbaSamoglosek << endl;
        return liczbaSamoglosek;
        }
    }
    
    public: static string szukajPowtorzen(string wyraz){
        static string wyrazBezPowtorzen = "";
        wyrazBezPowtorzen += wyraz[0];
        
        if(wyraz == ""){
            return 0;
        }else{
            for (int i = 1; i < wyraz.length(); i++) {
                if(wyraz[i] != wyraz[i-1]){
                    wyrazBezPowtorzen += wyraz[i];
                }
            }
        cout << "Wyraz bez powtórzeń: " << wyrazBezPowtorzen << endl;
        return wyrazBezPowtorzen;
        }
    }
};
int main()
{
    string wyraz1,wyraz2;
    
    cout << "ZLICZANIE SAMOGŁOSEK" << endl << "Podaj wyraz: " << endl;
    cin >> wyraz1;
    Klasa::zliczSamogloski(wyraz1);
    cout << "WYRAZ BEZ POWTÓRZEŃ" << endl << "Podaj wyraz: " << endl;
    cin >> wyraz2;
    Klasa::szukajPowtorzen(wyraz2);

    return 0;
}