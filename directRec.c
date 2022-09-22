#include <stdio.h>

int F(int n){
    
    if (n <= 2)
        return n;

    return F(n-3)+F(n-2);
    
}

int main()
{
    printf("F(0) = %d\n",F(0));
    printf("F(1) = %d\n",F(1));
    printf("F(2) = %d\n",F(2));
    printf("F(3) = %d\n",F(3));
    printf("F(4) = %d\n",F(4));
    printf("F(5) = %d\n",F(5));
    printf("F(33) = %d\n",F(33));
    return 0;
}


