#include<bits/stdc++.h>
using namespace std;

#define nn                    '\n' 
#define pb                    push_back 
#define SS                    stringstream 
#define ull                   unsigned long long 
#define mod                   1000000007 
#define INF                   2147483647 
#define SIZE                  2000001 
 
#define sf1(a)                scanf("%d", &a) 
#define sf2(a,b)              scanf("%d %d",&a, &b) 
#define sf3(a,b,c)            scanf("%d %d %d", &a, &b, &c) 
#define sf4(a,b,c, d)         scanf("%d %d %d %d", &a, &b, &c, &d)
 #define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)
#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)
#define lli long long int
#define pb push_back
#define f first
#define sec second

int main()
    {
     int t;
     cin>>t;
     while(t--)
     {

    int n,e;
    cin>>n>>e;

    int dp[e+1][n+1];

    for(int i=0;i<=n;i++)
    dp[1][i]=i;

    for(int i=1;i<=e;i++)
    dp[i][1]=1;
  
    for(int i=2;i<=e;i++)
    {
      for(int j=2;j<=n;j++)
      {
        dp[i][j]=1000000000;
        for(int k=1;k<=j;k++)
        {
          int res=1+max(dp[i-1][k-1],dp[i][j-k]);
          if(res<dp[i][j])
          dp[i][j]=res;
        }
      }
    }
    cout<<dp[e][n]<<"\n";
    }
     return 0;
     }
