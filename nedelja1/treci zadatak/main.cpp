#include <iostream>

using namespace std;

int main()
{
    int godina;
    cout << "Uneti godinu: ";
    cin >> godina;
    if(godina % 4 == 0){
        if(godina % 100 == 0 && godina % 400 != 0){
            cout << "Nije prestupna.";
        }else{
            cout << "Prestupna je.";
        }
    }else{
        cout << "Nije prestupna.";
    }
    return 0;
}
