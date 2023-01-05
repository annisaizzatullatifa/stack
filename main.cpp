#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
    stack S;
    string kata,word;
    infotype x;
    int i = 1;

    createStack_1301213328(S);

    cout << "Nama : Annisa Izzatul Latifa" << endl;
    cout << "NIM : 1301213328" << endl;
    cout << endl;
    cout << "Digit terakhir NIM MOD 4 sisa 0 -> 8 mod 4 = 0" << endl;
    cout << endl;

    while (i <= 9){
        cout << "input: ";
        cin >> x;
        Push_1301213328(S,x);
        i++;
    }
    cout << endl;
    cout << "Stack awal: ";
    printInfo_1301213328(S);
    cout << endl;

    i = 1;
    while(i <= 5){
        pop_1301213328(S);
        i++;
    }

    cout << "Stack sesudah pop: ";
    printInfo_1301213328(S);
    cout << endl;

    return 0;
}
