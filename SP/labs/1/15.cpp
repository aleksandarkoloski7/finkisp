/*Да се напише програма која за петцифрен број, внесен од стандарден влез, ќе го "искастри". 
Еден број е искастрен ако неговата најлева и најдесна цифра се избришани. 
На излез да се испечатат искастрениот број и во нов ред збирот на цифрите кои се кастрат.
Појаснување: бројот 54321 искастрен е 432. Цифрите кои се кастрат се 5 и 1. */
#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int c1,c2,c3,c4,c5;
   c1 = n%10;
   c2 = n/10%10;
   c3 = n/100%10;
   c4 = n/1000%10;
   c5 = n/10000%10;
   int ostatokbroj,sumaseckan;
   ostatokbroj = c4*100+c3*10+c2;
   sumaseckan = c1+c5;
   cout<<ostatokbroj<<endl;
   cout<<sumaseckan;
   return 0;
}
