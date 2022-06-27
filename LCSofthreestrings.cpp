#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int lcs(string s1,  string s2 , string s3 , int n, int m, int p)
{
	int dp[n+1][m+1][p+1];
	for(int i=0; i < n+1; i++)
	{
		for(int j=0; j < m+1; j++)
		{
			for(int k=0; k < p+1; k++)
			{
				dp[i][j][k]=-1;
			}
		}
	}
	for(int i=0; i < n+1; i++)
	{
		for(int j=0; j < m+1; j++)
		{
			for(int k=0; k < p+1; k++)
			{
				if(i==0 || j==0 || k==0)
				{
					dp[i][j][k]=0;
				}
				else if(s1[i-1]==s2[j-1] && s1[i-1]==s3[k-1])
				{
					dp[i][j][k]=1+dp[i-1][j-1][k-1];
				}
				else
				{
					dp[i][j][k]=max(dp[i-1][j][k],max(dp[i][j-1][k],dp[i][j][k-1]));
				}
			}
		}
	}
	return dp[n][m][p];
}
int main(int argc, char** argv) {
	string s1;
	string s2;
	string s3;
	cin>>s1>>s2>>s3;
	int n=s1.size();
	int m=s2.size();
	int p=s3.size();
	
	cout<<lcs(s1,s2,s3,n,m,p);
	return 0;
}
