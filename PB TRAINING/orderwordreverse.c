#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 

int main()
{
    char str[100], rev[100];
    int len, i, index, k, j;
    printf("Enter any string: ");
    scanf("%[^\n]s", str);
    len   = strlen(str);
    index = 0;
    k = len - 1;
    j   = len - 1;
    while(k > 0){
        if(str[k] == ' '){
            i = k + 1;
            while(i <= j){
                rev[index] = str[i];
                i++;
                index++;
            }
            rev[index++] = ' ';
            j = k- 1;
        }
        k--;
    }

    for(i=0; i<=j; i++){
        rev[index] = str[i];
        index++;
    }
    rev[index] = '\0'; 
    printf("%s", rev);
    return 0;
}
