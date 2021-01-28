#include <iostream>

using namespace std;

int main()
{
    int n, faktorijel = 1;
    cout << "Uneti broj: " << endl;
    cin >> n;
    for(int i = 1; i <= n; i++){
        faktorijel *= i;
    }
    cout << "Faktorijel od " << n << " je " << faktorijel;
    return 0;
}
