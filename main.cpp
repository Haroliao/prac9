#include <iostream>
#include <string>
#include <vector>
#include "convert.h"
#include <iostream>
using namespace std;
int main(){
    //string prefix;
    //getline(cin,prefix);
    string prefix = "*+69-31";
    convert c;
    int res=c.PolishPrefix(prefix);
	cout<< res; 
	return 0; 
}