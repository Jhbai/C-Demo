# include <iostream>
# include <fstream>
# include <sstream>
# include <vector>
# include <string>
# include <algorithm>
# include <stdio.h>
# include <stdlib.h>

int main(int argv, char** argc){
	// Data reading: result = store
	std::ifstream File("data_with_ret1.csv", std::ios::in);
	std::string file_load;
	std::vector<std::string> security;
	std::vector<std::string> store[9];
	int flag = 0;
	while(std::getline(File, file_load)){
		if(flag == 0){
			flag += 1;
			continue;
		}
		std::stringstream buffer;
		buffer << file_load;
		std::string index;
		std::string temp_store[9];
		for(int i = 0; i < 10; i++){
			if(i == 0){
				std::getline(buffer, index, ',');
				continue;
			}
			std::getline(buffer, temp_store[i-1], ',');
			store[i-1].push_back(temp_store[i-1]);
			if((i-1) == 1)security.push_back(temp_store[i-1]);
		}
	}
	for(int i = 0; i < 9; i++)std::cout << store[i].size() << std::endl;
	//std::cout << "Data reading finished!!" << std::endl;

	// Computing
	// Uniqueness
	std::unique(security.begin(), security.begin() + security.size());
	
	std::fstream file("result.csv", std::ios::out);
	//fp = fopen("result.csv", "W");
	flag = 0;
	//std::cout << "Writing" << std::endl;
	//std::cout << store[0][54683] << " " << store[8][54683] << "\n";
	int N = store[0].size();
	for(int i = 0; i < N; ++i){
		int lot;
		std::istringstream BUF(store[7][i]);
		BUF >> lot;
		//std::cout << "Date Fit: " << (store[0][i] == "2-Mar-20") << "---";
		if( (store[0][i] == "2-Mar-20") && lot < 55){
			std::cout << store[0][i] << " " << lot << " ";
			std::stringstream buff;
			buff << store[8][i];
			std::string ans;
			std::getline(buff, ans, '\r');
			if(ans.empty())continue;
			flag = 0;
			file << ans << ",";
			std::cout << ans << std::endl;
			//std::cout << ans << ",";
		}
		if((store[0][i] != "2-Mar-20") && (flag == 0)){
			//fprintf(fp, "\n");
			std::cout << store[0][i] << " " << flag << std::endl;
			file << "\n";
			//std::cout << "\n";
			flag = 1;
		}
		else continue;
	}
	//std::cout << "Done" << std::endl;
}

		
