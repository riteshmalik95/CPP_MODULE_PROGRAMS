#include<iostream>
using namespace std;
void print_arr(int arr[][3])
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
void res_arr(int arr[][3])
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(j==1)
			{
				break;
			}
			int temp=arr[i][j];
			arr[i][j]=arr[i][j+2];
			arr[i][j+2]=temp;
		}
		break;
	}
}
int main()
{
	int arr[3][3]={1,2,3,4,5,6,7,8,9};
	
	print_arr(arr);
	res_arr(arr);
	cout<<endl<<endl;
	print_arr(arr);
}
