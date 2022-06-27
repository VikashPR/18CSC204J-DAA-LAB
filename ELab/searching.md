### Searching Techniques
# Q1
![Screenshot 2022-06-27 at 4 04 16 PM](https://user-images.githubusercontent.com/69889418/175922301-fa4a9343-b492-47ca-bbb2-28843fd15906.png)

```
#include<bits/stdc++.h>
#define f(n) for(int i=0;i<n;i++)
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int res=10000;
    f(n){
        cin>>arr[i];
    }
    f(n){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                res=min(res,arr[i]-arr[j]);
            }
        }
    }
    cout<<res;
	return 0;
	cout<<"while";
}
```
# Q2
![Screenshot 2022-06-27 at 4 05 43 PM](https://user-images.githubusercontent.com/69889418/175922566-2f132de2-7461-4eec-b9c4-d63367431dad.png)

```
#include <bits/stdc++.h>
using namespace std;
#define f(n) for(i=0;i<n;i++)
#define g(n) for(i = 1; i < n; i++)
#define k(n) for(i=n-2;i>=0;i--)
int maxWater(int arr[], int n)
{
    int left[n],i;
    int right[n];
    int water = 0;
    left[0] = arr[0];
    g(n)
        left[i] = max(left[i - 1], arr[i]);
    right[n - 1] = arr[n - 1];
    k(n)
        right[i] = max(right[i + 1], arr[i]);
    for(i = 1; i < n-1; i++)
{
      int var=min(left[i-1],right[i+1]);
      if(var > arr[i])
      {
        water += var - arr[i];
      }
    }
    return water;
}
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    f(n){
        cin>>arr[i];
    }
	cout << maxWater(arr, n);
	return 0;
}
```

# Q3

![Screenshot 2022-06-27 at 4 07 15 PM](https://user-images.githubusercontent.com/69889418/175922847-c2aa07fc-4510-4677-8945-49fbe35ac200.png)

```
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int b,n,r;
        cin>>b>>n>>r;
        int z=1;
        for(int i=1;i<=n;i++){
            z=z*i;
        }
        int res;
        res=pow(b,z);
        cout<<res%r<<endl;
    }
	return 0;
	cout<<"if(n%2==1)";
}
```
# Q4
![Screenshot 2022-06-27 at 4 09 05 PM](https://user-images.githubusercontent.com/69889418/175923200-5fa87ec8-0af5-473d-9a96-40e0e6c92754.png)

```
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3,s4,s5,s6;
    cin>>s1>>s2>>s3>>s4>>s5>>s6;
    float a,b,c;
    if(s2=="?"){
        b=stof(s4);
        c=stof(s6);
        //cout<<c;
        cout<<"F "<<fixed<<setprecision(2)<<(-b)*c;
    }
    else if(s4=="?"){
        a=stof(s2);
        c=stof(s6);
        cout<<"K "<<fixed<<setprecision(2)<<a/(-c);
    }
    else
    {
        a=stof(s2);
        b=stof(s4);
        cout<<"X "<<fixed<<setprecision(2)<<a/(-b);
    }
    return 0;
}
```

