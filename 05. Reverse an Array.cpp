#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
 {
	//code
	int t=0,T,N;
	cin>>T;
	while(t<T){
	    cin>>N;
	    int *A=(int*)malloc(N*sizeof(int));
	    
	    for(int i=0; i<N; i++)
	        cin>>A[i];
	        
	    int temp, start=0, end=N-1;
	    while(start<end){
	        temp=A[start];
	        A[start]=A[end];
	        A[end]=temp;
	        start++;
	        end--;
	    }
	    
	    for(int i=0; i<N; i++)
	        cout<<A[i]<<" ";
	    cout<<endl;
	    t++;
	}
	return 0;
}
