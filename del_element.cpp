#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,pos=0,x,flag=0;
	cout<<"enter the size of array"<<endl;
	cin>>n;
	int a[n];
	cout<<"enter the array elements"<<endl;
	for(int i=0;i<n;i++)
	{
	   cin>>a[i]; //read elements from the user
	}
    if(n==0)
    {
        cout<<"array is empty"<<endl;
    }
    else
    {
	    cout<<"enter the element to be deleted"<<endl;
	    cin>>x;
	    for(int i=0;i<n;i++)
	    {
		    if(a[i]==x)
		    {
			    pos=i;
			    flag=1;
			    break;
		    }
	    }
	    if(flag==0)
        {
    	    cout<<"element is not found in the array";
	    }
	    else
	    {
	        for(int j=pos;j<n-1;j++)
	        {
	    	    a[j]=a[j+1];
		    }
		    n--;
            cout<<"array after deleting the element"<<x<<endl;
	        for(int i=0;i<n;i++)
	        {
		         cout<<a[i]<<endl;
	         }
        }
    }
	return 0;
	
}