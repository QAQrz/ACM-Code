#include <bits/stdc++.h>
using namespace std;
#define db(x) cout<<(x)<<endl
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define ms(x,y) memset(x,y,sizeof x)
typedef long long LL;
const LL mod=1e9+7,inf=0x3f3f3f3f,maxn=1123456;
int n,a,p;
double ans=inf;
int main(){
	ios::sync_with_stdio(0);
	cin>>n>>a;
	for(int i=2;i<n;i++)
		if(ans>abs(180.0/n*(n-i)-a))
			ans=abs(180.0/n*(n-i)-a),p=i+1;
		else
			break;
	printf("1 2 %d\n",p);
	return 0;
}