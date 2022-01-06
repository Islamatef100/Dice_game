#include <iostream>
//#include <vector>
#include<utility>
using namespace std;
int z=1;
int t1,t2;
int who_win(int x,int y,int n,int i)
{
    z++;
    z=z%2;
    if(i==0){t1=x+y; return -1;}
    t2=x+y;
    if(t2>t1)
        return z;
    else
    {
        t1=t2;
    }
    if(i==n-1)
    {
        return(z+1%2);
    }
    return -1;
}
string play()
{
    
    int n=0;
    cout<<"enter n rounds:\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        pair<int, int>p;
        cout<<"play:\n";
        cin>>p.first>>p.second;
        int x= who_win(p.first,p.second,n,i);
        if(x==0)
            return"player 1 win\n";
        else if(x==1)
            return"player 2 wine\n";
        
    }
    return "no one win\n";
}
int main( )
{
      while(1)
    {
        cout<<play()<<endl;
        
    }
}
   
