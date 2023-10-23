#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main(){
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);
	char key[1000000];
	int i = 0;
	stack<char> st;
	std::cin >> key;
	while(i < strlen(key)){
		if(key[i] == '(' || key[i] == '[' || key[i] == '{'){
			st.push(key[i]);
		}
		if(st.size() == 0){
			std::cout << 0;
			return 0;
		}
		if(key[i] == ')'){
			if (st.top() == '('){
				st.pop();
			}
			else{
				std::cout << 0;
				return 0;
			}
		}
		if(key[i] == '}'){
			if (st.top() == '{'){
				st.pop();
			}
			else{
				std::cout << 0;
				return 0;
			}
		}
		if(key[i] == ']'){
			if (st.top() == '['){
				st.pop();
			}
			else{
				std::cout << 0;
				return 0;
			}
		}
	i++;
	}
	if(st.size() != 0){
		std::cout << 0;
		return 0;
	}
	std::cout << 1;
	return 0;
}
