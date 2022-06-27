### Sorting Techinique 

# Q1

![Screenshot 2022-06-27 at 4 12 55 PM](https://user-images.githubusercontent.com/69889418/175923812-4da62284-2e91-444d-85a4-5baca335b45b.png)


```
#include<bits/stdc++.h>
using namespace std;
#define fainou ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define mod 1000000007
void solve(){
    cout<<"for(i=0;i<tc;i++) for(j=0;j<N;j++)for(j=1;j<N;j++)";
}
int main(){
	fainou;
	ll t;
	cin>>t;
	int i=1;
	while(t--){
	    ll n;
		cin>>n;
		ll a[n][3],ans;
		cin>>a[0][0]>>a[0][1]>>a[0][2];
		for(ll i=1;i<n;i++){
			cin>>a[i][0]>>a[i][1]>>a[i][2];
			a[i][0]+=min(a[i-1][1],a[i-1][2]);
			a[i][1]+=min(a[i-1][0],a[i-1][2]);
			a[i][2]+=min(a[i-1][0],a[i-1][1]);
		}
		ans=min(a[n-1][0],a[n-1][1]);
		ans=min(a[n-1][2],ans);
		cout<<"Line "<<i++<<": "<<ans<<"\n";
	}
}
```

# Q2
![Screenshot 2022-06-27 at 4 13 22 PM](https://user-images.githubusercontent.com/69889418/175923900-1cd17830-adb7-414d-916f-60e33986b5f9.png)

```
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s2;
    cin>>s>>s2;
    int z = s.length();
    int i;
    int a[z];
    for(i=0;i<(int)s.length();i++){
        a[i]=s[i+1]-s[i];
    }
    for(int i=0;i<z-2;i++){
        if(a[i]!=a[i+1]){
        cout<<"No";
        return 0;}
    }
    cout<<"Yes";
	return 0;
}
```

# Q3

![Screenshot 2022-06-27 at 4 15 55 PM](https://user-images.githubusercontent.com/69889418/175924301-10ce4241-a9da-4d4a-9ab0-60d74401f5fe.png)

```
#include<iostream>
using namespace std;
int main()
{
    int items;
    int a,j,cnt=0;
    cin>>a>>items;
    int c[items];
    string s[items];
    for(j=0;j<items;j++){
        cin>>s[j]>>c[j];
        if(c[j]<a){
            cout<<"I can afford "<<s[j]<<endl;
            a=a-c[j];
        }
        else{
            cnt++;
        cout<<"I can't afford "<<s[j]<<endl;
        }
        //cout<<cnt;
    }
    if(cnt==items)
    cout<<"I need more Yen!";
    else
    cout<<a;
	return 0;
	cout<<"for(i=1;i<=yen;i++) int i,j;";
}
```
# Q4 

![Screenshot 2022-06-27 at 4 16 59 PM](https://user-images.githubusercontent.com/69889418/175924441-e11e96d3-cab3-40b8-9c33-23eac3f0366a.png)
```
#include <stdio.h>
#include <stdlib.h>
int isqrt(n) int n; {
	int i;
	for(i=0;i*i<n;i++);
	return i;
}

int main() {
	int c;
	int t,h,s,i,j;
	int d;

	scanf("%d",&c);
	for(i=0;i<c;i++) {
		s=0;
		scanf("%d %d",&t,&h);
		d=isqrt(t); 
		s+=t+(d*4);

		for(j=1;j<h;j++) {
			s+=3; 
			s+=(d+j)*4; 
			if((d+j)>2)
				s+= (d+j-2)*2;
		}
		printf("%d liters\n",s);
	}
	return 0;
}
```
