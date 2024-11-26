#include <stdio.h>
int main(){
	int number,c=0,l=0;
	for(int i=1;i<=5;i++){
	printf("nhap so number : ");
	scanf("%d",&number);
	if(number % 2 == 1){
		l=l+1;
	}
	else{
		if(number % 2 ==0){
			c=c+1;
		}
	}
}
    printf("tong cac so le la : %d\n",l);
    printf("tong cac so chan la : %d\n",c);
    
    return 0;
	
}
