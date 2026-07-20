#include <stdio.h>

int main() {
    int a[5]={10,20,30,40,50};
    int key=30,i;

    for(i=0;i<5;i++) {
        if(a[i]==key) {
            printf("Element Found");
            return 0;
        }
    }

    printf("Element Not Found");
    return 0;
}