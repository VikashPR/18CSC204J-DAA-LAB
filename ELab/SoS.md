### Sum of Subsets

# Q1

![Screenshot 2022-06-27 at 5 03 18 PM](https://user-images.githubusercontent.com/69889418/175932016-4b69b908-3dad-42fd-9e80-8701b8213e61.png)

```
#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

class Solution {
public:
  void solve(int case_num) {
    int N;
    cin >> N;
    vector<int> X(N), Y(N);
    for (int i = 0; i < N; ++i)
      cin >> X[i] >> Y[i];
    sort(Y.begin(), Y.end());
    ll ylo = 0;
    for (int yi : Y)
      ylo += abs(yi - Y[N / 2]);
    sort(X.begin(), X.end());
    ll l = -2e9, r = 2e9;
    ll xlo = LLONG_MAX;
    auto dist = [&](ll start) {
      ll ret = 0;
      int idx = 0;
      for (int xi : X) {
        ret += abs(start + idx - xi);
        idx++;
      }
      xlo = min(xlo, ret);
      return ret;
    };
    while (l <= r) {
      ll ml = l + (r - l) / 3, mr = r - (r - l) / 3;
      ll dl = dist(ml), dr = dist(mr);
      if (dl <= dr)
        r = mr - 1;
      if (dl >= dr)
        l = ml + 1;
    }
    cout << ylo + xlo << endl;
  }
};

int main() {
  int t;
  cin >> t;
  for (int i = 1; i <= t; ++i) {
    Solution solution = Solution();
    solution.solve(i);
  }
}
```

# Q2

![Screenshot 2022-06-27 at 5 04 57 PM](https://user-images.githubusercontent.com/69889418/175932261-b55f99a3-e934-489c-b5bd-f8efaa112114.png)

```
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,s,arr[7]={0};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        int k=7,l;
        while(s){
            l=s%10;
            arr[k-1]+=l;;
            k--;
            s=s/10;
        }
    }
    sort(arr,arr+7);
    cout<<arr[6];

}
```

# Q3
![Screenshot 2022-06-27 at 5 05 32 PM](https://user-images.githubusercontent.com/69889418/175932356-7f3fc94e-3b53-49c6-acd1-f880ff48ed63.png)

```
#include <iostream>
using namespace std;
int main()
{
    int t,x,y,z;
    cin>>t;
    while (t--){
    cin>>x>>y;
    z=21-(x+y);
    if(z>10){
        cout<<"-1\n";
        }
    else{ 
        cout<<z<<"\n";
        }
    }
    return 0;
}
```

# Q4
![Screenshot 2022-06-27 at 5 05 58 PM](https://user-images.githubusercontent.com/69889418/175932407-92795c6e-ad87-4f67-b534-d7248fdaf307.png)

```
#include<iostream>
using namespace std;
void for_(){

}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x<y)
        cout<<"Royal Enfield"<<endl;
        else if(x==y) cout<<"SAME"<<endl;
        else cout<<"Audi"<<endl;
    }

    return 0;
}
```
