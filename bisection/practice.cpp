//100 x^4 +  10 x^3 - 100x^2 +    100000 x - 1000
#include<bits/stdc++.h>
using namespace std;
int j,k;
double f(double x,double co[],double po[])
{
    int i;
    double sum=0;
    for(i=0;i<j;i++)
    {
        sum=sum+co[i]*pow(x,po[i]);
    }
    return sum;
}

int main()
{
    while(1){
    int n,m,i,l;
    double a,b,c,d,e,p,q,r,co[100],po[100];
    string x;
    getline(cin, x);
    cout<<x<<endl;
    x.erase(remove_if(x.begin(), x.end(), ::isspace), x.end());
   // cin>>a>>b>>e;
   cout<<x<<endl;
    l=x.size();
    j=0;
    k=0;
    n=0;
    int nn=0;
    char ch;
    for(i=0;i<l;i++)
    {
        if(x[i]=='=')
            break;

            if(x[i]=='+'||x[i]=='-')
            {
               if(nn!=0)
                 {
                    double sum=0,s;
                    for(m=n;m<i;m++)
                    {
                        s=x[m]-'0';
                        sum=sum+(s*pow(10,(nn-m+n-1)));
                    }
                     if(ch=='-')
                     sum=sum*-1;
                     co[j++]=sum;
                     po[k++]=0;
                }
            if(x[i]=='+')
            {
               ch='+';
               n=i+1;
               nn=0;
               continue;
            }
            else if(x[i]=='-')
            {
               ch='-';
               n=i+1;
               nn=0;
               continue;
            }

            }
            if(x[i]=='x')
            {
              //  cout<<nn<<endl;
                double sum=0,s;
                if(i-n==0)
                    sum=1;
                for(m=n;m<i;m++)
                {
                    s=x[m]-'0';
                    sum=sum+(s*pow(10,(nn-m+n-1)));
                }
                if(ch=='-')
                sum=sum*-1;
                co[j++]=sum;
                if(x[i+1]=='^')
                {
                    po[k++]=x[i+2]-'0';
                    i=i+2;
                }
                else po[k++]=1;

                nn=0;

                continue;


            }
            nn++;

    }
    if(nn!=0)
    {
       //cout<<nn<<" "<<n<<endl;
        double sum=0,s;
        for(m=n;m<i;m++)
        {
            s=x[m]-'0';
            sum=sum+(s*pow(10,(nn-m+n-1)));
        }
         if(ch=='-')
            sum=sum*-1;
            co[j++]=sum;
            po[k++]=0;
    }
    for(i=0;i<j;i++)
    {
        cout<<co[i]<<" "<<po[i]<<endl;
    }
    c=(a+b)/2;
//    if(f(a,co,po)*f(b,co,po)>0)
//    {
//        cout<<"This enteval has no root"<<endl<<endl<<endl;
//        continue;
//    }
//    while(abs(f(c,co,po))>e)
//    {
//        cout<<a<<"    "<<b<<"    "<<c<<endl;
//        if(f(a,co,po)*f(c,co,po)<0)
//        {
//            b=c;
//        }
//        else a=c;
//
//        c=(a+b)/2;
//    }
//    cout<<"Root is :"<<setprecision (10)<<c<<endl;




    }

}
