#include<iostream>
using namespace std;

int main()
{
	int available[3], allocated[3][3], max[3][3];
	int i,j,k,ch;
	int count=0,m,n;
	int running[3], safe_state = 0;
    
    //total no of processes
	cout<<"Enter total number of processes"<<endl;
    cin>>n;
	for(i= 0; i<n; i++) {
            running[i] = 1;
            count++;
			}  
	
	// total no of resource		
	cout<<"\nEnter The Total Number Of Resources To Allocate:\t";
    cin>>m;
    
	// allocation matrix
    cout<<"\nEnter Allocated Resource Matrix:\n";
      for(i = 0; i <n; i++) {
            for(j = 0; j <m; j++) 
            {
                  cin>>allocated[i][j];
            }
      }
      
      //maximum matrix
      cout<<"\nEnter The Maximum Matrix:\n";
      for(i= 0; i <n; i++) {
            for(j = 0; j<m ; j++) 
            {
                  cin>>max[i][j];
            }
      }
      
      //available matrix
      
	
	cout<< "Following is the SAFE Sequence"<<endl;
    for (i = 0; i < n - 1; i++) 
        cout << " P" << ans[i] << " ->"; 
    cout << " P" << ans[n - 1] <<endl; 
    
    
    
    //resource request
    cout<<"Any additional request?(1=yes|0=no)"<<endl;
    cin>>ch;
    if(ch==1)
    {
    	cout<<"Enter the number of processes:"<<endl;
    	cin>>n;
		int request_mat[n][3];
		cout<<"\nEnter additional requests:";
		for(i=0; i<m; i++)
		{
			//cout<<"request resources\t"<<i+1;
			cin>>request_mat[n][i];
		}
		
		//for need matrix
		for(i=0;i<m;i++)
		{
			if( request_mat[0][i]>need[n][i])
			{
				cout<<"\nerror encountered";
				
			}
		}
		
		//for available matrix
		for(i=0;i<m;i++)
		{
			if(request_mat[0][i]>available[i])
			{
				cout<<"\nresources unavailable.";
				
			}
		}
		
		
		
		//if all satisfied
		for (i=0;i<m;i++)
		{
			available[i]-=request_mat[0][i];
			allocated[n][i]+=request_mat[0][i];
			need[n][i]-=request_mat[0][i];
		}
		
		
		
		
	}
	}
	
    
