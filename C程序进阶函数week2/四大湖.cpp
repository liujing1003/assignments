#include<iostream>
using namespace std;

int main()
{
   for(int poyang=1; poyang<5; poyang++)
   {
     for(int dongting=1; dongting<5; dongting++)
     {
       for(int tai=1; tai<5; tai++)
       {
          for(int hongze=1; hongze<5; hongze++)
          {
         bool r = (poyang != dongting) && (poyang != tai) && (poyang != hongze) && (dongting != tai) && (dongting != hongze) && (tai != hongze);
         if(r)
         {
           int a = (poyang == 3) + (dongting == 1) + (hongze == 4);
               int b = (poyang == 2) + (dongting == 4) + (tai == 3) + (hongze == 1);
               int c = (dongting == 3) + (hongze == 4);
               int d = (poyang == 1) + (dongting == 3) + (tai == 4) + (hongze == 2);
           if((a == 1) && (b == 1) && (c == 1) && (d == 1))
           {
             cout<< poyang << endl;
             cout<< dongting << endl;
             cout<< tai << endl;
             cout<< hongze << endl;
             cout<<endl<<endl;
           }
         }
          }
       }
     }
   }
 return 0;
}
