#include <stdio.h>
#include <stdlib.h>
int main(){
	int c=50;
	switch(c){
		case 1 ... 60: printf("HELLO\n");
						break;
	}
	int a[10]={[0 ... 4]=10, [5 ... 9]=20};
	for(int i=0;i<10;i++)
		printf("%d ",a[i]);
	return 0;
}
