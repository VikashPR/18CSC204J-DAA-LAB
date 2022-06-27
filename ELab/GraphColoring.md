### Graph Colouring

# Q1

![Screenshot 2022-06-27 at 4 50 05 PM](https://user-images.githubusercontent.com/69889418/175930032-15b59993-d32b-41fe-a8d0-58b2297da0bc.png)
```
#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
const int maxn=1e5+1; 
queue<int>q;
int a,b,num[maxn];
map<ll,ll>A;
void aa(){

}
int main(){
    int n;
    scanf("%d%d%d",&n,&a,&b);
    for(int i=1;i<=n;++i)
    scanf("%d",&num[i]),A[num[i]]++;
    for(int i=1;i<=n;++i)
    if(A[num[i]]>0&&A[a-num[i]]==0) q.push(num[i]);
    while(!q.empty())
    {
        int t=q.front();
        q.pop();
        if(A[t]>0&&A[a-t]==0&&A[b-t]==0) {
            puts("NO");return 0;
        } 
        A[t]--;A[b-t]--;
        if(A[b-t]==0&&A[a-b+t]>0) q.push(a-b+t);
    }
    puts("YES");
    for(int i=1;i<=n;++i)
    {
        printf("%d ",A[num[i]]>0?0:1);
        A[num[i]]--;
     } 
}
```

# Q2

![Screenshot 2022-06-27 at 4 50 44 PM](https://user-images.githubusercontent.com/69889418/175930110-839f1f1a-8984-465b-b658-43251e21c34d.png)
```
#include<bits/stdc++.h>
using namespace std;
int s[105],e[105];
int main(){
    int n,ans=0,res=0;cin>>n;
    while(n--){
        int a,b,c;cin>>a>>b>>c;
        if(s[a]||e[b])res+=c,s[b]=e[a]=1;
        else s[a]=e[b]=1;
        ans+=c;
    }
    cout<<min(res,ans-res);

}
```

# Q3
![Screenshot 2022-06-27 at 4 51 27 PM](https://user-images.githubusercontent.com/69889418/175930228-4faf8fb4-bdfc-41ec-8584-1f5f7fffd26c.png)
```
#include<bits/stdc++.h>
using namespace std;
int t,n,s;
string a,b;
void as(){
    cout<<"int T,n,s,x; char a[200010],b[200010];";
}
int main(){
    cin>>t;
    while(t--){
        s=0;
        cin>>n>>a>>b;
        for(int i=0;i<n;i++) if(b[i]=='1'&&(a[i]=='0'||a[i-1]=='1'))
                s++;
            else if(b[i]=='1'&&a[i+1]=='1'){
                s++;
                a[i+1]='3';
            }    printf("%d\n",s);
        }

    return 0;
}
```

# Q4

![Screenshot 2022-06-27 at 4 52 01 PM](https://user-images.githubusercontent.com/69889418/175930316-29819f12-ce7c-46b5-8bf4-d19125e23f3a.png)

```
#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
#define dep(i,n)for(int i=0;i<(n);i++)
int const N=70;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
char s[N][N];
int vis[N][N];
int n,m;
int squares(int x,int y){
    if(s[x][y]!='#'||vis[x][y])return 0;
    vis[x][y]=1;
    dep(i,4)squares(x+dx[i],y+dy[i]);
    return 1;}

int main(){
   cin>>n>>m;
    dep(i,n)scanf("%s",s[i]);
    int cnt=0;
    dep(i,n)dep(j,m){
        if(s[i][j]=='.')continue;
        cnt++;s[i][j]='.';
        int k=0;memset(vis,0,sizeof(vis));
        dep(d,4)k+=squares(i+dx[d],j+dy[d]);
        if(k>1){puts("1");return 0;

        }s[i][j]='#';}
        printf("%d\n",cnt>2?2:-1);

}
```
