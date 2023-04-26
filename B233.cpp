#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<math.h>
using namespace std;
typedef long int li;
typedef long long unsigned int lli;
void sapxeptang(lli a[], lli &n)
{
    for(lli i=0; i<n-1;i++)
    {
        for(lli j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
              li temp=a[i];
              a[i]=a[j];
              a[j]=temp;
            }
        }
    }
    for(lli i=0;i<n;i++)
{
    cout<<a[i];
}
}
void hvi(lli &a, lli &b)
{
    li temp=a;
    a=b;
    b=temp;
}
void sapxepgiam(lli a[], lli &n)
{
    for(lli i=0; i<n-1;i++)
    {
        for(lli j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
              li temp=a[i];
              a[i]=a[j];
              a[j]=temp;
            }
        }
    }

    if(a[0]==0)
    {
        for(lli j=1;j<n;j++)
        {
            if(a[j]!=0)
            {
                hvi(a[0],a[j]);
                break;
            }
        }
    }
for(lli i=0;i<n;i++)
{
    cout<<a[i];
}
}
int main()
{
    lli n;
    lli dem=0;
    lli a[100000];
    cin>>n;
    while(n>=1)
    {
        a[dem]=n%10;
        n=n/10;
        dem++;
    }
sapxeptang(a,dem);
cout<<endl;
sapxepgiam(a,dem);

    
}