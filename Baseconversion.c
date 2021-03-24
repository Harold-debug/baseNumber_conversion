#include<stdio.h>
#include<math.h>
int main()
{
	int maxNumber,oldbase,r,quotient,baseBNum;
	int const val2=4, val1;
	printf("Enter the new base of the number: ");
        	scanf("%d",&val1);
	maxNumber=(pow(val1,val2)-1);
            
    	printf("\nyour maximum value is: %d\n",maxNumber);
    	printf("\nenter the base 10 number: ");
         	scanf("%d",&oldbase);
	r=oldbase%val1;
         	
    	quotient=oldbase/val1;
         	
	r=quotient%val1;
    	   
      	quotient=quotient/val1;
        	
	r=quotient%val1;
        	
    	quotient=quotient/val1;
        	
	r=quotient%val1;
        	
	baseBNum=r*1000+r*100+r*10+r;
	printf("\nthe number in base %d is %d",val1,baseBNum);
	return 0;
}
