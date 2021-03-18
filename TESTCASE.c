#include <stdio.h>
#include<time.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

#ifndef ONLINE_JUDGE
#define freopen freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#else
#define freopen //comment
#endif
// #define io ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define endl "\n"
#define f first
#define pb push_back
#define int long long int

main()
{
   freopen
   int a=1,b=2,cnt=1,flag=0,ok=0,count=0,cnt1=0;
    int edges=1000000;
    int nodes=80000;
     printf("%lld\n",nodes);
     printf("%lld\n",edges);
    for(int i=1;i<=edges;i++)
    {  
        if(a==nodes)
        {
         a=1;
         b=2;
         b+=cnt;
         cnt++;
        }
        int f=rand()%999;
        f+=100;
        if(b>=nodes+1){b=500;count++;}
        if(a>=nodes)ok=1;
        printf("%lld %lld %lld ",a,b,f);
        cnt1++;
        a++; b++;
    }
    
    //printf("\nCNT1=%lld\n",cnt1);

    return 0;
}
   

