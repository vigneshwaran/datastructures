#include <iostream>
using namespace std;

int maxsum(int a[],int size){
    int sum=a[0];
    int high=a[0];
    for(int k=1;k<size;k++){
        sum = max(a[k],sum+a[k]);
        high= max(high,sum);
    }
    return high;
}

int main() {
	int tc,i,j,n;
	cin>>tc;
	for(j=0;j<tc;j++){
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++){
	        cin>>a[i];
	    }
	    cout<<maxsum(a,n)<<endl;
	}
	
	return 0;
}