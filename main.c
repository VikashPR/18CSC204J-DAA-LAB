// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// int main() {

// 	int i,j;
// 	int n,t;
// 	long a,b;
// 	long c,d;
// 	//long sqrt;
// 	 long res = 0;
// 	scanf("%d",&t);
		
// 	for(i=0;i<t;i++) {
   	
//    	res = 0;
//     	 scanf("%d %d",&a,&b);
    	 
//     	 c = ceil(sqrt(a));
//     	 d = floor(sqrt(b));
    	 
    	 
//     	 for(j=c;j<=d;j++) {
//     	 	res++;
    	 
//     	 }
    	 
//     	 printf("%ld\n",res);
//   }
// 	return 0;
// }	
#include<stdio.h>


#include<stdlib.h>


#include<assert.h>


#include<math.h>


int main()


{


    int t;


    scanf("%d",&t);


    for(int i=1;i<=t;i++)


    {


        int a;


        int b;


        scanf("%d\n %d\n",&a,&b);


        int k=0,c=0;


        for(int j=sqrt(a);j<=sqrt(b);j++)


        {


           k=j*j;


           if(k>=a && k<=b)


           c++;


        }


        printf("%d\n",c);


    }


    return 0;


}