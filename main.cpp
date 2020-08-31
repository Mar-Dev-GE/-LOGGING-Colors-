#include <iostream>

#include <string>

#define FORE_G_RESET	"\u001b[0m"
#define FORE_G_BLACK	"\u001b[30m"
#define FORE_G_RED		"\u001b[31m"
#define FORE_G_GREEN	"\u001b[32m"
#define FORE_G_YELLOW	"\u001b[33m"
#define FORE_G_BLUE		"\u001b[34m"
#define FORE_G_MAGENTA	"\u001b[35m"
#define FORE_G_CYAN		"\u001b[36m"
#define FORE_G_WHITE	"\u001b[37m"

#define LOG_CLIENT_INFO(x) std::cout << FORE_G_GREEN << "[CLIENT] " << "[" __TIME__ << "] " << #x << FORE_G_RESET << std::endl;
#define LOG_CLIENT_WARN(x) std::cout << FORE_G_YELLOW << "[CLIENT] " << "[" __TIME__ << "] " << #x << FORE_G_RESET << std::endl;
#define LOG_CLIENT_ERROR(x) std::cout << FORE_G_RED << "[CLIENT] " << "[" __TIME__ << "] " << #x << FORE_G_RESET << std::endl;
#define LOG_CLIENT_FETAL(x) std::cout << FORE_G_MAGENTA << "[CLIENT] " << "[" __TIME__ << "] " << #x << FORE_G_RESET << std::endl;

#define LOG_CORE_INFO(x) std::cout << FORE_G_GREEN << "[CORE] " << "[" __TIME__ << "] " << #x << FORE_G_RESET << std::endl;
#define LOG_CORE_WARN(x) std::cout << FORE_G_YELLOW << "[CORE] " << "[" __TIME__ << "] " << #x << FORE_G_RESET << std::endl;
#define LOG_CORE_ERROR(x) std::cout << FORE_G_RED << "[CORE] " << "[" __TIME__ << "] " << #x << FORE_G_RESET << std::endl;
#define LOG_CORE_FETAL(x) std::cout << FORE_G_MAGENTA << "[CORE] " << "[" __TIME__ << "] " << #x << FORE_G_RESET << std::endl;


int main()
{
	
	printf("\u001b[30m A \u001b[31m B \u001b[32m C \u001b[33m D \u001b[0m");
	printf("\u001b[34m E \u001b[35m F \u001b[36m G \u001b[37m H \u001b[0m");

	printf("\n");

	printf("\u001b[30;1m A \u001b[31;1m B \u001b[32;1m C \u001b[33;1m D \u001b[0m");
	printf("\u001b[34;1m E \u001b[35;1m F \u001b[36;1m G \u001b[37;1m H \u001b[0m");

	printf("\n");

	std::cout << FORE_G_BLACK << " A " << FORE_G_RED << " B " << FORE_G_GREEN << " C " << FORE_G_YELLOW << " D ";
	std::cout << FORE_G_BLUE << " E " << FORE_G_MAGENTA << " F " << FORE_G_CYAN << " G " << FORE_G_WHITE << " H ";

	std::cout << std::endl;

	printf("%s A %s B %s Marouane %s", FORE_G_BLACK, FORE_G_RED, FORE_G_CYAN, FORE_G_RESET);

	std::cout << std::endl;

	std::cout << "\u001b[0m" << "Marouane " << "\u001b[38;5m" << "Redouane" << FORE_G_RESET << std::endl;

	std::cout << std::endl;
	
	std::string Code;
	for (int i = 0; i < 16; ++i)
	{
		for (int j = 0; j < 16; ++j)
		{
			Code = std::to_string(i * 16 + j);
			std::cout << "\u001b[38;5;" << Code << "m" << Code+"   ";
		}
		std::cout << "\u001b[0m";
		std::cout << std::endl;
	}

	std::cout << "-----------------------------------" << std::endl;

	int N;
	for (int i = 0; i < 32; ++i)
	{
		for (int j = 0; j < 32; ++j)
		{
			N = i * 32 + j;
			std::cout << N << "  ";
		}
		std::cout << std::endl;
	}

	std::cout << "------------------------------------" << std::endl;

	for (int i = 0; i < 256; ++i)
		std::cout << "\u001b[38;5;" << i << "m " << "MAROUANE" << std::endl;

	std::cout << "------------------------------------" << std::endl;

	printf("\u001b[1m BOLD \u001b[0m\u001b[4mUnderline\u001b[0m\u001b[7m Reversed \u001b[0m\n\n");

	std::cout << "------------------------------------" << std::endl;

	std::cout << std::endl; 

	std::cout << "------------------------------------" << std::endl;

	LOG_CLIENT_INFO(Hello Wolrd !);
	LOG_CLIENT_WARN(Hello Wolrd !);
	LOG_CLIENT_ERROR(Hello Wolrd !);
	LOG_CLIENT_FETAL(Hello Wolrd !);

	std::cout << std::endl;

	LOG_CORE_INFO(Hello Wolrd !);
	LOG_CORE_WARN(Hello Wolrd !);
	LOG_CORE_ERROR(Hello Wolrd !);
	LOG_CORE_FETAL(Hello Wolrd !);
	

	
	return 0;
}
