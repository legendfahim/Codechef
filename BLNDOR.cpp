#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int two=0;
	    while(n--){
	        int c;
	        cin>>c;
	        if(c==2){
	       
	            two++;
	        }
	        
	    }
	    
	  
	        
	    if( two%8==0){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	    
	}

}
