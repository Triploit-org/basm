#include <iostream>
#include <stack>
#include <vector>
#include <stdio.h>
#include <stdlib.h>

int _r_a = 0;
int _r_b = 0;
int _r_c = 0;
int _r_d = 0;
int _r_e = 0;
int _r_f = 0;
int _r_g = 0;
int _r_h = 0;
int _r_var_ax = 0;
int _r_var_bx = 0;
int _r_var_cx = 0;

int *ax = &_r_a;
int *bx = &_r_b;
int *cx = &_r_c;
int *dx = &_r_d;
int *ex = &_r_e;
int *fx = &_r_f;
int *gx = &_r_g;
int *hx = &_r_h;
int *var_ax = &_r_var_ax;
int *var_bx = &_r_var_bx;
int *var_cx = &_r_var_cx;

std::stack<int> stack;
std::vector<int> list_ax;
std::vector<int> list_bx;
std::vector<int> list_cx;
std::string _str_sys_tmp_ = "";

bool _sys_is_number_(const std::string& s) { std::string::const_iterator it = s.begin(); while (it != s.end() && std::isdigit(*it)) ++it; return !s.empty() && it == s.end(); }
int main();
int d_();
int e_();
int main()
{
main:
	stack.push(1);
	std::cout << stack.top() << std::endl;
	stack.pop();
	*fx = d_();
	goto main;

	exit(0);
	return 0;
}

int d_()
{
	stack.push(2);
	std::cout << stack.top() << std::endl;
	stack.pop();
	*fx = e_();
	stack.push(4);
	std::cout << stack.top() << std::endl;
	stack.push(*fx);
	std::cout << stack.top() << std::endl;
	stack.pop();
	return 0;
}

int e_()
{
	stack.push(3);
	std::cout << stack.top() << std::endl;
	stack.pop();
	*gx = 13;
	
	return *gx;
	return 0;
}

