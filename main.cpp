#include <iostream>
#include <string>
#include <vector>
#include "convert.h"
#include <iostream>
using namespace std;
int main(){
    string prefix;
    getline(cin,prefix);
    convert c;
	cout<< c.PolishPrefix(prefix); 
	return 0; 
}