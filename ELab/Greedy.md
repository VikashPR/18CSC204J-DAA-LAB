### Greedy Algorithm

# Q1

![Screenshot 2022-06-27 at 4 25 57 PM](https://user-images.githubusercontent.com/69889418/175925927-437b2a7d-eb76-414d-9a34-0d8e1f835be9.png)
```
#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
int p[N],par,x[N];
int main(){
    int n,i,m,s,d;
    cin>>n>>m>>s>>d;
    x[0]=-1;
    for(i=1;i<=n;++i)
        cin>>x[i];
    sort(x,x+n+1);
    par = n;
    for(i=n-1;i>=0;--i)
        if(x[i+1]-x[i]>=s+2 && x[par]-x[i+1]<=d-2)
            p[i]= par,par = i;
    if(par>0){
        printf("IMPOSSIBLE\n");
    }
    else{
        for(i=0;i<n;i= p[i])
            printf("RUN %d\nJUMP %d\n",x[i+1]-x[i]-2,x[p[i]]-x[i+1]+2);
        if(x[n]+1<m)
            printf("RUN %d\n",m-x[n]-1);
    }
    return 0;
    cout<<"cin>>a[i];";
}
```

# Q2
![Screenshot 2022-06-27 at 4 28 13 PM](https://user-images.githubusercontent.com/69889418/175926338-f8136498-27e1-4706-8f0d-8d6d78cbcb19.png)


```
#include <bits/stdc++.h>
using namespace std;
int p = 1, n, j, a[105];
char c;
int main()
{
    a[j++] = 1;
    while (cin>>c && c != '=')
    {
        if (c == '-') p--, a[j++] = -1;
        if (c == '+') p++, a[j++] = 1;
    }
    cin>>n;
    for(int i=0;i<j;i++)
    {
        if(a[i]>0)while (p<n && a[i]<n) a[i]++, p++;
        else while (p>n&&a[i]<0 && a[i]>-n) a[i]--, p--;
    }
    if (p != n) { cout << "Impossible\n"; return 0; }
    cout << "Possible\n";
    for(int i=0;i<j;i++)
    cout << (i ? (a[i]<0 ? "- " : "+ ") : "") << abs(a[i]) << " ";
    cout << "= " << n;

}
```

# Q3

![Screenshot 2022-06-27 at 4 28 43 PM](https://user-images.githubusercontent.com/69889418/175926423-b02f37ae-7f03-4ab9-8b8e-c585cebec763.png)

```
#include<bits/stdc++.h>
using namespace std;
#define ans cin>>ans[0];cin>>a>>b>>c;
#define f(n) for(int i=0;i<n;i++)
void solve(){}
int main(){
    int n;cin>>n;
    int a[n];f(n) cin>>a[i];
    int M;cin>>M;
    map<int,int> m;
    while(M--){
        int x,y,c;cin>>x>>y>>c;
        if(m.find(y)==m.end())
            m[y]=c;
        else if(c<m[y]) 
            m[y]=c;
    }
    if((int)m.size()==n-1){
        long long int sum=0;
        for(auto j : m){
            sum+=j.second;
        }
        cout<<sum;
    }
    else cout<<-1;
}
```

# Q4

![Screenshot 2022-06-27 at 4 29 33 PM](https://user-images.githubusercontent.com/69889418/175926567-7a05b163-8aa8-48ab-8a3f-d37ab1496546.png)

```
#include<bits/stdc++.h>
using namespace std;
int n,l,z;
pair<int,int> a[500020];
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i].second>>a[i].first;
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(l<a[i].second){
            z++;
            l=a[i].first;
        }
    }cout<<z;
    return 0;
}
```
