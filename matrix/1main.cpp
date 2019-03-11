#include<iostream>

int main()
{
const int n = 3;
const int m = 4;
int i;
int j;
int a[n][m];
for(i=0;i<n;i++)
   {
     for (j=0;j<m;j++)
	{
	std::cin>>a[i][j];
	}
   }
float d;
int k;
for(j=0;j<m;j++)   
 {    
	bool isZrost = false;
    for (i=0;i<n-1;i++)      
   {       
	if(a[i+1][j] - a[i][j]>=0)
          {
		k = j;
		isZrost = true;
         }else{isZrost = false;
break;}
     
   }  
 if (isZrost==true)            
     {                       
  std::cout<<"Is zrost poslidovnist in "<<k+1<<" stopchiky"<<std::endl;    
             }

 }
}
