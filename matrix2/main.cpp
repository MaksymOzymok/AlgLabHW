#include<iostream>
#include<cmath>



	bool isSquare(int k) 
{   
  if (k < 0) return false;   
  if ((sqrt(k) - (int)sqrt(k)) == 0)         
	return true;  
   return false;
 }
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
for(i=0;i<n;i++)   
 {   
	bool isKvadr = false;
    for (j=0;j<m-1;j++)      
   {  if (isSquare(a[i][j])==true)   
          {
		k = i;
		isKvadr = true;
         }else{isKvadr = false;
break;}
     
   }  
 if (isKvadr==true)            
     {                       
  std::cout<<"Is all kvadr in "<<k+1<<"string"<<std::endl;    
             }
  }
}
