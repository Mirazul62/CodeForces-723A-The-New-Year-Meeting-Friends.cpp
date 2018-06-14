#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n1,n2,n3,len,sm=0,lar=0,i,n=0,mean=0,mid=0,dis1=0,dis2=0,dis3=0;
    cin>>n1>>n2>>n3;


    for(i=0; i<3; i++)
    {
        if(n1>n2 && n1>n3)
        {
            lar=n1;
        }
        else if(n2>n1 && n2>n3)
        {
            lar=n2;
        }
        else
        {
            lar=n3;
        }
    }
    for(i=0; i<3; i++)
    {


        if(n1<n2 && n1<n3)
        {
            sm=n1;
        }
        else  if(n2<n1 && n2<n3)
        {
            sm=n2;
        }
        else
        {
            sm=n3;
        }

    }


      mean=(lar+sm)/2;


      if(n1<lar && n1>sm)
      {   mid=n1;

      }
     else  if(n2<lar && n2>sm)
      {   mid=n2;

      }
     else
      {   mid=n3;

      }
      if (mean==mid)
      {
           dis1=lar-mean;
           dis2=mean-sm;
           dis3=dis1+dis2;
      }


    if(mean!=mid)
      {
         // int dis4=abs(mid-mean);
           dis1=lar-mean;
           dis2=mean-sm;
           dis3=dis1+dis2;
      }
      cout<<dis3<<endl;



}





