#include <stdio.h>	
#define SIZE 10

void bubbleSort( const int const *  array, int size);	

int main(void)
{
   int a[10]={11,30,35,23,5,27,2,9,88,8};
   int i,size;
   
   puts("資料排序之前");
   
    for(i=0;i<=9;i++)
    {
    	printf("%d ",a[i]);
    }
    bubbleSort( a, 10);
    
	puts("\n資料排序後");
	for(i=0;i<=9;i++)
	{
		printf("%d ",a[i]);
	}
}

void swap(int *element1Ptr,int *element2Ptr)
{
	int hold= *element1Ptr;
	*element1Ptr=*element2Ptr;
	*element2Ptr=hold;
}

