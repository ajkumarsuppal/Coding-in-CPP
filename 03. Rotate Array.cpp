#include<iostream>
using namespace std;
int N;

void rvereseArray(int arr[], int start, int end){ 
            while (start < end) 
            { 
                int temp = arr[start]; 
                arr[start] = arr[end]; 
                arr[end] = temp; 
                start++; 
                end--; 
            } 
        } 
  
void leftRotate(int arr[], int D, int N) 
{ 
    rvereseArray(arr, 0, D-1); 
    rvereseArray(arr, D, N-1); 
    rvereseArray(arr, 0, N-1); 
} 

int main()
 {
	//code
	int T,N;
	cin>>T;
	
	while(T--){
	    int D;
	    cin>>N>>D;
	    int arr[N],i;
	    
	    for(i=0; i<N; i++)
	        cin>>arr[i];
	    
	    leftRotate(arr, D, N);
	   // while(D--){
	   //     int temp=arr[0];
	   //     for(i=0; i<N-1; i++){
	   //         arr[i]=arr[i+1];
	   //     }
	   //     arr[i]=temp;
	   // }
	    
	    for(i=0; i<N-1; i++)
	        cout<<arr[i]<<" ";
	    cout<<arr[i]<<endl;
	}
	return 0;
}
