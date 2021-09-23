#include <iostream>

void tox (std::string);

int main()
{
	std::cout << "Enter the line:\n";
	std::string name;
	std::getline (std::cin,name);
	tox (name);
	return 0;
}
void tox (std::string tmp)
{
	int count [256] = {0};
	int max = 0;
	std::string result;
		for (int i = 0; i < tmp.size(); i++) {
			count [tmp[i]]++;
				if (max < count [tmp[i]]) {
					max = count [tmp[i]];
					result = tmp [i];
				}
		}
		std::cout << result << std::endl;
}