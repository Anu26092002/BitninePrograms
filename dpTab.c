#include <stdio.h>

int F(int n){
    int prev=2,prev1=1,prev2=0;
    
    for(int i=3; i<=n;i++){
        int curr = prev1+prev2;
        prev2=prev1;
        prev1=prev;
        prev=curr;
    }
    
    return prev;
}

int main()
{   
    printf("F(0) = %d\n",F(0));
    printf("F(3) = %d\n",F(3));
    printf("F(5) = %d\n",F(5));
    printf("F(33) = %d\n",F(33));
    return 0;
}