/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include<iostream>
#define max 100
using namespace std;

class shell
{
public:
int n,length;
int arr[max];
void set_size()
{
	cout<<"enter size of array :- ";
	cin>>n;
	cout<<"enter array elements :-";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<endl;
}
void insertion_sort()
{
	for(int i=1;i<n;i++)//outer loop for rows
	{
		cout<<"pass : "<<i-1<<"  ";
		if(i==1)
		{
			for(int k=0;k<n;k++)
			{
				cout<<"\t"<<arr[k]<<"\t";
			}
		}
		else if(i>1 || i<n)
		{
			for(int k=0;k<i;k++)
			{
				cout<<"\t"<<arr[k]<<"\t";
			}
		}
		cout<<endl;
		if(i==(n-1))
		{
			cout<<"pass : "<<n-1<<"  ";
			for(int k=0;k<i;k++)
			{
				cout<<"\t"<<arr[k]<<"\t";
			}
				cout<<"\t"<<arr[n-1]<<"\t";
		}

		int temp=arr[i];
	

		for(int j=i;j>0;j--)// inner loop for coloumns
		{
			if(temp<arr[j-1])
			{
				temp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=temp;
			}
		}

	 	cout<<endl;
	}
}
void display_elements()
{
        cout<<"the sorted array is as follows :  ";

        for(int i=0;i<n;i++)
        {
		cout<<arr[i]<<"\t";
        }
        cout<<endl;
}
void shell_sort()
{
	if(n%2==0)
	{
		length=n/2;	
	}
	else
		length=(n/2)+1;
    
    while(length>0)
    {
       int gap=length-1;
       for(int i=0;i<=n-gap;i++)
       {
          if(arr[i]>arr[i+length])
          {
            int temp;
            temp=arr[i];
            arr[i]=arr[i+length];
            arr[i+length]=temp;
          }
       }
       length=length/2;
    }
    if(length==0)
    {
      this->insertion_sort();
    }
}


};

int main()
{

shell s1;
s1.set_size();
s1.shell_sort();
s1.display_elements();

return 0;
}
//*******************************
