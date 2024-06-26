#include <fstream> 
#include <iostream> 
#include <string> 
#include <regex>
#include <chrono>
#include <thread>

void thread_sleep();
  
int main() 
{
	//grabs the version file
	system("curl -s -L -O https://raw.githubusercontent.com/craftluis12/Multi2Tool/main/version.txt");
		 
    bool valid = true;
    while(valid){
    	std::ifstream versionfile("version.txt");
		std::string line;
    	
    	if(getline(versionfile, line)){
    		system("clear");
    		std::string version = "";
    		std::cout << "Version Format = v1.2.2";
    		std::cout << "\nWhat version do you have: ";
    		
    		std::cin >> version;
    	
    		std::regex pattern("^v\\d+\\.\\d+\\.\\d+$");
    	
    		if(std::regex_match(version, pattern)){
    			if(line == version){
        			std::cout << "version is up to date\n";
					std::cout << "\n  Bye!!\n";
					versionfile.close();
					break;
				}else{
					std::cout << "Updating..";
					system("rm Multi2Tool.cpp");
        			system("curl -s -L -O https://raw.githubusercontent.com/craftluis12/Multi2Tool/main/Multi2Tool.cpp");
        			std::cout << "\nDone\n";
        			std::cout << "\n  Bye!!";
        			versionfile.close();
        			break;
				};
			}else{
				std::cout << "Invalid version format";
				thread_sleep();
				continue;
			};
    	}; 
	};
	
	system("rm version.txt");	
    system("rm Linux_Update");
    	
    return 0; 
};

void thread_sleep() { //function to sleep the program
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
};
