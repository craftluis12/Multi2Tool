#include <fstream> 
#include <iostream> 
#include <string> 
  
int main() 
{
	system("curl -s -L -O https://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@raw.githubusercontent.com/craftluis12/Multi2Tool/main/version.txt");

	
	std::ifstream versionfile("version.txt");
	std::string line;
    
    if(getline(versionfile, line)){
    	std::string version = "";
    	std::cout << "Version Format = v1.2.2";
    	std::cout << "\nWhat version do you have: ";
    	std::cin >> version;;
    	
        if(line != version){
        	std::cout << "Updating..";
			system("del Multi2Tool.cpp");
        	system("curl -s -L -O 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@https://raw.githubusercontent.com/craftluis12/Multi2Tool/main/Multi2Tool.cpp");
        	std::cout << "\nDone   Bye!!";
		}else{
			std::cout << "version is up to date";
			std::cout << "\n  Bye!!";
		};
    };	  	
	  	
    versionfile.close();
    system("del version.txt");
    system("del update.exe");
    
    return 0; 
};