    #include<bits/stdc++.h>

   using namespace std;



    int main()

    {

      int t,c,i;

      long n;

      cin>>t;

      while(t--)

      {
         cin>>n;
          c=0;i=1;

          
          while(n/pow(5,i)>=1)

          {

              c=c+(int)(n/pow(5,i));

              i=i+1;

          }

          cout<<c<<endl;

      }

       return 0;

    }
