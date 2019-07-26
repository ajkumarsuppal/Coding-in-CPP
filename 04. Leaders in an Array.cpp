#include<iostream>
#include<stdlib.h>
using namespace std;
		
int main()
 {
	//code
	long long T;
	long long *a,*b;
	cin>>T;
	
	while(T--){
	    long long N,i;
	    cin>>N;
	    
	    a=(long long*)malloc(N*sizeof(long long));
	    
	    for(i=0; i<N; i++)
	        cin>> a[i];
	    
	    b=(long long*)malloc(N*sizeof(long long));
		long long max = a[N-1], c=0;
		b[c]=max;
		c++;
	   	//cout<<max<<" ";	 
//		cout<<b[0]<<" ";
	    
	    for(i=N-2; i>=0; i--){			
	        if(max<=a[i]){
	            max= a[i];
	            b[c]=max;
//	            cout<<b[c]<<" ";
	            c++;
//	            cout<<a[i]<<" ";
	        
			}
	    	}
	    	//cout<<endl;
	    for(i=c-1; i>=0;i--)
			cout<<b[i]<<" ";
		cout<<endl;
	    
	}
		
	
	
	return 0;
}
