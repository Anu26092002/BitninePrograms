#include <stdio.h>
#include <string.h>

int F(int n, int dp[]){
    if (n <= 2)
        return n;
    if (dp[n] != -1)
        return dp[n];
        
    return dp[n] = F(n-3,dp)+F(n-2,dp); 
}

int setF(int n){
    int dp[n+1];
    memset( dp, -1, (n+1)*sizeof(int) );
    return F(n,dp);
}

int main()
{   
    printf("F(0) = %d\n",setF(0));
    printf("F(3) = %d\n",setF(3));
    printf("F(5) = %d\n",setF(5));
    return 0;
}
