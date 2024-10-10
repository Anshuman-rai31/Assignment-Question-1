#include <stdio.h>
void convertDecimal(int decimal_value){
	printf("Decimal:%d\n",decimal_value);
	printf("Binary:");
	for(int i=31;i>=0;i--){
		int bit = (decimal_value>>i) & 1;
		printf("%d",bit);
	}
       	printf("\n");
       	
       	 printf("octal:%o\n",decimal_value);
       	 
       	 printf("Hexadecimal:%X\n",decimal_value);
}
  
  
        int main(){
        	int decimal_value;
        	
        	printf("Enter a decimal number:");
        	scanf("%d",&decimal_value);
        	convertDecimal(decimal_value);
        	
        	return 0;
		}