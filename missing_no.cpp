#include <iostream>
using namespace std;
#include<algorithm>

int main() {
	//code
	int tc,n;
	std::cin>>tc;
	while(tc>0){
	    std::cin>>n;
	    int sum=0,x;
	    for(int i=0;i<n-1;i++){
	        std::cin>>x;
	        sum+=x;
	    }
	    int ts=n*(n+1)/2;
	    cout<<ts-sum;
	    
	}
	return 0;
}