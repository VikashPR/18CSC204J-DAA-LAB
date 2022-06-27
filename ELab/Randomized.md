### Randomized algorithm

# Q1

![Screenshot 2022-06-27 at 5 08 57 PM](https://user-images.githubusercontent.com/69889418/175932839-ee78dbcb-af16-4472-815a-676f08fa5707.png)

```
#include<iostream>
using namespace std;
int main()
{
int a;
cin >> a;
while(a--){
    int b,c;
    cin >> b >> c;
    int a[b],count=0;
    for(int i=0;i<b;i++){
        cin>>a[i];
         if(a[i]<=0) count++;
    }

if(count>=c) cout<<"NO"<<endl;
else cout<<"YES"<<endl;


}

    return 0;
}
```

# Q2

![Screenshot 2022-06-27 at 5 09 19 PM](https://user-images.githubusercontent.com/69889418/175932898-5696a53a-2071-4a15-bc47-15d4f907258a.png)

```
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array
void dummy(){}
int n, k, p, a[50][30];
int dp[51][1501];
void solve() {
cin >> n >> k >> p;
memset(dp, 0xc0, sizeof(dp));
dp[0][0]=0;
for(int i=0; i<n; ++i) {
memcpy(dp[i+1], dp[i], sizeof(dp[0]));
for(int j=0, s=0; j<k; ++j) {
cin >> a[i][j];
s+=a[i][j];
//use j+1 plates
for(int l=0; l+j+1<=p; ++l)
dp[i+1][l+j+1]=max(dp[i][l]+s, dp[i+1][l+j+1]);
}
}
cout << dp[n][p] << "\n";
}
int main() {
int n, i;
cin >> n;
for(i=0;i<n;i++) {
solve();
}
return 0;
cout<<"int max(int a,int b) for(int i = 0;i < n;i++) ";
}
```

# Q3
![Screenshot 2022-06-27 at 5 11 16 PM](https://user-images.githubusercontent.com/69889418/175933275-447ebd55-db59-474d-9ef4-e718e2065f11.png)


```
#include<iostream>
using namespace std;

int main()
{
int t,n;
cin>>t;
while(t--){
    cin>>n;
    if(n%7>1) cout<<"FIRST"<<endl;
    else cout<<"SECOND"<<endl;
}

    return 0;
    cout<<"for";
}
```

# Q4

![Screenshot 2022-06-27 at 5 10 43 PM](https://user-images.githubusercontent.com/69889418/175933186-8ff76245-b660-42a8-80ec-17a11708d615.png)

```
#include<iostream>
using namespace std;
int main()
{
    int items;
    int a,i,cnt=0;
    cin>>a>>items;
    int c[items];
    string s[items];
    for(i=0;i<items;i++){
        cin>>s[i]>>c[i];
        if(c[i]<a){
            cout<<"I can afford "<<s[i]<<endl;
            a=a-c[i];
        }
        else{
            cnt++;
        cout<<"I can't afford "<<s[i]<<endl;
        }
        //cout<<cnt;
    }
    if(cnt==items)
    cout<<"I need more Euro!";
    else
    cout<<a;
    return 0;
    cout<<"char name[MAX][LEN];int price[MAX] afford[MAX]";
}
```
