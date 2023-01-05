#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include <iostream>
using namespace std;

#define info(P) (P) -> info
#define Top(S) ((S).Top)

typedef char infotype;
struct stack{
    infotype info[15];
    int Top;
};

void createStack_1301213328(stack &S);
bool isEmpty_1301213328(stack S);
bool isFull_1301213328(stack S);
void Push_1301213328(stack &S, infotype x);
int pop_1301213328(stack &S);
void printInfo_1301213328(stack S);

#endif // STACK_H_INCLUDED
