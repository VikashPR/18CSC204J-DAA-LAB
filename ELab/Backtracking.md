### Backtracking 

# Q1

![Screenshot 2022-06-27 at 4 39 29 PM](https://user-images.githubusercontent.com/69889418/175928165-3f7bdec2-7ab3-4407-b642-cad967340496.png)

```
#include <stdio.h>
#include <stdlib.h> 
#define max 101 
int main()
{
    int a[101], t, i, j, count, n, sum;
    scanf("%d", &t);
    while(t>0)
    {
        char flag[10009] = {};
        sum = 0;
        count = 0;
        scanf("%d", &n);
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for (i = 0; i < n; i++)
            sum += a[i];
        flag[0] = 1;
        for (i = 0; i < n; i++)
            for (j = sum; j >= a[i]; j--)
                if (flag[j - a[i]] == 1)
                    flag[j] = 1;
        for (i = 0; i <= sum; i++)
        {
            if (flag[i] == 1)
                count++;
        }

        printf("%d\n", count);
        t--;
    }
    return 0;
}
```

# Q2

![Screenshot 2022-06-27 at 4 47 10 PM](https://user-images.githubusercontent.com/69889418/175929530-24c0712c-c73b-46fb-86a6-e72ac7aeac22.png)

```
#include <stdio.h>
#include<string.h>
int check(char s[],char a[],int x,int y)
{
    int i,p=0;
    for(i=x;i<=y;i++)
    {
        a[p]=s[i];
        p++;
    }
    a[p]='\0';
    int c=1;
    int j=0;
    while(j<=(strlen(a)/2))
    {
        if(a[j]!=a[strlen(a)-j-1])
        {
            c=0;
        }
        j++;
    }
    return c;
}
int main()
{
    char s[50];
    scanf("%s",s);
    char a[50];
    int i,j,c=0;
    for(i=0;i<strlen(s);i++)
    {
        for(j=i;j<strlen(s);j++)
        {
            int b=check(s,a,i,j);
            if(b==1)
            {
                c++;
            }

        }
    }
    printf("%d",c);
  return 0;
}
```

# Q3

![Screenshot 2022-06-27 at 4 48 22 PM](https://user-images.githubusercontent.com/69889418/175929756-0608fa87-d196-42ab-8899-3cd255555b72.png)

```
#include <bits/stdc++.h>
using namespace std;
#define N 21
int check(int i, int j, int n, int a[N][N])
{
    if (i < 0 || j < 0 || i >= n || j >= n || a[i][j] == 0)
        return 0;
    if (a[i][j] == 2)
        return 1;
    a[i][j] = 0;
    return check(i, j + 1, n, a) || check(i, j - 1, n, a) || check(i - 1, j, n, a) || check(i + 1, j, n, a);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x, y;
        cin >> n;
        int a[N][N];
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cin >> a[i][j];
                if (a[i][j] == 1)
                {
                    x = i, y = j;
                }
            }
        }
        cout << check(x, y, n, a) << endl;
    }
    return 0;
}
```

# Q4

![Screenshot 2022-06-27 at 4 43 06 PM](https://user-images.githubusercontent.com/69889418/175928818-2588a25e-231a-41f4-b3b7-ddb480651664.png)

```
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y=0;
        cin>>x;
        int a[x];
        for(int i=0;i<x;i++){
            cin>>a[i];
            y=y+a[i];
        }
        if(y%2==0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
```

