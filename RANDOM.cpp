/*
deepansh_946
*/
#include<bits/stdc++.h>
#define gc getchar
#define pc putchar
#define lli long long int
#define MOD 1000000007
#define sd(x) scanf("%d",&x)
#define slld(x) scanf("%lld",&x)
#define pd(x) printf("%d",x)
#define plld(x) printf("%lld",x)
#define ss(x) scanf("%s",&x)
#define ps(x) printf("%s",x)
#define first fs
#define second se
#define meracode int t; cin>>t; while(t--)
#define gcd __gcd
 
using namespace std;
int random(int l, int r) 
{
    int tmp = rand() % (r - l + 1);
    return tmp + l;
}
 
int main()
{
    srand(time(NULL));
    int t = 100;
    cout << t << endl;
    while (t--) 
	{
        int n = random(1, 100);
        for(int i=0;i<n;i++)
        {
        	int tmp = random(1,100000);
        	cout<<tmp<<" ";
		}
		cout<<endl;
    }
    return 0;
}
