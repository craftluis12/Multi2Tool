#include <fstream>
#include <iostream>
#include <stdio.h>
using std::string;

void print_intro();
string input(string text);

int main()
{
    string os = input("What operating system are you using?: ");

    for(auto& x : os) { // This code Lowers any upper case letters
        x = tolower(x);
    };
    if(os == "exit") {
        system("exit");
    }

    // windows
    if(os == "windows") {
        system("cls");
        system("Color E");
    } else if(os == "linux") {
        system("clear");
    }
    bool should_run = true;
    while(should_run) {
        if(os != "windows" && os != "linux") {
            std::cout << "Error Unknow OS System!!\n";
            os = input("What operating system are you using?: ");
            continue;
        };
        print_intro();
        // end of tool list

        // to choose a tool from the list using number
        int tool = 0;
        std::cout << "\nAnswer: ";
        std::cin >> tool;
        // end of choosing tool
        if(tool == 0) {
            if(os == "linux") {
                system("clear");
                continue;
            }
            system("cls");
            continue;
        }

        // Prive sec file dir
        if(tool == 1) {
            int privsec = 0;
            std::cout << "\nPrivesec_List\n";
            std::cout << "1: LinPeas.sh";
            std::cout << "\n2: LinEnum.sh";
            std::cout << "\n3: lse.sh";

            std::cout << "\nAnswer: ";
            std::cin >> privsec;
            if(privsec == 0) {
                if(os == "linux") {
                    system("clear");
                    continue;
                }
                system("cls");
                continue;
            }
            if(privsec == 1) {
                system("curl -s -L -O https://github.com/peass-ng/PEASS-ng/releases/latest/download/linpeas.sh");
                std::string ex = "";
                std::cout << "Type exit to end or back to go to menu: ";
                std::cin >> ex;
                if(ex == "back") {
                    if(os == "linux") {
                        system("clear");
                        continue;
                    }
                    system("cls");
                    continue;
                } else {
                    break;
                };
            };
            if(privsec == 2) {
                system("curl -s -L -O "
                       "https://raw.githubusercontent.com/rebootuser/LinEnum/"
                       "c47f9b226d3ce2848629f25fe142c1b2986bc427/LinEnum.sh");
                std::string ex = "";
                std::cout << "Type exit to end or back to go to menu: ";
                std::cin >> ex;
                if(ex == "back") {
                    if(os == "linux") {
                        system("clear");
                        continue;
                    }
                    system("cls");
                    continue;
                } else {
                    break;
                };
            };
            if(privsec == 3) {
                system("curl -s -L -O "
                       "https://raw.githubusercontent.com/diego-treitos/linux-smart-enumeration/"
                       "eb80976b1d5e4325894644e264d9f91782f29f50/lse.sh");
                std::string ex = "";
                std::cout << "Type exit to end or back to go to menu: ";
                std::cin >> ex;
                if(ex == "back") {
                    if(os == "linux") {
                        system("clear");
                        continue;
                    }
                    system("cls");
                    continue;
                } else {
                    break;
                };
            };
        };
        // end Prive sec

        // Reverseshells file dir
        if(tool == 2) {
            int reverse = 0;
            std::cout << "\nReverse_Shells_List\n";
            std::cout << "1: PHP_Reverse_Shell";

            std::cout << "\nAnswer: ";
            std::cin >> reverse;
            if(reverse == 0) {
                if(os == "linux") {
                    system("clear");
                    continue;
                }
                system("cls");
                continue;
            }
            if(reverse == 1) {
                system("curl -s -L -O "
                       "https://raw.githubusercontent.com/pentestmonkey/php-reverse-shell/"
                       "8aa37ebe03d896b432c4b4469028e2bed75785f1/php-reverse-shell.php");
                std::string ex = "";
                std::cout << "Type exit to end or back to go to menu: ";
                std::cin >> ex;
                if(ex == "back") {
                    if(os == "linux") {
                        system("clear");
                        continue;
                    }
                    system("cls");
                    continue;
                } else {
                    break;
                };
            };
        };
        // end reverseshell

        // Hash_Identifier file dir
        if(tool == 3) {
            int hash = 0;
            std::cout << "\nHash_Identifier_List\n";
            std::cout << "1: Hash_ID.py";

            std::cout << "\nAnswer: ";
            std::cin >> hash;
            if(hash == 0) {
                if(os == "linux") {
                    system("clear");
                    continue;
                }
                system("cls");
                continue;
            }
            if(hash == 1) {
                system("curl -s -L -O https://raw.githubusercontent.com/blackploit/hash-identifier/master/hash-id.py");
                std::string ex = "";
                std::cout << "Type exit to end or back to go to menu: ";
                std::cin >> ex;
                if(ex == "back") {
                    if(os == "linux") {
                        system("clear");
                        continue;
                    }
                    system("cls");
                    continue;
                } else {
                    break;
                };
            };
        };
        // end Hash_Identifier
        // Quick_Ping_Tool
        if(tool == 4) {
            std::system("cls");
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
            std::system("cls");
            std::string command = "ping " + ip + " -n " + how_many + " -l " + size;

            std::system(command.c_str());

            std::cout << "\nType exit to end or back to return to menu: ";
            std::cin >> wait;
            if(wait == "exit") {
                std::cout << "Bye!";
            } else if(wait == "back") {
                if(os == "linux") {
                    system("clear");
                    continue;
                }
                system("cls");
                continue;
            } else {
                std::cout << "Please type Exit!!!";
            };
        };
        // end Quick_Ping_Tool
    }

    return 0;
};

void print_intro()
{
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
    // List of Tools
    std::cout << "\n1.Privesec_List";
    std::cout << "\n2.Reverse_Shells_List";
    std::cout << "\n3.hash_Identifier_List";
    std::cout << "\n4.Quick_Ping_Tool\n";
}
string input(string text)
{
    std::cout << text;
    std::string os = "";
    std::cin >> os;
    return os;
}
