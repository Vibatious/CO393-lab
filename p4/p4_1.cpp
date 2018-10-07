#include <iostream>
using namespace std;
int main()
{
	int a;
	int min_index;
	cout<<"Enter the no. of vertex:";
	cin>>a;
	int mst_array[a];
	int weight[a];
	bool check_mst_vertices[a];
	int adj_matrix[a][a];
	cout<<"Enter the adjacency matrix";
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			cin>>adj_matrix[i][j];
		}
	}

	cout<<"here\n";

	int size = a;

	cout<<"here1\n";

	for (int i = 0; i < size; i++)
	{
		check_mst_vertices[i]=false;
		weight[i] = 1000; 
	}
	cout<<"here2\n";

	mst_array[0]=-1;
	weight[0]=0;

	for (int i = 0; i < size; i++)
	{
		// min_index = min_weight(weight,check_mst_vertices,size);

		int min=10000,min_index;
		for (int k = 0; k < size ;k++)
		{
			if (weight[k]<min && check_mst_vertices[k]==false)
			{	
				min = weight[k];
				min_index = size;
			}
		}
		
		cout<<"here3\n";

		check_mst_vertices[min_index]=true;

		for (int j = 0; j < size; j++)
		{
			cout<<"here4\n";	
			if(adj_matrix[min_index][j] && check_mst_vertices[j] == false && adj_matrix[min_index][j] < weight[j])
			{
				cout<<"here5\n";
				mst_array[j]=min_index,
				weight[j]=adj_matrix[min_index][j];

			}
		}
	}


		
   			for (int i = 1; i < a; i++){
   			cout<<mst_array[i]<<"-"<<i<<"\t"<<adj_matrix[i][mst_array[i]]<<"\n";
   				cout<<"here100\n";
   		}
}