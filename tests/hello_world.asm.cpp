#include <iostream>
#include <stack>
#include <vector>

int ax = 0;
int bx = 0;
int cx = 0;
int dx = 0;
int ex = 0;
int fx = 0;
int gx = 0;
int hx = 0;

std::stack<int> stack;

int main();
int write_string();
int main()
{
	for (int i = std::string("Hello World! ").size(); i >= 0; i--)
		stack.push((int) std::string("Hello World! ")[i]);
	hx = 12;
	hx = 12;
	fx = write_string();
	stack.push(10);
	std::cout << (char) stack.top();
	
	if (stack.size() > 0)
		stack.pop();

	exit(0);
	return 0;
}

int write_string()
{
	std::cout << (char) stack.top();
	
	if (stack.size() > 0)
		stack.pop();

	hx = hx - 1;
	
	if (hx > 0)
		fx = write_string();

	
	return gx;
	return 0;
}

