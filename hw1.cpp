# include <iostream>
# include <vector>
# include <string>
# include <sstream>

int main(int argv, char** argc){
	std::vector<std::string> avect;
	std::vector<std::string> bvect;
	std::stringstream buffer1; //stringstream is a data structure that it is used to read the data file or transfer the int data to the string types.
	for(int i = 0; i < 100; i++){
		std::stringstream buffer; //stringstream is a data structure that it is used to read the data file or transfer the int data to the string types.
		buffer << i;
		buffer1 << i;
		avect.push_back(buffer1.str());
		bvect.push_back(buffer.str());
	}
	for(int i = 0; i < avect.size(); i++){
		std::cout << avect[i] << std::endl;
	}
	std::cout << "\nAnother version\n" << std::endl;
	for(int i = 0; i < 100; i++){
		std::cout << bvect[i] << std::endl;
	}
}
