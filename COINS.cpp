#include<stdio.h>
#include<math.h>
#include<iostream>
#include<map>
using namespace std;

map <int , long long> ans;
long long int f(long int num) ;

int main()
{
 int i,j,k;
 int num;
 //for(int i=0;i<1000000;i++) ans[i] = 0;

 while(scanf("%d",&num) != EOF)
 {
	long long int answer = f(num);
	cout << answer << endl;
 }
return 0;
}

long long int f(long int num)
{       if (num==0) return 0;
 	long long int temp = ans[num];
	if(temp == 0)
	{
 		if(num > (f(num/2) + f(num/3) + f(num/4))) temp = num;
		else temp  = f(num/2) + f(num/3) + f(num/4);
		
	}
	ans[num] = temp;
	
	return temp;
}
	
	 
	


