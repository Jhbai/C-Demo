# include <iostream>

void tower(int n, char a, char b, char c){
	if (n == 1)std::cout << "Move disk " << n << " from " << a << " to " << c << std::endl;
	else{
		tower(n-1, a, c, b);
		std::cout << "Move disk " << n << " from " << a << " to " << c << std::endl;
		tower(n-1, b, a, c);
	}
}

int main(int argv, char** argc){
	int n;
	std::cin >> n;
	tower(n, 'A', 'B', 'C');
	std::cout << "\nFinish" << std::endl;
}
