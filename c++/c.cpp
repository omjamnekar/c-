#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
 int arr[10],n,i,num,start,end,mid,flag=0;

 cout<<"\nEnter the size of an array: ";
 cin>>n;
 cout<<"\nEnter the elements in the Ascending order:";
 for(i=1;i<=n;i++)
 {

  cin>>arr[i];
 }
 cout<<"\nEnter the element to be searched: ";
 cin>>num;

 //step 1
 start=0;
 end=n-1;
 //step 2
 while(start<=end)
 {
 //step 3
   mid=((start+end)/2);
   //step 4
   if(num==arr[mid])
   {
     cout<<"\nSearch is successful";
     cout<<"\nPosition of"<<num<<" is :"<<mid;
     flag=flag+1;

   }
   //step 5
   if(num>arr[mid])
   {
     start=mid+1;

   }
   else
   {
     end=mid-1;

   }
 }

 if(flag==0)
 {
  cout<<"\n"<<num<<" is not found in an array";
 }

  getch();
}
