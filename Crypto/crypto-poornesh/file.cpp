 #include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;

class CLS0x0000801
{
       public:
              long int p,q,n,t,flag,e[100],d[100],temp[100],j,m[100],en[100],i;
              string msg;
              CLS0x0000801(long x, long y, string s)
              {
                     long i;
                     p = x;
                     q = y;
                     msg = s;
                     n=p*q;
                     t=(p-1)*(q-1);
                     for(i=0;i<msg.size();i++)
                     {
                           m[i] = msg[i];
                     }
              }

              int FUNC0x00004003(long pr)
              {
                     int i;
                     j=sqrt(pr);
                     for (i=2;i<=j;i++) {
                           if(pr%i==0)
                               return 0;
                     }
                     return 1;
              }
              void FUNC0x00008266()
              {
                     int k;
                     k=0;
                     for (i=2;i<t;i++)
                     {
                           if(t%i==0)
                               continue;
                           flag=FUNC0x00004003(i);
                           if( flag==1 && i!=p && i!=q)
                           {
                                  e[k]=i;
                                  flag=FUNC0x00004012(e[k]);
                                  if(flag>0) {
                                         d[k]=flag;
                                         k++;
                                  }
                                  if(k==99)
                                          break;
                           }
                     }
                     for (i=0;i<j-1;i++)
                     {
                           cout<<(i+1)<<"\t("<<e[i]<<","<<d[i]<<")"<<endl;
                     }
                     cout<<endl;
              }
              long int FUNC0x00004012(long int x)
              {
                     long int k=1;
                     while(1) {
                           k=k+t;
                           if(k%x==0)
                               return(k/x);
                     }
              }
              void FUNC0x00004032(int x)
              {
                     long int pt,ct,key=e[x-1],k,len;
                     cout<<"Value of e used is "<<key<<endl;
                     i=0;
                     len = msg.size();
                     while(i!=len)
                     {
                           pt=m[i];
                           pt=pt-96;
                           k=1;
                           for (j=0;j<key;j++)
                           {
                                  k=k*pt;
                                  k=k%n;
                           }
                           temp[i]=k;
                           ct=k+96;
                           en[i]=ct;
                           i++;
                     }
                     en[i]=-1;
                     cout<<"The Plain Text Message : "<<endl;
                     for (i=0;en[i]!=-1;i++)
                     cout<<(char)en[i];
                     cout<<endl;
              }
              void FUNC0x00004037(int x)
              {
                     long int pt,ct,key=d[x-1],k;
                     cout<<"Value of d used is "<<key<<endl;
                     i=0;
                     while(en[i]!=-1)
                     {
                           ct=temp[i];
                           k=1;
                           for (j=0;j<key;j++) {
                                  k=k*ct;
                                  k=k%n;
                           }
                           pt=k+96;
                           m[i]=pt;
                           i++;
                     }
                     m[i]=-1;
                     cout<<"The Decrypted Message : "<<endl;
                     for (i=0;m[i]!=-1;i++)
                     cout<<(char)m[i];
                     cout<<endl;
              }
};


int main()
{
       long i,n,t,p,q,x;
       cout<<"ENTER THE PUBLIC KEY"<<endl;
       cin>>p;
       cout<<"ENTER THE PRIVATE KEY"<<endl;
       cin>>q;
       cout<<"ENTER THE CIPHER TEXT"<<endl;
       string msg;
       getchar();
       getline(cin,msg);
       CLS0x0000801 ob(p,q,msg);
       cout<<"Possible values of (e,d) are"<<endl;
       ob.FUNC0x00008266();
       cout<<"Chose which values of (e,d) you want to use?"<<endl;
       cin>>x;
       cout<<endl;
       ob.FUNC0x00004032(x);
       cout<<endl;
       //ob.FUNC0x00004037(x);
       return 0;
}
