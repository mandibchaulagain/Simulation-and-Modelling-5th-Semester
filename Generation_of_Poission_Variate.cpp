#include <iostream>
#include <cmath>
#include<string>
#include <algorithm>
using namespace std;
int main() {
    double e = M_E; // Euler's number
    float component = -0.2;
    double New_e = pow(e,component);
    cout<<New_e<<endl;//0.8187
    int n = 0;
    double p = 1;
    double randomVarArray[] = {0.4357,0.4146,0.8353,0.9952,0.8004};
    string acceptOrNot;
    int lengthofArray = sizeof(randomVarArray)/sizeof(randomVarArray[0]);
    cout<<"Length of array = "<<lengthofArray<<endl;
    int Result[lengthofArray-1];
    for(int i=0;i<lengthofArray;i++){
    	if(i!=0){
    		if(p>=New_e){
				n+=1;
						
			}else{
				n=0;p=1;
			}
		}
		Result[i] = n;
		p = p*randomVarArray[i];
		if(p>=New_e){
			acceptOrNot = "Rejected";
		}
		else{
			acceptOrNot = "Accepted";
		}
		cout<<"n is: "<<n<<" Rn+1: "<<randomVarArray[i]<<" P is: "<<p<<"n is "<<acceptOrNot<<endl;
	}
	cout<<"Result: n = "<<n<<endl;//was supposed to only return the new n
    return 0;
}

