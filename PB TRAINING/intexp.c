#include <stdio.h>
#include <stdlib.h>
int main()
{
    int p=11,expr1='+',expr2='*',j=0,count=0,i,rem;
    char q='1';
    int n;
    char arr[5000];
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n>0 && n<121)
    {
        i=0;
        j=p;
        rem=n;
        while(rem>=11)
        {
            rem=rem-11;
            arr[i]=q;
            i++;
            arr[i]=q;
            i++;
            arr[i]=expr1;
            i++;
        }
        while(rem>0)
        {
            rem=rem-1;
            arr[i]=q;
            i++;
            arr[i]=expr1;
            i++;
        }
        count=i-1;
    }
    if(n>=121 && n<1331)
    {
        arr[0]=q;
        arr[1]=q;
        arr[2]=expr2;
        arr[3]=q;
        arr[4]=q;
        i=5;
        j=p*p;
        if(n>j)
        {
            rem=n-j;
            while(rem>11)
            {
                arr[i]=expr1;
                i++;
                rem=rem-11;
                arr[i]=q;
                i++;
                arr[i]=q;
                i++;
                
            }
            while(rem>0)
            {
                rem=rem-1;
                arr[i]=expr1;
                i++;
                arr[i]=q;
                i++;
            }
        }
        count=i;
    }
    else if(n>=1331)
    {
        arr[0]=q;
        arr[1]=q;
        arr[2]=expr2;
        arr[3]=q;
        arr[4]=q;
        arr[5]=expr2;
        arr[6]=q;
        arr[7]=q;
        i=8;
        j=p*p*p;
        if(n>j)
        {
            rem=n-j;
            while(rem>=11)
            {
                arr[i]=expr1;
                i++;
                rem=rem-11;
                arr[i]=q;
                i++;
                arr[i]=q;
                i++;
            }  
            while(rem>0)
            {
                rem=rem-1;
                arr[i]=expr1;
                i++;
                arr[i]=q;
                i++;
            }          
        }
        count=i;
    }
    
    printf("Count is : %d\n",count);
    for(i=0;i<count;i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
    return 0;
    
}
