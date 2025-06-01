#include <iostream>
#include <string>
using namespace std;
#define MAXSTACK 10

typedef int ItemType;
typedef struct {
    ItemType Item[MAXSTACK];
    int Count;
} Stack;

void awal(Stack *S) {
    S->Count = 0;
}

int penuh(Stack *S){
    return (S->Count == MAXSTACK);
}

int kosong(Stack *S){
    return (S->Count == 0);
}

void pop(Stack *S, ItemType *x) {
    if (kosong(S)) {
        cout << "Stack kosong!" << endl;
    } else {
        --(S->Count);
        cout << "Ambil dong:" << S->Item[S->Count] << endl;
        *x = S->Item[S->Count];
    }
}

void push(ItemType x, Stack *S){
    if (penuh(S)) {
        cout << "Stack penuh!" << endl;
    } else {
        S->Item[S->Count] = x;
        cout << "Tambah dong:" << S->Item[S->Count] << endl;
        ++(S->Count);
    }
}

int main(){
    Stack Asfn;
    awal(&Asfn);

    ItemType *hehe = Asfn.Item;
    pop(&Asfn, hehe);
    push(99, &Asfn);
    push(73, &Asfn);
    push(23, &Asfn);
    push(88, &Asfn);
    pop(&Asfn, hehe);
    push(12, &Asfn);
    push(65, &Asfn);
    push(53, &Asfn);
    push(45, &Asfn);
    push(34, &Asfn);
    push(78, &Asfn);
    push(90, &Asfn);
    pop(&Asfn, hehe);
    push(100, &Asfn);
    push(101, &Asfn);
    push(102, &Asfn);
    return 0;
}