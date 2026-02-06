#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);
	int arr[num];
	for(int i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	} 
	int storearr[num];  
	for(int i=0;i<num;i++)
	{
		
		int arr1=arr[i];
		int count=0;
		while(arr1!=0)
		{
            arr1=arr1/10;
			count++;

		}
		
		int t=arr[i];
		int finall=0;
		for(int j=0;j<count;j++)
		{
            int tem=t;
			
			t=t%10;
			int fact=1;
			for(int x=1;x<=t;x++)
			{
                fact=fact*x;
			}
			finall=finall+fact;
			
			t=tem/10;

		}
		storearr[i]=finall;
	} 
	for(int i=0;i<num;i++)
	{
		if(arr[i]==storearr[i])
		{
			printf("YES");
		}
		else
		{
			printf("NO");
		}
		printf("\n");
	} 
	return 0;    	             
}#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);
	int arr[num];
	for(int i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	} 
	int storearr[num];  
	for(int i=0;i<num;i++)
	{
		
		int arr1=arr[i];
		int count=0;
		while(arr1!=0)
		{
            arr1=arr1/10;
			count++;

		}
		
		int t=arr[i];
		int finall=0;
		for(int j=0;j<count;j++)
		{
            int tem=t;
			
			t=t%10;
			int fact=1;
			for(int x=1;x<=t;x++)
			{
                fact=fact*x;
			}
			finall=finall+fact;
			
			t=tem/10;

		}
		storearr[i]=finall;
	} 
	for(int i=0;i<num;i++)
	{
		if(arr[i]==storearr[i])
		{
			printf("YES");
		}
		else
		{
			printf("NO");
		}
		printf("\n");
	} 
	return 0;    	             
}#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);
	int arr[num];
	for(int i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	} 
	int storearr[num];  
	for(int i=0;i<num;i++)
	{
		
		int arr1=arr[i];
		int count=0;
		while(arr1!=0)
		{
            arr1=arr1/10;
			count++;

		}
		
		int t=arr[i];
		int finall=0;
		for(int j=0;j<count;j++)
		{
            int tem=t;
			
			t=t%10;
			int fact=1;
			for(int x=1;x<=t;x++)
			{
                fact=fact*x;
			}
			finall=finall+fact;
			
			t=tem/10;

		}
		storearr[i]=finall;
	} 
	for(int i=0;i<num;i++)
	{
		if(arr[i]==storearr[i])
		{
			printf("YES");
		}
		else
		{
			printf("NO");
		}
		printf("\n");
	} 
	return 0;    	             
}
