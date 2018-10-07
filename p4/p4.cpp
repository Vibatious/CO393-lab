#include<iostream>
//#include<climits.h>
using namespace std;

// int min_weight(int weight[],bool check_mst_vertices[],int size){
// 	int min=INT_MAX,min_index;
// 	for (int i = 0; i < size ; ++i)
// 	{
// 		if (weight[i]<min && check_mst_vertices[i]==false)
// 		{	
// 			min = weight[i];
// 			min_index = size;
// 		}
// 	}
// 	return min_index;
// }

// void MST(int arr[][size],int size){
// 	int mst_array[size];
// 	int weight[size];
// 	bool check_mst_vertices[size];
// 	int min_index;

// 	for (int i = 0; i < size; i++)
// 	{
// 		check_mst_vertices[i]=false;
// 		weight[i] = INT_MAX; 
// 	}
// 	mst_array[0]=-1;
// 	weight[0]=0;

// 	for (int i = 0; i < size; i++)
// 	{
// 		min_index = min_weight(weight,check_mst_vertices,size);

// 		check_mst_vertices[min_index]=true;

// 		for (int j = 0; j < size; i++)
// 		{
// 			if(arr[min_index][j] && check_mst_vertices[j] == false && arr[min_index][j] < weight[j])
// 			{
// 				mst_array[j]=min_index;
// 				weight[j]=arr[min_index][j];

// 			}
// 		}
// 	}
// 	 print(mst_array,size,arr);
// }

// int printMST(int mst_array[], int size, int arr[][])
// {
//    printf("Edge   Weight\n");
//    for (int i = 1; i < size; i++)
//    printf("%d - %d    %d \n", mst_array[i], i, graph[i][mst_array[i]]);
// }


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

	int size = a;

	for (int i = 0; i < size; i++)
	{
		check_mst_vertices[i]=false;
		weight[i] = 1000; 
	}
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
	

		check_mst_vertices[min_index]=true;

		for (int j = 0; j < size; i++)
		{
			if(adj_matrix[min_index][j] && check_mst_vertices[j] == false && adj_matrix[min_index][j] < weight[j])
			{
				mst_array[j]=min_index;
				weight[j]=adj_matrix[min_index][j];

			}
		}
	}

		printf("Edge   Weight\n");
   			for (int i = 1; i < size; i++)
   			printf("%d - %d    %d \n", mst_array[i], i, adj_matrix[i][mst_array[i]]);
}