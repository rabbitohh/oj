/*WA��20��*/
#include<bits/stdc++.h>
using namespace std;
int dp[101][101];
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	dp[0][1]=1;
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
			if(j==n)
				dp[i][j]=dp[i-1][n-1]+dp[i-1][1];
  			else dp[i][j]=dp[i-1][j-1]+dp[i-1][j+1];
	printf("%d",dp[m][1]);
	return 0;
}

