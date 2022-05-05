#include <bits/stdc++.h>

void update(int *a,int *b) {
    int sum = *a+*b;
    int sub = *a-*b;
    
    *a=sum;
    if(sub<0)
    {sub = -sub;}
    *b = sub;
    
        
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
