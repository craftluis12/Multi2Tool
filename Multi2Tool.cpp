#include <fstream>
#include <iostream>
#include <stdio.h>
#include <chrono>
#include <thread>
#include <csignal>
using std::string;

void signal_handler(int signal);
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
	
	std::signal(SIGINT, signal_handler);
	
	
	try {
 		string os = input("What operating system are you using?: ");
		os = lower_case(os);
	    //for(auto& x : os) { // This code Lowers any upper case letters
	    //    x = tolower(x);
	    //}; 
	
	    intro_clear(os);
	    bool should_run = true;
	    while(should_run) { //start of first while loop
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
	        tool = lower_case(tool);
	        // end of choosing tool
	        
	        if(tool == "exit"){
	        	std::cout << "\n	Bye!!\n";
	        	break;
			};
	        
	        //start of updating system
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
			std::string priv = "";
			while(tool == "1"){//start of second while loop
				
				if(priv == "menu"){
					break;
				};
				
		        intro_clear(os);
		        art_draw();
		        std::string privesc = "";
		        std::cout << "\nPrivesc_List\n";
				std::cout << "  1.Windows_scripts\n";
				std::cout << "  2.Linux_scripts\n";
				
		        std::cout << "\nPrivesc-> ";
		        std::cin >> privesc;
		        privesc = lower_case(privesc);
		        
		        if(privesc == "back") {
		        	os_clear(os);
		            break;
				};
				
				//windows scripts
				while(privesc == "1"){
		        	intro_clear(os);
		        	art_draw();
					std::cout << "\nWindows_Privesc_Scripts\n";
					std::cout << "  1.WinPeas.exe\n";
						
					std::cout << "\nPrivesc-> ";
		            std::cin >> priv;
		            priv = lower_case(priv);
		            
		            if(priv == "1"){
		                system("curl -s -L -O https://github.com/peass-ng/PEASS-ng/releases/download/20240421-825f642d/winPEASx64.exe");
		                continue;
					}else{
						if(priv == "back"){
							break;
						}else if(priv == "menu"){
							break;
						};
						continue;	
					};
				};//end of windows scripts
				
				//linux scripts'
				while(privesc == "2"){
					intro_clear(os);
		        	art_draw();
					std::cout << "\nLinux_Privesc_Scripts\n";
					std::cout << "  1:LinPeas.sh";
					std::cout << "\n  2:LinEnum.sh";
					std::cout << "\n  3:lse.sh\n";
						
					std::cout << "\nPrivesc-> ";
		            std::cin >> priv;
		            priv = lower_case(priv);
						
					if(priv == "1"){
		                system("curl -s -L -O https://github.com/peass-ng/PEASS-ng/releases/latest/download/linpeas.sh");
		                continue;
		            }else if(priv == "2"){
		            	system("curl -s -L -O https://raw.githubusercontent.com/rebootuser/LinEnum/c47f9b226d3ce2848629f25fe142c1b2986bc427/LinEnum.sh");
						continue;
					}else if(priv == "3"){
						system("curl -s -L -O https://raw.githubusercontent.com/diego-treitos/linux-smart-enumeration/eb80976b1d5e4325894644e264d9f91782f29f50/lse.sh");
						continue;
					}else{
						if(priv == "back"){
							break;
						}else if(priv == "menu"){
							break;
						};
						continue;
					};
				};//end of linux scripts
				//end Privesc_List
			};//end of second while loop
	
	        //start of Reverse_Shells_List
	        std::string revs = "";
	        while(tool == "2"){//start of third while loop	  
				
				if(revs == "menu"){
					break;
				};
			    
			    intro_clear(os);
	        	art_draw();
	            string reverse = "";
	            std::cout << "\nReverse_Shells_List";
	            std::cout << "\n  1.Web_Reverse_shells\n";
	
	            std::cout << "\nReverse-> ";
	            std::cin >> reverse;
	            reverse = lower_case(reverse);
	            
	            if(reverse == "back") {
	                os_clear(os);
	               	break;
				};
	            
	            while(reverse == "1"){
	            	intro_clear(os);
	        		art_draw();
	        		std::cout << "\nWeb_Reverse_shells";
	            	std::cout << "\n  1.PHP_Reverse_Shell\n";
					
					std::cout << "\nweb-shell-> ";
					std::cin >> revs;
					revs = lower_case(revs);
	
		
	            	if(revs == "1"){
	            		system("curl -s -L -O https://raw.githubusercontent.com/pentestmonkey/php-reverse-shell/8aa37ebe03d896b432c4b4469028e2bed75785f1/php-reverse-shell.php");
	  					continue;
					}else{
						if(revs == "back"){
							break;
						}else if(revs == "menu"){
							break;
						};
						continue;
					};					
				};//end Reverse_Shells_List	            
			};//end of third while loop
	        			
			//start of Scripting_Tools
			std::string net = "";
			while(tool == "3"){//start of fourth while loop
			
				if(net == "menu"){
					break;
				};
			
				intro_clear(os);
	        	art_draw();
	        	std::string scripts = "";
				std::cout << "\nScripting_Tools";
				std::cout << "\n  1.Network_Tools";
				std::cout << "\n  2.Hashing_Tools\n";
					
				std::cout << "\nScripts-> ";
	            std::cin >> scripts;
	            scripts = lower_case(scripts);
	            
	            if(scripts == "back"){
	                os_clear(os);
	                break;
				};
				
				//start of Network_Tools
				while(scripts == "1"){
					intro_clear(os);
	        		art_draw();
					std::cout << "\nNetwork_Tools";
					std::cout << "\n  1.Nmap_autoscan[L]";
					std::cout << "\n  2.Quick_Ping[B]\n";
					
					std::cout << "\nNet-Tool-> ";
					std::cin >> net;
					net = lower_case(net);
					
					// start Nmap_autoscan_linux_only
	        		if(net == "1") {
	            		if(os == "linux") {
	            			os_clear(os);
	                		system("curl -s -L -O https://raw.githubusercontent.com/craftluis12/Multi2Tool/main/script_files/autoscan.py");
	                		system("python3 autoscan.py");
	                		system("rm autoscan.py");
	                		
	                		std::cout << "\nType menu or back: ";
	            			std::cin >> net;
	            			net = lower_case(net);
	            			
	            			if(net == "back"){
	            				continue;
							}else if(net == "menu"){
								break;
							}else{
								continue;
							};
	            			
	            		}else if(os == "windows") {
	                		std::cout << "Linux Only!!";
	                		thread_sleep();
	                		continue;
	            		}else{
	            			if(net == "back"){
	            				break;
							}else if(net == "menu"){
								break;
							};
							continue;
						};// end Nmap_autoscan_linux_only
	        		}else if(net == "2"){// Quick_Ping_Tool
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
	
	            		std::cout << "\nType menu or back: ";
	            		std::cin >> net;
	            		net = lower_case(net);
	            		if(net == "back"){
	            			continue;
						}else if(net == "menu"){
							break;
						}else{
							continue;
						};
					}else{
						if(net == "back"){
							break;	
						}else if(net =="menu"){
							break;
						};
						continue;
					};// end Quick_Ping_Tool
				};//end Network_Tools
				
				
				//start of Hashing_Tools
				while(scripts == "2"){
					intro_clear(os);
	        		art_draw();
					std::cout << "\nHashing_Tools";
					std::cout << "\n  1.Hash_Identifier[B]\n";
					
					std::cout << "\nHash-> ";
					std::cin >> net;
					net = lower_case(net);

					
	        		if(net == "1"){
	        			system("curl -s -L -O https://raw.githubusercontent.com/craftluis12/Multi2Tool/main/script_files/hash-id.py");
	            		os_clear(os);
	            		system("python3 hash-id.py");
	            		if(os == "windows"){
	            			system("del hash-id.py");
	                		std::cout << "\nType menu or back: ";
	                		std::cin >> net;
	                		net = lower_case(net);
	                		if(net == "back"){
	                			continue;
							}else if(net == "menu"){
								break;
							}else{
								continue;
							};
						}else{
							if(os == "linux"){
								system("rm hash-id.py");
	                			std::cout << "\nType menu or back: ";
	                			std::cin >> net;
	                			net = lower_case(net);
	                			if(net == "back"){
	                				continue;
								}else if(net == "menu"){
									break;
								}else{
									continue;
								};
							};
						};
					}else if(net == "back"){
						break;
					}else if(net == "menu"){
						break;
					}else{
						continue;
					};// end Hashing_Tools
				};//end Scripting_Tools
			};//end of fourth while loop
			
			std::string info = "";
			while(tool == "4"){//start of fifth while loop

				if(info == "menu"){
					break;
				};
				
				intro_clear(os);
	        	art_draw();	        	
				std::string kali = "";
				std::cout << "\nKali-Tools";
				std::cout << "\n  1.Information Gathering";
				std::cout << "\n  2.Vulnerability Analysis";
				std::cout << "\n  3.Web Application Analysis";
				std::cout << "\n  4.Password Attacks";
				std::cout << "\n  5.Wireless Attacks";
				std::cout << "\n  6.Exploitation Tools";
				std::cout << "\n  7.Sniffing & Spoofing\n";
				
				std::cout << "\nKali_Tools-> ";
				std::cin >> kali;
				kali = lower_case(kali);
				
				if(kali == "back"){
					os_clear(os);
					break;
				};
				
				while(kali == "1"){//start of Information Gathering
					intro_clear(os);
		        	art_draw();
		        	std::cout << "\nInformation Gathering";
		        	std::cout << "\n  1.Nmap";
		        	std::cout << "\n  2.Enum4linux";
		        	std::cout << "\n  3.Recon-ng";
		        	std::cout << "\n  4.Hping3\n";
		        	
		        	std::cout << "\nInfo_Gather-> ";
	            	std::cin >> info;
	            	info = lower_case(info);
	            	
	            	if(info == "1"){
	            		system("apt-get install nmap -y");
	            		continue;
					}else if(info == "2"){
						system("apt-get install enum4linux -y");
						continue;
					}else if(info == "3"){
						system("apt-get install recon-ng -y");
						continue;
					}else if(info == "4"){
						system("apt-get install hping3 -y");
						continue;
					}else{
						if(info == "back"){
							break;
						}else if(info == "menu"){
							break;
						};
						continue;
					};
				};//end of Information Gathering
				
				while(kali == "2"){//start of Vulnerability Analysis
					intro_clear(os);
		        	art_draw();
					std::cout << "\nVulnerability Analysis";
					std::cout << "\n  1.Nessus\n";
		        	
		        	std::cout << "\nVuln_A-> ";
	            	std::cin >> info;
	            	info = lower_case(info);
	            	
	            	if(info == "1"){
	            		system("apt-get install nessus -y");
	            		continue;
					}else if(info == "back"){
						break;
					}else if(info == "menu"){
						break;
					}else{
						continue;
					};
				};//end of Vulnerability Analysis
				
				while(kali == "3"){//start of Web Application Analysis
					intro_clear(os);
		        	art_draw();
					std::cout << "\nWeb Application Analysis";
					std::cout << "\n  1.Nikto";
					std::cout << "\n  2.Burpsuit";
					std::cout << "\n  3.Gobuster\n";
		        	
		        	std::cout << "\nWeb_App-> ";
	            	std::cin >> info;
	            	info = lower_case(info);
	            	
	            	if(info == "1"){
	            		system("apt-get install nikto -y");
	            		continue;
					}else if(info == "2"){
						system("apt-get install burpsuite -y");
	            		continue;
					}else if(info == "3"){
						system("apt-get install gobuster -y");
	            		continue;
					}else if(info == "back"){
						break;
					}else if(info == "menu"){
						break;
					}else{
						continue;
					};
				};//end of Web Application Analysis
				
				while(kali == "4"){//start of Password Attacks
					intro_clear(os);
		        	art_draw();
					std::cout << "\nPassword Attacks";
					std::cout << "\n  1.John";
					std::cout << "\n  2.Hydra";
					std::cout << "\n  3.Hashcat\n";
		        	
		        	std::cout << "\nPass_Att-> ";
	            	std::cin >> info;
	            	info = lower_case(info);
	            	
	            	if(info == "1"){
	            		system("apt-get install john -y");
	            		continue;
					}else if(info == "2"){
						system("apt-get install hydra -y");
	            		continue;
					}else if(info == "3"){
						system("apt-get install hashcat -y");
	            		continue;
					}else if(info == "back"){
						break;
					}else if(info == "menu"){
						break;
					}else{
						continue;
					};
				};//end of Password Attacks
				
				while(kali == "5"){//start of Wireless Attacks
					intro_clear(os);
		        	art_draw();
					std::cout << "\nWireless Attacks";
					std::cout << "\n  1.Aircrack-ng\n";
		        	
		        	std::cout << "\nWireless_Att-> ";
	            	std::cin >> info;
	            	info = lower_case(info);
	            	
	            	if(info == "1"){
	            		system("apt-get install aircrack-ng -y");
	            		continue;
					}else if(info == "back"){
						break;
					}else if(info == "menu"){
						break;
					}else{
						continue;
					};
				};//end of Wireless Attacks
				
				while(kali == "6"){//start of Exploitation Tools
					intro_clear(os);
		        	art_draw();
					std::cout << "\nExploitation Tools";
					std::cout << "\n  1.Metasploit Framework\n";
		        	//std::cout << "\n  2.Searchsploit"; //coming soon
		        	
		        	std::cout << "\nExploit-> ";
	            	std::cin >> info;
	            	info = lower_case(info);
	            	
	            	if(info == "1"){
	            		system("apt-get install metasploit-framework -y");
	            		continue;
					}else if(info == "back"){
						break;
					}else if(info == "menu"){
						break;
					}else{
						continue;
					};
				};//end of Exploitation Tools
				
				while(kali == "7"){//start of Snifiing & Spoofing
					intro_clear(os);
		        	art_draw();
					std::cout << "\nSnifiing & Spoofing";
					std::cout << "\n  1.Wireshark";
					std::cout << "\n  2.Tcpdump";
					std::cout << "\n  3.Ettercap-both\n";
		        	
		        	std::cout << "\nSnif_Spof-> ";
	            	std::cin >> info;
	            	info = lower_case(info);
	            	
	            	if(info == "1"){
	            		system("apt-get install wireshark -y");
	            		continue;
					}else if(info == "2"){
						system("apt-get install tcpdump -y");
	            		continue;
					}else if(info == "3"){
						system("apt-get install ettercap-text-only -y && apt-get install ettercap-graphical -y");
	            		continue;
					}else if(info == "back"){
						break;
					}else if(info == "menu"){
						break;
					}else{
						continue;
					};
				};//end of Snifiing & Spoofing	
			};//end of fifth while loop
	    };//end of first while loop  
    } catch (...) {
        std::cout << "\nAn unexpected error occurred. Exiting..." << std::endl;
    };
	 
    return 0;
};

std::string version = "v1.7.7";

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
    std::cout << "\n    1.Privesc_List[B]                 2.Reverse_Shells_List[B]                 3.Scripting_Tools[B]";
    std::cout << "\n--------------------------          ---------------------------           ---------------------------\n";
    
    std::cout << "\n--------------------------          ---------------------------           ---------------------------";
    std::cout << "\n      4.Kali_Tools[L]                       Coming_Soon                      	   Coming_Soon";
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

void signal_handler(int signal) {
    if (signal == SIGINT) {
        std::cout << "\n	Bye!!\n";
        std::exit(0); // Exit the program
    }
};
