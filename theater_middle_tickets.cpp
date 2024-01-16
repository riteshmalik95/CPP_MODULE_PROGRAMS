#include<iostream>
using namespace std;

void print_arr(int seats[][3])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			//cout<<arr1[i][j];
		}
		cout<<endl;
	}
}

 int main()
 {
 	int row=3,col=3;
	int seats[row][col]={ {0,0,0}, {0,0,0}, {0,0,0} };
	
	if(seats[row/2][col/2]==0 and seats[row/2][(col/2)+1]==0 )
	{
		seats[row/2][col/2] =seats[row/2][(col/2)+1] = 1 ;
	}
	int ar[5];
	print_arr(seats);
 }
