#include<iostream>
using namespace std;
int main()
 {
	//code
	int T,d;
	cin>>T;
	while(T--){
	    int i,N;
	    cin>>N;
	    int A[N];
	    for(i=0; i<N; i++)
	        cin>>A[i];
	        
	    cin>>d;
	    
	    while(d--){
	        int temp = A[0];
	        for(i=0; i<N-1; i++)
	            A[i]=A[i+1];
	        A[i]=temp;
	    }
	    
	    for(i=0; i<N-1; i++)
	        cout<<A[i]<<" ";
	    cout<<A[i]<<endl;
	}
	return 0;
}
