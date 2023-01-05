#include "stack.h"

void createStack_1301213328(stack &S){
    S.Top = 0;
}

bool isEmpty_1301213328(stack S){
    if(S.Top == 0){
        return true;
    }else {
        return false;
    }
}
bool isFull_1301213328(stack S){
    if(S.Top == 15){
        return true;
    }else
        return false;
}
void Push_1301213328(stack &S, infotype x){
    if(isFull_1301213328(S) == false){
        S.Top = S.Top + 1;
        S.info[S.Top] = x;
    }else {
        cout << "Kosong!" << endl;
    }
}
int pop_1301213328(stack &S){
    infotype x = S.info[S.Top];

    S.Top = S.Top - 1;
    return x;
}
void printInfo_1301213328(stack S){
    int i = S.Top;
    while (i != 0){
        cout << S.info[i] << " " << endl;
        i--;
    }
}
