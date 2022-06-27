### Dynamic Programming

# Q1
![Screenshot 2022-06-27 at 4 31 14 PM](https://user-images.githubusercontent.com/69889418/175926827-06b3572d-d515-4be2-be95-52a319100f49.png)

```
#include<bits/stdc++.h>
using namespace std;
int i,n, m, sum, a[1002][2];
void sol()
{
 cin >> n >> m;
 for(int i = 1; i <= m; i ++)a[i][0] = a[i][1] = -1;
 a[0][0] = 0;
 a[0][1] = -1;
 sum = 0;
 for(i=1;i<=n;i++)
 {
 int v, p;
 cin >> v >> p;
 for(int j = min(m-p/2, sum); j >= 0; j --)
 {
 if(a[j][1] != -1 && j + p <= m)a[j+p][1] = max(a[j+p][1], a[j][1] + v);
 if(a[j][0] != -1)
 {
 if(j + p <= m)a[j+p][0] = max(a[j+p][0], a[j][0] + v);
 a[j+p/2][1] = max(a[j+p/2][1], a[j][0] + v);
 }
 }
 sum = min(m, sum + p);
 }
 int ans =0 ;
 for(int i = 1; i <= m; i ++)ans = max(ans, max(a[i][0], a[i][1]));
 cout << ans << '\n';
}
int main()
{
 int ntest = 1;
 cin >> ntest;
 while(ntest -- > 0)sol();
}
```

# Q2

![Screenshot 2022-06-27 at 4 34 33 PM](https://user-images.githubusercontent.com/69889418/175927359-30faac87-8e65-4d77-935c-93cfc952d040.png)

```
#include<bits/stdc++.h>
using namespace std;
int n,x,i;
int a[1000020];
int p[1000020];
int f[1000020];
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
	    cin>>x;
        p[x]=i;
    }
	for(i=0;i<n;i++)
	{
	    scanf("%d",&x);
		a[i]=-p[x]-1;
    }
	for(i=0;i<n;i++)
		*lower_bound(f,f+n,a[i])=a[i];
    int zero=0;
	printf("%ld\n",lower_bound(f,f+n,zero)-f);
	return 0;
}
```

# Q3

![Screenshot 2022-06-27 at 4 35 24 PM](https://user-images.githubusercontent.com/69889418/175927500-dcd540e7-f71e-41ce-ad43-890b6901b469.png)
```
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
//preSum();
ll t;
cin>>t;
while(t--){
ll n;
cin>>n;
if(n==1)
printf("1\n");
else if(n==2)
printf("4\n");
else if(n==3)
printf("10\n");
else
printf("%lld\n",9*n-18);
}
}
```

# Q4
![Screenshot 2022-06-27 at 4 37 05 PM](https://user-images.githubusercontent.com/69889418/175927796-10236ac6-bd57-42da-80d1-058cc01fae5c.png)
```
#include <stdio.h>
int function(int arr[], int i, int j, int memo[][1001], int k)
{
    if (i > j)
        return 0;
    if(arr[i]!=arr[j])
        return 0;
    if (i == j)
        return 1;
    if (memo[i][j] != -1)
        return memo[i][j];
    else
    {
        int answer = 0;
        for (int p = 1; p <= k; p++)
        {
            for (int q = 1; q <= k; q++)
            {
                answer += function(arr, i + p, j - q, memo, k);
            }
        }
        if (answer != 0)
            answer = 1;
        memo[i][j] = answer;
        return answer;
    }
}
int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    int j, arr[n + 1];
    for (j = 1; j <= n; j++)
        scanf("%d", &arr[j]);
    int memo[1001][1001];
    // int answer=0;
    int i;
    for (i = 0; i <= 1000; i++)
    {
        for (j = 0; j <= 1000; j++)
        {
            memo[i][j] = -1;
        }
    }
    int answer = function(arr, 1, n, memo, k);
    if (answer == 0)
        printf("NO\n");
    else
        printf("YES\n");
}
```
