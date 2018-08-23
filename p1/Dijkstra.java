import java.util.*;

public class Dijkstra {
	public static void main(String args[]){
		Stack path = new Stack();
		Scanner input = new Scanner(System.in);
		System.out.print("Enter no. of nodes");
		int node = input.nextInt();
		// System.out.println(node)

		System.out.print("Enter source");
		int source = input.nextInt();

		//visit check array
		boolean[] visit = new boolean[node];
		//to assign whole array same value
		Arrays.fill(visit , false );

		// array for maintain distance values 
		int [] weight = new int[node];
		Arrays.fill(weight , Integer.MAX_VALUE); 
		// Arrays.fill(weight , 0 ); 
		// int[] path = new int[node];



		// 2D array for maintaing connections
		int[][] map = new int [node][node];

			System.out.println("\nEnter the weight of every node \n i)Int value (if route exist) \n ii)0(otherwise)");

		for(int i=0;i<node;i++){
			System.out.print("Enter the weight for node - " + i + "-->");
			for(int j=0;j<node;j++){
				map[i][j] = input.nextInt();
			}
		}
			System.out.println();

			weight[source]=0;
			System.out.println(Arrays.toString(weight));
			path.push(source);
			for (int w=0;w<node;w++) {
				int min = -1;
				for (int i=0;i<node;i++ ) {
					if(!visit[i] && (min == -1 || weight[min] > weight[i])){
						min = i;

					}
					path.push(min);
				}

				visit[min] = true;
				for(int j=0;j<node;j++) {
					
					if(map[min][j] !=0 ) {
						int update_distance;
						update_distance = map[min][j]+weight[min];
						if(weight[j]>update_distance){
							weight[j]=update_distance;
							System.out.println(Arrays.toString(weight));
						}

					
					
				
					}
				}
				
			}
			System.out.println("Path-->");
			for (int i = 0; i < node ;i++ ) {
				System.out.printf(" 1 \t -->%d \t =\t %d \n",i, weight[i]);
			}
			
		}
		
	}