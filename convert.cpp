#include <bits/stdc++.h> 
#include "convert.h"
using namespace std; 

double convert::PolishPrefix(string prefix) {
    
	stack<double> operand; 
    int size =prefix.size();
    int operatorsize=0;
    int operandsize=0;
    
	for (int i = size; i >= 0; i--) { 

		if (isdigit(prefix[i])) {
            operandsize++;
            //operand.push(prefix[i] - '0'); 
            operand.push(prefix[i] );
        }
		else { 
            operatorsize++;
			double o1 = operand.top(); 
			operand.pop(); 
			double o2 = operand.top(); 
			operand.pop(); 
			if( prefix[i] == '+'){
                operand.push(o1 + o2);
            }
			if( prefix[i] == '-'){
			    operand.push(o1 - o2);
            }
		    if( prefix[i] == '*'){
			    operand.push(o1 * o2);
            }
			if( prefix[i] == '/'){
			    operand.push(o1 / o2);
            }
			//else{
               //   cout<<"Error"; 
			    //return -1; 
			//}
		} 
	} 
    if(operandsize-1!=operatorsize){
        cout<<"Error"; 
        return -1;
    }
    else{
        return operand.top(); 
   }
} 