#include<iostream>
using namespace std;
int BinrySearch(int a[],int size,int possion);

int main()
{
int a[20],item,size,possion;
cout<<"ENTER SIZE OF ARRAY";
cin>>size;
cout<<"ENTER ELEMENTS OF ARRAY";
for(int i=0;i<size;i++)
cin>>a[i];
cout<<"ENTER ELEMENT TO BE SEARCHED";
cin>>item;

possion=BinrySearch(a,size,item);

if(possion==-1)
	cout<<"ELEMENT NOT FOUND";
else
	cout<<"ELEMENT FOUND AT POSSION  "<<possion<<"   POSITION "<<(possion+1)<<endl;
return 0;

}


int BinrySearch(int a[],int size,int item)
{
int beg,last,mid;
beg=0; last=size-1;

while(beg<=last)
{
	mid=(int)((beg+last)/2);

	if(item==a[mid])
	return mid;

	else if(item>a[mid])
	beg=mid+1;

	else
	last=mid-1;
}
return -1;
}
