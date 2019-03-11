#include<iostream>


int main()
{
const int n = 9;
const int m = 9;
int i;
int j;
int a[n][m];
for(i = 0;i < n;i++) { 
   for(j = 0;j<m;j++)  
       { a[i][j]=0;  
             } }
    for(i = 0; i < n;i++)
	{
	   for(j = 0;j<m;j++)
		{
		   if((i==j)||(n-j==i+1)){a[i][j]=0;}
			if((i<j)&&(n-j>i+1)){a[i][j]=1;}
				if((i>j)&&(n-j<i+1)){a[i][j]=3;}
			if((i<j)&&(n-j<i+1)){a[i][j]=2;}
				if((i>j)&&(n-j>i+1)){a[i][j]=4;}
		}
	


	}
for(i = 0;i < n;i++)
{
   for(j = 0;j<m;j++)
	{
	   std::cout<<a[i][j]<<" ";
	}
std::cout<<std::endl;
}


}
