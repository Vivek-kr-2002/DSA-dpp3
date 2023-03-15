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

int Calculate_median(int a1[], int a2[], int n)
{
      int i = 0;
      int j = 0;
      int cnt;
      int x = -1, y = -1;

   for (cnt = 0; cnt <= n; cnt++)
    {
      if (i == n)
       {
          x = y;
          y = a2[0];
          break;
        }
         else if (j == n)
        {
          x = y;
          y = a1[0];
         break;
        }

         if (a1[i] < a2[j])
        {

         x = y;
         y = a1[i];
         i++;
        }
        else
      {

      x = y;
      y = a2[j];
      j++;
   }
 }

    return (x + y)/2;
   }
int main()
{
int a1[10], a2[10], n, i;
cin>>n;

for(i=0; i<n; i++)
cin>> a1[i];

for(i=0; i<n; i++)
cin>> a2[i];

cout << Calculate_median(a1, a2, n) ;

return 0;
}

