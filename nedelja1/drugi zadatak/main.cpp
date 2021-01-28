#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cout << "Uneti trocifreni broj: " << endl;
    cin >> a;
    b = a / 100;
    c = (a - b * 100) / 10;
    d = a - b *100 - c * 10;
    b = b * b * b;
    c = c * c * c;
    d = d * d * d;
    if(a == b + c + d){
        cout << "Jednak je." << endl;
    }else{
        cout << "Nije jednak." << endl;
    }
    return 0;
}
