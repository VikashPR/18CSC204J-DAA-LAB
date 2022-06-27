### String Matching

# Q1

![Screenshot 2022-06-27 at 4 59 25 PM](https://user-images.githubusercontent.com/69889418/175931431-6506b3ca-595d-4f13-a854-9b2da9e3e5bd.png)

```
#include <iostream>
using namespace std;
int main()
{
    char a;
    cin>>a;
    if(a==97)cout<<"YES";
    else if(a==71)cout<<"NO";
    else if(a<72)cout<<"NO";
    else cout<<"YES";
    return 0;
    cout<<"string cin>>t";
}
```

# Q2

![Screenshot 2022-06-27 at 4 59 53 PM](https://user-images.githubusercontent.com/69889418/175931489-dff5788f-e6d8-485c-a57c-15c62041d9cb.png)

```
#include <bits/stdc++.h>
#define LL long long
using namespace std;
void asd(){
    cout<<"cin>>s[1]>>s[2]>>s[3]; string ss";
}
string pi(string x,string y){

    string s=y+"#"+x;
    vector<int>pi(s.length());
    for(unsigned int i=1,j=0;i<s.length();i++){
        while(j&&s[i]!=s[j])j=pi[j-1];
        if(s[i]==s[j])j++;
        pi[i]=j;
        if(j==(unsigned)y.size())return x;
    }
    return x.substr(0,x.size()-pi.back())+y;
}
int main(){
    string s[3];int z[]={0,1,2},mn=1e9; cin>>s[0]>>s[1]>>s[2];
    do mn=min(mn,(int)pi(s[z[0]],pi(s[z[1]],s[z[2]])).size());while(next_permutation(z,z+3));
    cout<<mn;
    return 0;
}
```

# Q3

![Screenshot 2022-06-27 at 5 00 48 PM](https://user-images.githubusercontent.com/69889418/175931633-b35af6c1-d7e5-45bc-b44a-a923350c8bb3.png)

```
#include<bits/stdc++.h>
using namespace std;
int main(){
   int t; cin>>t;
  while (t--){
string s; cin>>s;
  if(count(s.begin(),s.end(),'B') == s.size() /2.0) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  }
  char str[50];
  scanf("%s",str);
}
```

# Q4

![Screenshot 2022-06-27 at 5 01 54 PM](https://user-images.githubusercontent.com/69889418/175931800-39b497c7-5521-4730-afeb-9c304bb41643.png)

```
#include<bits/stdc++.h>
using namespace std;
char c,a[7]="hello ";
int i;
int main(){
while(cin>>c)
 if(c==a[i]) i++;
if(i==5) cout<<"YES"; else cout<<"NO";
return 0;
cout<<"int n=strlen(s); #include<string.h> char s[101];";
}
```

