#include <fstream> 
#include <iostream> 
#include <string> 
  
int main() 
{
	//grabs the version file
	system("curl -s -L -O https://raw.githubusercontent.com/craftluis12/Multi2Tool/main/version.txt");
	
	std::ifstream versionfile("version.txt");
	std::string line;
    
    if(getline(versionfile, line)){
    	std::string version = "";
    	std::cout << "Version Format = v1.2.2";
    	std::cout << "\nWhat version do you have: ";
    	std::cin >> version;
    	
        if(line == version){
        	std::cout << "version is up to date\n";
			std::cout << "\n  Bye!!\n";
		}else if(line != version){
			std::cout << "Updating..";
			system("rm Multi2Tool.cpp");
        	system("curl -s -L -O https://raw.githubusercontent.com/craftluis12/Multi2Tool/main/Multi2Tool.cpp");
        	std::cout << "\nDone\n";
        	std::cout << "\n  Bye!!";
		};
    };	  
    system("rm version.txt");	
    system("rm Linux_Update");
    	
    return 0; 
};
