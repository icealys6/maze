#include <iostream>
#include <fstream>
#include <string>

using namespace std;



int main()
{
	char maze [20][31];
	char move;

	ifstream pipe;
	pipe.open("C://maze.txt");
	for(int i = 0;i<20;i++)
	{
		for(int j = 0;j<31;j++)
		{
			maze[i][j]=pipe.get();
		}
		
	}
	pipe.close();

	
	int pos_x=0;
	int pos_y=1;
	maze[1][0]= 'O';

	for(int i = 0;i<20;i++)
	{
		for(int j = 0;j<31;j++)
		{
			cout<<maze[i][j]; 
		}
		
	}

	
	cout<<"Make a path of Os until you reach the end of the maze"<<endl;
	cout<<"would you like to move left,right,up, or down? "<<endl;
	cout<<"Left = l,right = r,up = u,down = d"<<endl;
	system("pause");
	system("cls");
	do
	{
		for (int i = 0; i<20; i++)
		{
			for (int j = 0; j<31; j++)
			{
				cout << maze[i][j];
			}
		}
			cin>>move;
			switch(move)
			{
				case 'l' : {
								if(pos_x !=0)
									if(maze[pos_y][pos_x -1] != '*')
									{
										maze[pos_y][pos_x-1] = 'O';
										pos_x-=1;
									}
									
									
								break;
						   }
				case 'r' : {
								if(pos_x != 29)
									if(maze[pos_y][pos_x +1] != '*')
									{
										
										maze[pos_y][pos_x+1] = 'O';
										pos_x+=1;
									}
									
								break;
						   }
				case 'u' : {
								if(pos_y != 0)
									if(maze[pos_y-1][pos_x] != '*')
									{
										maze[pos_y-1][pos_x] = 'O';
										pos_y-=1;
									}
								break;
						   }
				case 'd' : {
								if(pos_y !=19)
									if(maze[pos_y+1][pos_x] != '*')
									{
										maze[pos_y+1][pos_x] = 'O';
										pos_y+=1;
									}
								break;
						   }
				default :	{
								cout<<"invalid choice "<<endl;
							}
						   


							
			}
			
			
			system("cls");
			
	}while(pos_y != 19);
	
		
		
	cout<<"Congratulations! you have completed the maze"<<endl;
		
		
	
	
	

	system("pause");
	return 0;

}

