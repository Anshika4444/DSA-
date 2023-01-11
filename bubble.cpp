#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
 int i,j;
 for(i=0; i<n-1; i++)
 {
     for (j=0; j<n-i-1; j++)
     {
         if (arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
     }
 }
 cout <<"Sorted Array in Ascending Order:\n";
 for (i=0; i<n; i++)
        cout<<arr[i]<< " ";
    cout<<endl;
}
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  bubbleSort(arr,n);
}


//modified bubble Sort
#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n)
{
int i, j;
bool flag;
for (i = 0; i < n-1; i++)
{
	flag = false;
	for (j = 0; j < n-i-1; j++)
	{
		if (arr[j] > arr[j+1])
		{
		swap(arr[j], arr[j+1]);
		flag = true;
		}
	}
	if (flag == false)
		break;
}
for (i=0; i<n; i++)
    cout<<arr[i]<<" ";
}
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  bubbleSort(arr,n);
}
