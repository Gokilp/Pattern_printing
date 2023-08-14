#include<iostream> 
using namespace std;

void pattern1(int n)

{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern2(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern3(int n)
{
    for(int i=0;i<=n;i++)
    {
      for(int j=1;j<=i;j++)
      {
        cout<<j;
      }
      cout<<endl;
    }
}
void pattern4(int n)

{
    for(int i=0;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}
void pattern5(int n)
{
   for(int i=n-1;i>=0;i--)
{
     for(int j=0;j<=i;j++)
     {
        cout<<"*";
     }
     cout<<endl;
}
}
void pattern6(int n)
{
    for(int i=n;i>=0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern7(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" "; 
        }
        cout<<endl;
    }
}
void pattern8(int n)

{
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<i;j++)
      {
         cout<<" ";
      }

      for(int j=0;j<2*n-(2*i+1);j++)
      {
        cout<<"*";
      }
     for(int j=0;j<i;j++)
     {
        cout<<" ";
     }
     cout<<endl;
   }
}
void pattern9(int n)
{
   for(int i=0;i<n;i++)
   {
     for(int j=0;j<n-i-1;j++)
     {
         cout<<" ";
     }
     for(int j=0;j<2*i+1;j++)
     {
         cout<<"*";
     }
     for(int j=0;j<n-i-1;j++)
     {
         cout<<" ";
     }
     cout<<endl;
   }
   for(int i=0;i<n;i++)
   {
     for(int j=0;j<i;j++)
     {
         cout<<" ";
     }
     for(int j=0;j<2*n-(2*i+1);j++)
     {
        cout<<"*";
     }
     for(int j=0;j<i;j++)
     {
        cout<<" ";
     }
     cout<<endl;
   }

}
void pattern10(int n)
{
   for(int i=0;i<=n;i++)
   {
      for(int j=0;j<i;j++)
      {
         cout<<"*";
      }
      cout<<endl;
   }
   for(int i=n-1;i>=0;i--)
   {
     for(int j=0;j<i;j++)
     {
        cout<<"*";
     }
     cout<<endl;
   }
}
void pattern11(int n)
{
   int start =1;
   for(int i=0;i<n;i++)
   {
      if(i%2==0)
       start=0;
       else
       start=1;
       for(int j=0;j<i;j++)
       {
          cout<<start;
          start=1-start;
       }
       cout<<endl;
   }
}
void pattern12(int n)
{
  int spaces=2*n-1;
  for(int i=1;i<=n;i++)
  {
     for(int j=1;j<=i;j++)
     {
         cout<<j;
     }
     for(int j=1;j<spaces;j++)
     {
         cout<<" ";
     }
     for(int j=i;j>=1;j--)
     {
        cout<<j;
     }
     cout<<endl;
     spaces=spaces-2;
  }
}
void pattern13(int n)
{
     int k=1;               
   for(int i=0;i<=n;i++)
   {
     for(int j=1;j<=i;j++)
     {
        cout<<k<<" ";
        k++;
     }
     cout<<endl;
   }
}
void pattern14(int n)
{
  for(int i=0;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
        cout<< char(64+j);
    }
    cout<<endl;
  }
}
void pattern15(int n)
{
    for(int i=n;i>1;i--)
    {
         for(int j=0;j<i;j++)
         {
            cout<<char(65+j);
         }
         cout<<endl;
    }
}
void pattern16(int n)
{
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<i;j++)
            {
                cout<<char(65+i);
            }
            cout<<endl;
        }

}
void pattern17(int n)
{
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        if(i==0||j==0|| i==n-1|| j==n-1)
        cout<<"*";
        else
        cout<<" ";
      }
      cout<<endl;
    }
}
int main()
{
    pattern1(5);
    pattern2(5);
    pattern3(5);
    pattern4(5);
    pattern5(5);
    pattern6(5);
    pattern7(5);
    pattern8(5);
    pattern9(5);
    pattern10(5);
    pattern11(5);
    pattern12(5);
    pattern13(5);
    pattern14(5);
    pattern15(5);
    pattern16(5);
    pattern17(5);
}