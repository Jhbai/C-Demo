# include <iostream>
# include <string>
# include <sstream>
# include <fstream>
# include <vector>

int main(int argv, char** argc){
	std::ifstream read("data.csv",std::ios::in);
	std::vector<int> Data;
	std::string load;
	while(std::getline(read, load, ',')){
		float TEMP;
		std::istringstream interface_for_string_to_int(load);
		interface_for_string_to_int >> TEMP;
		Data.push_back(TEMP);
		std::string load;
	}
	float result = 0;
	for(int i = 0; i < Data.size(); i++){
		std::cout << Data[i] << std::endl;
		result += 0.33*Data[i];
	}
	std::cout << "Final result: " << result << std::endl;
}


		

