#include <stdio.h>
#include <iostream>
#include <fstream>


int main() {
	std::string os = "";
	std::cout << "What operating system are you using?: ";
	std::cin >> os;
	if (os == "windows"){
		//windows
		system("cls");
		system("Color E");
	   	bool should_run = true;
		while(should_run){
			std::cout << R"(
			###############################################
			# __  __       _ _   _ ____ _____           _ #
			#|  \/  |_   _| | |_(_)___ \_   _|__   ___ | |#
			#| |\/| | | | | | __| | __) || |/ _ \ / _ \| |#
			#| |  | | |_| | | |_| |/ __/ | | (_) | (_) | |#
			#|_|  |_|\__,_|_|\__|_|_____||_|\___/ \___/|_|#
			###############################################
		)";
			std::cout << "\nWelcome Hackers\n";
			std::cout << "\nChoose a tool: ";
			//List of Tools
			std::cout << "\n1.Privesec_List"; 
			std::cout << "\n2.Reverse_Shells_List"; 
			std::cout << "\n3.hash_Identifier_List"; 
			std::cout << "\n4.Coming Soon\n"; 
			//end of tool list
			
			//to choose a tool from the list using number
			int tool = 0;
			std::cout << "\nAnswer: ";
			std::cin >> tool;
			//end of choosing tool
	  		if (tool == 0) {
	  		   	system("cls");
				continue;
			}
			
			//Prive sec file dir
			if(tool == 1){	
				int privsec = 0;	
				std::cout << "\nPrivesec_List\n";
				std::cout << "1: LinPeas.sh";
				std::cout << "\n2: LinEnum.sh";
				std::cout << "\n3: lse.sh";
				
				std::cout << "\nAnswer: ";
				std::cin >> privsec;
				if (privsec == 0) {
				   system("cls");
	  		   	   continue;
				}
				if(privsec == 1){
					system("curl -s -L -O https://github.com/peass-ng/PEASS-ng/releases/latest/download/linpeas.sh");
					should_run = false;
				};
				if(privsec == 2){
					system("curl -s -L -O https://raw.githubusercontent.com/rebootuser/LinEnum/c47f9b226d3ce2848629f25fe142c1b2986bc427/LinEnum.sh");
					should_run = false;
				};
				if(privsec == 3){
					system("curl -s -L -O https://raw.githubusercontent.com/diego-treitos/linux-smart-enumeration/eb80976b1d5e4325894644e264d9f91782f29f50/lse.sh");
					should_run = false;
				};
			};
			//end Prive sec
			
			//Reverseshells file dir
			if(tool == 2){
				int reverse = 0;
				std::cout << "\nReverse_Shells_List\n";
				std::cout << "1: PHP_Reverse_Shell";
				
				std::cout << "\nAnswer: ";
				std::cin >> reverse;
				if (reverse == 0) {	
					system("cls");
	  		   		continue;
				}
				if(reverse == 1){
					system("curl -s -L -O https://raw.githubusercontent.com/pentestmonkey/php-reverse-shell/8aa37ebe03d896b432c4b4469028e2bed75785f1/php-reverse-shell.php");
					should_run = false;
				};
			};
			//end reverseshell
			
			//Hash_Identifier file dir
			if(tool == 3){
				int hash = 0;
				std::cout << "\nHash_Identifier_List\n";
				std::cout << "1: Hash_ID.py";
			
				std::cout << "\nAnswer: ";
				std::cin >> hash;
				if (hash == 0) {
					system("cls");
	  		   		continue;
				}
				if(hash == 1){
				system("curl -s -L -O https://raw.githubusercontent.com/blackploit/hash-identifier/master/hash-id.py");
				should_run = false;
				};
			};
			//end Hash_Identifier
			return 0;
		}
	} else if(os == "linux"){
		//linux
		system("clear");
		bool should_run = true;
		while(should_run){
			std::cout << R"(
			###############################################
			# __  __       _ _   _ ____ _____           _ #
			#|  \/  |_   _| | |_(_)___ \_   _|__   ___ | |#
			#| |\/| | | | | | __| | __) || |/ _ \ / _ \| |#
			#| |  | | |_| | | |_| |/ __/ | | (_) | (_) | |#
			#|_|  |_|\__,_|_|\__|_|_____||_|\___/ \___/|_|#
			###############################################
		)";
			std::cout << "\nWelcome Hackers\n";
			std::cout << "\nChoose a tool: ";
			//List of Tools
			std::cout << "\n1.Privesec_List"; 
			std::cout << "\n2.Reverse_Shells_List"; 
			std::cout << "\n3.hash_Identifier_List"; 
			std::cout << "\n4.Coming Soon\n"; 
			//end of tool list
			
			//to choose a tool from the list using number
			int tool = 0;
			std::cout << "\nAnswer: ";
			std::cin >> tool;
			//end of choosing tool
	  		if (tool == 0) {
	  		   	system("clear");
				continue;
			};
			
			//Prive sec file dir
			if(tool == 1){
				int privsec = 0;	
				std::cout << "\nPrivesec_List\n";
				std::cout << "1: LinPeas.sh";
				std::cout << "\n2: LinEnum.sh";
				std::cout << "\n3: lse.sh";
				
				std::cout << "\nAnswer: ";
				std::cin >> privsec;
				if (privsec == 0) {
				   system("clear");
	  		   	   continue;
				}
				if(privsec == 1){
					system("curl -s -L -O https://github.com/peass-ng/PEASS-ng/releases/latest/download/linpeas.sh");
					should_run = false;
				};
				if(privsec == 2){
					system("curl -s -L -O https://raw.githubusercontent.com/rebootuser/LinEnum/c47f9b226d3ce2848629f25fe142c1b2986bc427/LinEnum.sh");
					should_run = false;
				};
				if(privsec == 3){
					system("curl -s -L -O https://raw.githubusercontent.com/diego-treitos/linux-smart-enumeration/eb80976b1d5e4325894644e264d9f91782f29f50/lse.sh");
					should_run = false;
				};
			};
			//end Prive sec
			
			//Reverseshells file dir
			if(tool == 2){
				int reverse = 0;
				std::cout << "\nReverse_Shells_List\n";
				std::cout << "1: PHP_Reverse_Shell";
				
				std::cout << "\nAnswer: ";
				std::cin >> reverse;
				if (reverse == 0) {	
					system("clear");
	  		   		continue;
				}
				if(reverse == 1){
					system("curl -s -L -O https://raw.githubusercontent.com/pentestmonkey/php-reverse-shell/8aa37ebe03d896b432c4b4469028e2bed75785f1/php-reverse-shell.php");
					should_run = false;
				};
			};
			//end reverseshell
			
			//Hash_Identifier file dir
			if(tool == 3){
				int hash = 0;
				std::cout << "\nHash_Identifier_List\n";
				std::cout << "1: Hash_ID.py";
			
				std::cout << "\nAnswer: ";
				std::cin >> hash;
				if (hash == 0) {
					system("clear");
	  		   		continue;
				}
				if(hash == 1){
				system("curl -s -L -O https://raw.githubusercontent.com/blackploit/hash-identifier/master/hash-id.py");
				should_run = false;
				};
			};
			//end Hash_Identifier
			return 0;
		}
	} else{
		std::cout << "Error Unknow OS System!!";
	};	
	return 0;
};
