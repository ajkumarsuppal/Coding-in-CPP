#include<iostream>
using namespace std;
int main()
 {
     int T;
	//code
// 	1st i/p T=no of arrays
// 	2nd i/p N=size of array
// 	3rd i/p elements
	
	cin>>T;
	
	while(T--){
	    int N;
		cin>>N;
	    int arr[N],i;
	    for(i=0; i<N; i++)
	        cin>>arr[i];
	
		for(i=0;i<N-1;i++){
		    if(arr[i+1]<arr[i])
		        cout<<arr[i+1]<<" ";
		    else
		        cout<<-1<<" ";
		}
		cout<<-1<<"endl";
	}

	
	
	return 0;
}
