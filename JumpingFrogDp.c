/*Holmes and Watson have the habit of going for early morning walks. One day as they were walking, they saw a frog sitting near a lotus pond. There were lotus leaves floating in the pond and there was an insect sitting on a leaf in the middle of pond. The frog can reach the insect by jumping through the leaves. It can jump only one or two leaves at a time. Holmes asked Watson to calculate the total number of ways in which the frog can reach the insect. Can you help Watson?*/

#include <stdio.h>

int size;
int noofways(int n , int memo1[] ){
    for(int i=0;i<size;i++){
        if(memo1[i]!=0)
            return memo1[i];
    }
    if(n<=1)
        return 1;
    else{
        memo1[n]= noofways(n-1 , memo1)+noofways(n-2 , memo1);
        return memo1[n];
        //return noofways(n-1)+noofways(n-2);
    }
}
    

int main() {

    int n;
    scanf("%d",&n);
    size=n;
    int memo[n+1];
    for(int i=0; i<n ; i++)
        memo[i]=0;
    printf("%d",noofways(n , memo));
    return 0;
}

