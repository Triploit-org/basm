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
int pnl();
int write_string();
int main()
{
	for (int _int_sys_i_ = std::string(">  ").size(); _int_sys_i_ >= 0; _int_sys_i_--)
		stack.push((int) std::string(">  ")[_int_sys_i_]);
	stack.push(2);
	write_string();

	
	_str_sys_tmp_ = "";
		std::getline(std::cin, _str_sys_tmp_);
	if (_sys_is_number_(_str_sys_tmp_))
	{
		*hx = 0;
		*gx = std::stoi(_str_sys_tmp_);
	}
	else
	{
		for (int _int_sys_i_ = _str_sys_tmp_.size(); _int_sys_i_ >= 0; _int_sys_i_--)
			stack.push((int) _str_sys_tmp_[_int_sys_i_]);
		*hx = _str_sys_tmp_.size();

	}
	
	if (*hx == 0)
		goto number;

	
	if (*hx > 0)
		goto str;

number:
	for (int _int_sys_i_ = std::string("Thats a number! ").size(); _int_sys_i_ >= 0; _int_sys_i_--)
		stack.push((int) std::string("Thats a number! ")[_int_sys_i_]);
	stack.push(15);
	write_string();

	*fx = pnl();
	stack.push(*gx);
	std::cout << stack.top() << std::endl;
	exit(0);
str:
	for (int _int_sys_i_ = std::string("Thats a string! ").size(); _int_sys_i_ >= 0; _int_sys_i_--)
		stack.push((int) std::string("Thats a string! ")[_int_sys_i_]);
	stack.push(15);
	write_string();

	*fx = pnl();
	*hx = *hx + 1;
	stack.push(*hx);
	write_string();

	exit(0);
	
	return *gx;
	return 0;
}

int pnl()
{
	stack.push(10);
	std::cout << (char) stack.top();
	stack.pop();
	
	return *gx;
	return 0;
}

int write_string()
{
	int __realINT_x;
	int *x = &__realINT_x;
	hx = &__realINT_x;
	*hx = stack.top();
	stack.pop();
beg:
	*hx = *hx - 1;
	std::cout << (char) stack.top();
	stack.pop();
	
	if (*hx != 0)
		goto beg;

	hx = &_r_h;
	
	return *gx;
	return 0;
}

