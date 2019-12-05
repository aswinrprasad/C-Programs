#include <stdio.h>

unsigned long long int fibdp(int n , unsigned long long int memo[]){
    if(memo[n] != NULL)
        return memo[n];
    if(n<=1)
        return 1;
    else{
        memo[n]=fibdp(n-1 , memo) + fibdp(n-2 , memo);
        return memo[n];
    }
}
int main(){
    int n ;
    scanf("%d", &n);
    unsigned long long int memo[n];
    for(int i=0;i<n; i++)
        memo[i]=NULL;
    printf("%d ",0);
    for(int i=0; i<(n-1) ; i++){
        printf("%llu ", fibdp(i , memo));
    }
    return 0;
}