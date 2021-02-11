#include <cmath>
#include <iostream>

using namespace std;

class Osoba {
    private:
        int danRodjenja;
        int mesecRodjenja;
        int godinaRodjenja;

    public:
        Osoba() { danRodjenja = 26; mesecRodjenja = 7; godinaRodjenja = 2004; }

        Osoba(int dr, int mr, int gr){
            danRodjenja = dr;
            mesecRodjenja = mr;
            godinaRodjenja = gr;
        }

        void setDR(double dr) { danRodjenja = dr; }
        void setMR(double mr) { mesecRodjenja = mr; }
        void setGR(int gr) { godinaRodjenja = gr; }

        int getDR() { return danRodjenja; }
        int getMR() { return mesecRodjenja; }
        int getGR() { return godinaRodjenja; }

        bool isValid() {
            if((danRodjenja < 1 || danRodjenja > 31) || (mesecRodjenja < 1 || mesecRodjenja > 12) || (godinaRodjenja < 1891 || godinaRodjenja > 2021)){
                return false;
            }
            else{
                return true;
            }
        }
};

int main(){

    Osoba i(19,4,1967);

    cout << "Dan rodjenja: " << i.getDR() << endl;
    cout << "Mesec rodjenja: " << i.getMR() << endl;
    cout << "Godina Rodjenja: " << i.getGR() << endl;
    cout << "Validnost: " << endl;
    if(i.isValid() == true){
        printf("Validno. \n\n");
    }
    else{
        printf("Nije validno. \n\n");
    }

    i.setDR(11);
    i.setMR(12);
    i.setGR(1834);

    cout << "Dan rodjenja: " << i.getDR() << endl;
    cout << "Mesec rodjenja: " << i.getMR() << endl;
    cout << "Godina Rodjenja: " << i.getGR() << endl;
    cout << "Validnost: " << endl;
    if(i.isValid() == true){
        printf("Validno. \n\n");
    }
    else{
        printf("Nije validno. \n\n");
    }


    return 0;
}
