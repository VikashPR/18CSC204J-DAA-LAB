### Divide and Conque

# Q1
![Screenshot 2022-06-27 at 4 18 46 PM](https://user-images.githubusercontent.com/69889418/175924730-663bda01-2e81-4575-868b-edac197a731c.png)
```
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string name1, name2;
    int shortestString[31][31];
    long uniqueString[31][31];
        cin>>name1>>name2;
        name1.insert(0, "0");
        name2.insert(0, "1");
        for (int i = 0; i < 31; i++)
            shortestString[0][i] = shortestString[i][0] = i, uniqueString[i][0] = uniqueString[0][i] = 1;
        for (int i = 1; name1[i]; i++)
        {
            for (int j = 1; name2[j]; j++)
            {
                if (name1[i] == name2[j])
                {
                    shortestString[i][j] = 1 + shortestString[i - 1][j - 1];

                    uniqueString[i][j] = uniqueString[i - 1][j - 1];

                }
                else
                {
                    shortestString[i][j] = 1 + min(shortestString[i][j - 1], shortestString[i - 1][j]);

                    if (shortestString[i][j - 1] == shortestString[i - 1][j])
                        uniqueString[i][j] = uniqueString[i][j - 1] + uniqueString[i - 1][j];

                    else if (shortestString[i][j - 1] < shortestString[i - 1][j])
                        uniqueString[i][j] = uniqueString[i][j - 1];
                    else
                        uniqueString[i][j] = uniqueString[i - 1][j];
                }
            }
        }
        cout  << shortestString[name1.length() - 1][name2.length() - 1] << " " << uniqueString[name1.length() - 1][name2.length() - 1] << "\n";

    return 0;
}
```

# Q2

![Screenshot 2022-06-27 at 4 21 45 PM](https://user-images.githubusercontent.com/69889418/175925227-13350348-ae76-47ac-ba4d-086db38e3011.png)

```
#include<bits/stdc++.h>
using namespace std;
int h,q,v,e;string str;map<int,int> f;
double puzzle(int u,int mx) {return (f[u]<=mx)?mx:(0.5*(puzzle(u<<1,max(mx,f[u]-f[u<<1]))+puzzle(u<<1|1,max(mx,f[u]-f[u<<1|1]))));}
int main(){
cin>>h>>q;
    while (q--){
        cin>>str;
        if (str[0]=='a'){
            scanf("%d %d",&v,&e);
            while (v) f[v]+=e,v>>=1;
        }
        else printf("%.2lf\n",puzzle(1,0));
    }
    return 0;
}
```

# Q3

![Screenshot 2022-06-27 at 4 23 16 PM](https://user-images.githubusercontent.com/69889418/175925480-ccf6921a-343a-4f10-b34b-c59e4a7df4d4.png)

```
#include<bits/stdc++.h>
using namespace std;
void garbage(){
    cout<<"int go(int f,int s)vcin>>a; ";
}
int findMinInsertions(string str, int l, int h)
{
    if (l > h) return INT_MAX;
    if (l == h) return 0;
    if (l == h - 1) return (str[l] == str[h])? 0 : 1;
    return (str[l] == str[h])?
                    findMinInsertions(str, l + 1, h - 1):
                    (min(findMinInsertions(str, l, h - 1),
                    findMinInsertions(str, l + 1, h)) + 1);
}
int main()
{
    string s;
    cin>>s;
    cout << findMinInsertions(s, 0, s.length() - 1);
    return 0;
}
```

# Q4

![Screenshot 2022-06-27 at 4 24 04 PM](https://user-images.githubusercontent.com/69889418/175925604-6817b9d9-ca9d-4870-b55b-fd6a92705e5f.png)

```
#include <bits/stdc++.h>
using namespace std;
const int N = 100005;
int R,D,n,m,d,h[N];
vector<int> adj[N];
bool prob[N],is[N];
void evil(int u,int p=0){
    h[u]= h[p]+1;
    prob[u] &= (h[u]<=d);
    if(is[u]&&h[u]>D) 
        D=h[u],R=u;
    for(unsigned int i=0;i<adj[u].size();++i){
        int v= adj[u][i];
        if(v!=p)
            evil(v,u);
    }
}
int main(){
    cin>>n>>m>>d;memset(prob,true,sizeof(prob));
    h[0]=-1;int a,b,i;D=0;
    for(i=0;i<m;++i)
        cin>>R,is[R]=true;
    for(i=0;i<n-1;++i)
        scanf("%d%d",&a,&b),adj[a].push_back(b),adj[b].push_back(a);
    evil(R);evil(R);evil(R);
    int ret=0;
    for(i=1;i<=n;++i)
        if(prob[i])++ret;
    cout<<ret<<endl;
}
```
