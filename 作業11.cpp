#include<stdio.h>

 

int main()

{

	int number1,number2,number51,temp; 

	printf("請輸入三個數字,會進行排序：");  

	scanf("%d%d%d",&number1,&number2,&number51); 

	if(number1>number2){ 

		temp=number1;  

		number1=number2; 

		number2=temp; 

	}

	if(number1>number51){ 

		temp=number1; 

		number1=number51; 

		number51=temp; 

	}

	if(number2>number51){   

		temp=number2;   

		number2=number51; 

		number51=temp;

	}

	printf("從小到大的排列是:%d %d %d",number1,number2,number51);

	

	return 0;

}
