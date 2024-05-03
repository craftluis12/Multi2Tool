#include <fstream>
#include <iostream>
#include <stdio.h>
#include <chrono>
#include <thread>
using std::string;

void unknownC();
void art_draw();
void intro_clear(string os);
void print_intro();
void os_clear(string os);
void thread_sleep();
string lower_case(string word);
string input(string text);

int main()
{
    string os = input("What operating system are you using?: ");
	os = lower_case(os);
    //for(auto& x : os) { // This code Lowers any upper case letters
    //    x = tolower(x);
    //}; 

    intro_clear(os);
    bool should_run = true;
    while(should_run) { 
        if(os != "windows" && os != "linux") {
            std::cout << "Error Unknow OS System!!\n";
            os = input("What operating system are you using?: ");
            continue;
        };
		
        intro_clear(os);
        art_draw();
        print_intro();

        // to choose a tool from the list
        std::string tool = "";
        std::cout << "\nChoose: ";
        std::cin >> tool;
        // end of choosing tool
        
        //start of updating system
		tool = lower_case(tool);
		if(tool == "update" && os == "windows"){
			system("curl -s -L -O https://github.com/craftluis12/Multi2Tool/raw/main/windows_update_files/Windows_Update.exe");
			system("cls");
			system("Windows_Update.exe");
			break;	
		}else if(tool == "update" && os == "linux"){
			system("curl -s -L -O https://github.com/craftluis12/Multi2Tool/raw/main/linux_update_files/Linux_Update");
			system("clear");
			system("chmod +x Linux_Update");
			system("./Linux_Update");
			break;
		};
		//end updating system

        //start of Privesc_List       
        if(tool == "1") {
        	intro_clear(os);
        	art_draw();
            std::string privesc = "";
            std::cout << "\nPrivesc_List\n";
			std::cout << "  1.Windows_scripts\n";
			std::cout << "  2.Linux_scripts";
            std::cout << "\nChoose: ";
            std::cin >> privesc;
            privesc = lower_case(privesc);
            if(privesc == "back") {
                os_clear(os);
                continue;
			};
			if(privesc == "1"){
        		intro_clear(os);
        		art_draw();
				std::cout << "\nWindows_Privesc_Scripts\n";
				std::cout << "  1.WinPeas.exe\n";
				
				std::cout << "\nAnswer: ";
            	std::cin >> privesc;
            	privesc = lower_case(privesc);
            	if(privesc == "back"){
            		os_clear(os);
                	continue;
                };
                if(privesc == "1"){
                	system("curl -s -L -O https://github.com/peass-ng/PEASS-ng/releases/download/20240421-825f642d/winPEASx64.exe");
                	std::string ex = "";
                	std::cout << "Type exit or back: ";
                	std::cin >> ex;
                	ex = lower_case(ex);
                	if(ex == "back") {
                    	os_clear(os);
                    	continue;
                	}else{
                		if(ex == "exit"){
                			std::cout << "\n	Bye!!\n";
                			break;
						};
						unknownC();
    					continue;
					};
				}else{
					if(privesc == "exit"){
						std::cout << "\n	Bye!!\n";
                		break;
					};
					unknownC();
					continue;         		
				};
			};
			if(privesc == "2"){
				intro_clear(os);
        		art_draw();
				std::cout << "\nLinux_Privesc_Scripts\n";
				std::cout << "  1:LinPeas.sh";
				std::cout << "\n  2:LinEnum.sh";
				std::cout << "\n  3:lse.sh";
				
				std::cout << "\nChoose: ";
            	std::cin >> privesc;
            	privesc = lower_case(privesc);
            	if(privesc == "back") {
                	os_clear(os);
                	continue;
				};
				
				if(privesc == "1"){
                	system("curl -s -L -O https://github.com/peass-ng/PEASS-ng/releases/latest/download/linpeas.sh");
                	std::string ex = "";
                	std::cout << "Type exit or back: ";
                	std::cin >> ex;
                	ex = lower_case(ex);
                	if(ex == "back") {
                    	os_clear(os);
                    	continue;
                	}else{
                		if(ex == "exit"){
                			std::cout << "\n	Bye!!\n";
                			break;
						};
						unknownC();
    					continue;
					};
            	};
            	if(privesc == "2"){
                	system("curl -s -L -O https://raw.githubusercontent.com/rebootuser/LinEnum/c47f9b226d3ce2848629f25fe142c1b2986bc427/LinEnum.sh");
                	std::string ex = "";
                	std::cout << "Type exit or back: ";
                	std::cin >> ex;
                	ex = lower_case(ex);
                	if(ex == "back") {
                    	os_clear(os);
                    	continue;
                	} else {
                    	if(ex == "exit"){
                    		std::cout << "\n	Bye!!\n";
                    		break;
						};
						unknownC();
    					continue;
                	};
            	};
            	if(privesc == "3") {
                	system("curl -s -L -O https://raw.githubusercontent.com/diego-treitos/linux-smart-enumeration/eb80976b1d5e4325894644e264d9f91782f29f50/lse.sh");
                	std::string ex = "";
                	std::cout << "Type exit or back: ";
                	std::cin >> ex;
                	ex = lower_case(ex);
                	if(ex == "back") {
                    	os_clear(os);
                    	continue;
                	}else{
            			if(ex == "exit"){
            				std::cout << "\n	Bye!!\n";
            				break;
						};
						unknownC();
    					continue;
					};
            	}else{
            		if(privesc == "exit"){
            			std::cout << "\n	Bye!!\n";
            			break;
					};
            		unknownC();
    				continue;
				};	
			}else{
				if(privesc == "exit"){
					std::cout << "\n	Bye!!\n";
            		break;
				};
				unknownC();
    			continue;
			};
        };
        //end Privesc_List

        //start of Reverse_Shells_List
        if(tool == "2") {
        	intro_clear(os);
        	art_draw();
            string reverse = "";
            std::cout << "\nReverse_Shells_List\n";
            std::cout << "1: PHP_Reverse_Shell";

            std::cout << "\nChoose: ";
            std::cin >> reverse;
            reverse = lower_case(reverse);
            if(reverse == "back") {
                os_clear(os);
                continue;
            };
            if(reverse == "1") {
                system("curl -s -L -O https://raw.githubusercontent.com/pentestmonkey/php-reverse-shell/8aa37ebe03d896b432c4b4469028e2bed75785f1/php-reverse-shell.php");
                std::string ex = "";
                std::cout << "Type exit or back: ";
                std::cin >> ex;
                ex = lower_case(ex);
                if(ex == "back") {
                    os_clear(os);
                    continue;
                } else {
                    if(ex == "exit"){
                    	std::cout << "\n	Bye!!\n";
                    	break;
					};
					unknownC();
    				continue;
                };
            }else{
            	if(reverse == "exit"){
                    std::cout << "\n	Bye!!\n";
                    break;
				};
				unknownC();
    			continue;
			};
        };
        //end Reverse_Shells_List
		
		//start of Scripting_Tools
		if(tool == "3"){
			intro_clear(os);
        	art_draw();
        	std::string scripts = "";
			std::cout << "\nScripting_Tools";
			std::cout << "\n  1.Network_Tools";
			std::cout << "\n  2.Hashing_Tools";
				
			std::cout << "\nChoose: ";
            std::cin >> scripts;
            scripts = lower_case(scripts);
            if(scripts == "back"){
                os_clear(os);
                continue;
			};
			
			//start of Network_Tools
			if(scripts == "1"){
				intro_clear(os);
        		art_draw();
        		std::string network = "";
				std::cout << "\nNetwork_Tools";
				std::cout << "\n  1.Nmap_autoscan[L]";
				std::cout << "\n  2.Quick_Ping[B]\n";
				
				std::cout << "\nChoose: ";
				std::cin >> network;
				network = lower_case(network);
				if(network == "back"){
                	os_clear(os);
                	continue;
				};
				
				// start Nmap_autoscan_linux_only
        		if(network == "1") {
            		if(os == "linux") {
                		system("curl -s -L -O https://raw.githubusercontent.com/craftluis12/Multi2Tool/main/script_files/autoscan.py");
                		system("python3 autoscan.py");
                		system("rm autoscan.py");
                		std::string wait = "";
                		std::cout << "\nType exit or back: ";
                		std::cin >> wait;
                		wait = lower_case(wait);
                		if(wait == "exit") {
                		    std::cout << "\n	Bye!!\n";
                		    break;
                		} else if(wait == "back") {
                    		system("clear");
                   		 continue;
                		} else {
                    		unknownC();
    						continue;
                		};
            		} else if(os == "windows") {
                		std::cout << "Linux Only!!";
                		thread_sleep();
                		continue;
            		};
        		}else{
        			if(network == "exit"){
        				std::cout << "\n	Bye!!\n";
                		break;
					};
				};
        		// end Nmap_autoscan_linux_only
        		
        		// Quick_Ping_Tool
        		if(network == "2") {
            		os_clear(os);
            		std::cout << "\nWelcome To The Ping Tool\n";

            		std::string wait = "";
            		std::string how_many = "";
            		std::string size = "";
            		std::string ip = "";

            		std::cout << "What is the ip you want to ping? ";
            		std::cin >> ip;

            		std::cout << "How many packets do you want to send? ";
            		std::cin >> how_many;

            		std::cout << "How many bytes do you want to send 0-65,500? ";
            		std::cin >> size;

            		string n = "";
            		string l = "";
            		if(os == "linux") {
               			n = "-c ";
                		l = "-s ";
                		system("clear");
            		} else if(os == "windows") {
                		n = "-n ";
                		l = "-l ";
                		std::system("cls");
            		};

            		std::string command = "ping " + ip + " " + n + how_many + " " + l + size;

            		std::system(command.c_str());

            		std::cout << "\nType exit or back: ";
            		std::cin >> wait;
            		wait = lower_case(wait);
            		if(wait == "exit") {
                		std::cout << "\n	Bye!!\n";
                		break;
            		} else if(wait == "back") {
                		os_clear(os);
                		continue;
            		} else {
                		unknownC();
    					continue;
            		};
        		};
        		// end Quick_Ping_Tool	
			};
			//end Network_Tools
			
			//start of Hashing_Tools
			if(scripts == "2"){
				intro_clear(os);
        		art_draw();
        		std::string hashing = "";
				std::cout << "\nHashing_Tools";
				std::cout << "\n  1.Hash_Identifier[B]\n";
				
				std::cout << "\nChoose: ";
				std::cin >> hashing;
				hashing = lower_case(hashing);
				if(hashing == "back"){
                	os_clear(os);
                	continue;
				};
				// Hash_Identifier_Tool
        		if(hashing == "1") {
        			system("curl -s -L -O https://raw.githubusercontent.com/craftluis12/Multi2Tool/main/script_files/hash-id.py");
            		os_clear(os);
            		system("python3 hash-id.py");
            		if(os == "windows"){
            			system("del hash-id.py");
            			std::string ex = "";
                		std::cout << "\nType exit or back: ";
                		std::cin >> ex;
                		ex = lower_case(ex);
                		if(ex == "back"){
                			continue;
						}else{
							if(ex == "exit"){
								std::cout << "\n	Bye!!\n";
								break;
							};
							unknownC();
							continue;
						};
					}else{
						if(os == "linux"){
							system("rm hash-id.py");
							std::string ex = "";
                			std::cout << "\nType exit or back: ";
                			std::cin >> ex;
                			ex = lower_case(ex);
                			if(ex == "back"){
                				continue;
							}else{
								if(ex == "exit"){
									std::cout << "\n	Bye!!\n";
									break;
								};
								unknownC();
								continue;
							};
						};
					};
				}else{
					if(hashing == "exit"){
						std::cout << "\n	Bye!!\n";
						break;
					};
					unknownC();
					continue;
				};
        		// end Hash_Identifier			
			}else{
				if(scripts == "exit"){
					std::cout << "\n	Bye!!\n";
					break;
				};
				unknownC();
				continue;
			};
			// end Hashing_Tools

		}else{
			if(tool == "exit"){
				std::cout << "\n	Bye!!\n";
				break;
			};
			unknownC();
			continue;
		};
		//end Scripting_Tools	
			
    };//end of while loop  
    return 0;
};

std::string version = "v1.6.5";

void art_draw(){ //function that shows the art and the creators
	std::cout << R"(
            		#Made By: Craftluis12 & Raven                 #
			###############################################   
			# __  __       _ _   _ ____ _____           _ #          
			#|  \/  |_   _| | |_(_)___ \_   _|__   ___ | |#                      
			#| |\/| | | | | | __| | __) || |/ _ \ / _ \| |#                        
			#| |  | | |_| | | |_| |/ __/ | | (_) | (_) | |#
			#|_|  |_|\__,_|_|\__|_|_____||_|\___/ \___/|_|# 
			############################################### )" << version;
};

void print_intro() //function that shows the menu
{
    std::cout << "\nWelcome Hackers";
    std::cout << "\nChoose a tool: ";
    // List of Tools
    std::cout << "\n--------------------------          ---------------------------           ---------------------------";
    std::cout << "\n    1.Privesc_List                     2.Reverse_Shells_List                  3.Scripting_Tools";
    std::cout << "\n--------------------------          ---------------------------           ---------------------------\n";
    
    std::cout << "\n--------------------------          ---------------------------           ---------------------------";
    std::cout << "\n       Coming_Soon                          Coming_Soon                      	  Coming_Soon";
    std::cout << "\n--------------------------          ---------------------------           ---------------------------\n";
    std::cout << "       [B] = Both                           [L] = Linux                           [W] = Windows\n";
};

string input(string text) //function that ask for what operating system your running 
{
    std::cout << text;
    std::string os = "";
    std::cin >> os;
    return std::move(os);
};

void intro_clear(string os) //function runs clear or cls in the right enviroment and adds color to windows only
{
    if(os == "windows") {
        system("cls");
        system("Color E");
    } else if(os == "linux") {
        system("clear");
    };
};

void os_clear(string os) //function runs clear or cls in the right enviroment
{
    if(os == "linux") {
        system("clear");

    } else {
        system("cls");
    };
};

void unknownC(){ //function prints unknown then sleeps
	std::cout << "\nUnknow Command!!\n";
    thread_sleep();
};

void thread_sleep() { //function to sleep the program
    std::this_thread::sleep_for(std::chrono::milliseconds(1100));
};

string lower_case(string word) //function grabs input then lowers every letter to lowercase
{
    string c = "";
    for(int i = 0; i < word.length(); i++) {
        c += tolower(word[i]);
    };
    return std::move(c);
};
