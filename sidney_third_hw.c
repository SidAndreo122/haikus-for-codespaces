#include <stdio.h>

int addByValue(int a){
    a = a + 5;
    return a;
}

void addByReference(int *a){
    *a += 5;

}

void main() {
    int byValue = addByValue(4);
    printf("%d\n", byValue);
    int byReference = 4;
    addByReference(&byReference);
    printf("%d\n", byReference);
}