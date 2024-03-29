#include<iostream>
using namespace std;
int main()
{
  int m,n;
  cin>>m>>n;
  int a[m+2][n+2];
  for(int i=1;i<m+1;i++)
  {
  	for(int j=1;j<n+1;j++)
  	{
  		cin>>a[i][j];
	  }
  }
  for(int i=1;i<m+1;i++)
  {
  	a[i][0]=a[i][1];
  	a[i][n+1]=a[i][n];
  }
  for(int j=1;j<n+1;j++)
  {
  	a[0][j]=a[1][j];
  	a[m+1][j]=a[m][j];
  }
  a[0][0]=a[1][1];
  a[m+1][n+1]=a[m][n];
  a[0][n+1]=a[1][n+1];
  a[m+1][0]=a[m+1][1];
  for(int i=0;i<m+2;i++)
  {
  	for(int j=0;j<n+2;j++)
  	{
  		if(j!=n+1) cout<<a[i][j];
		  else cout<<a[i][n+1]<<endl; 
	  }
  }
  return 0;
}