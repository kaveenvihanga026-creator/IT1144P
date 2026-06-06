#include<iostream>
using namespace std;
 int main(){
   int num1,num2 ;
   char op;

   cout<<"enter two number:";
   cin>>num1>>num2;

   cout<<"enter operator(+,-,*,/):";
   cin>>op;

   switch(op){
     case'+':cout<<"Add="<<num1+num2;break;
     case'-':cout<<"Subtract="<<num1-num2;break;
     case'*':cout<<"Multiply="<<num1*num2;break;
     case'/':
         if(num2!=0)
            cout<<"Division="<<num1/num2;
         else
            cout<<"division by zero";
         break;

            default:cout<<"invalid number";

   }



 }


