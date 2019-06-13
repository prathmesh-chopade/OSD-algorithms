#include<iostream>
#include<conio.h>
using namespace std;
 
   

int main()
{
	int a,wt,burt=0,i,j;
	cout<<"Enter a number of process : ";
	cin>>a;
	int at[a],bt[a],ct[a],tat[a];
	cout<<"Enter arrival time and burst time : ";
	for(int i=0;i<a;i++)
	{
		cin>>at[i];
		cin>>bt[i];
	}
	for(i=0;i<a-1;i++)
   {
       for(j=0;j<a-i-1;j++) 
	   {
	   	    if(at[j]>at[j+1]) 
            at[j+1]=at[j]+at[j+1]-(at[j]=at[j+1]);
            bt[j+1]=bt[j]+bt[j+1]-(bt[j]=bt[j+1]);
	   } 
   }
	cout<<"  Pid  "<<"   AT   "<<"   BT   "<<"   CT   "<<"   TAT  "<<"  WT  \n";
	for(i=0;i<a;i++)
	{
		burt+=bt[i];
		ct[i]=burt;
		tat[i]=ct[i]-at[i];
		cout<<"  P["<<i<<"]"<<"     "<<at[i]<<"     "<<bt[i]<<"     "<<burt<<"     "<<ct[i]-at[i]<<"      "<<tat[i]-bt[i];
		cout<<"\n";
	}
	return 0;
}
