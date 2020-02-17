#include <stdio.h>

void update(int *a,int *b) {
    int temp=*a;
    *a+=*b;
    if(temp>*b)
    {
        *b=temp-*b;
    }
    else
    {
        *b=*b-temp;
    }
    
}

int main() {
    int a, b;
    // int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(&a,&b);
    printf("%d\n%d", a, b);

    return 0;
}

