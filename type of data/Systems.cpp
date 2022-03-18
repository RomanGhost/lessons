// Systems.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

string table(int len, int type_size, string min, string max) {
	string k = "    ";
	k += to_string(type_size);
	k += "   |";

	string min_max_string = min + ".." + max;
	int min_max_len = len - (k.length() + min_max_string.length());

	for (int i = 0; i < min_max_len / 2-1; i++)
		k += " ";

	k += min_max_string;

	min_max_len = len - k.length()-1;
	for (int i = 0; i < min_max_len; i++)
		k += " ";

	return k + "|\n";
}

int main()
{
	int len_table = string("--------+------------------------------------------+").length();


	cout << "+--------------------+--------+------------------------------------------+\n";
	cout << "|       Type         |  Size  |                                          |\n";
	cout << "+--------------------+--------+------------------------------------------+\n";
	cout << "|       bool         |" << table(len_table, sizeof(bool), to_string(numeric_limits<bool>::min()), to_string(numeric_limits<bool>::max()));
	cout << "+--------------------+--------+------------------------------------------+\n";
	cout << "|       char         |" << table(len_table, sizeof(char), to_string(numeric_limits<char>::min()), to_string(numeric_limits<char>::max()));
	cout << "+--------------------+--------+------------------------------------------+\n";
	cout << "|      unsigned      |" << table(len_table, sizeof(unsigned), to_string(numeric_limits<char>::min()), to_string(numeric_limits<unsigned>::max()));
	cout << "+--------------------+--------+------------------------------------------+\n";
	cout << "|       signed       |" << table(len_table, sizeof(signed), to_string(numeric_limits<signed>::min()), to_string(numeric_limits<signed>::max()));
	cout << "+--------------------+--------+------------------------------------------+\n";
	cout << "|    signed char     |" << table(len_table, sizeof(signed char),to_string(numeric_limits<signed char>::min()), to_string(numeric_limits<signed char>::max()));
	cout << "+--------------------+--------+------------------------------------------+\n";
	cout << "|      wchar_t       |" << table(len_table, sizeof(wchar_t), to_string(numeric_limits<wchar_t>::min()), to_string(numeric_limits<wchar_t>::max()));
	cout << "+--------------------+--------+------------------------------------------+\n";
	cout << "|      char16_t      |" << table(len_table, sizeof(char16_t), to_string(numeric_limits<char16_t>::min()), to_string(numeric_limits<char16_t>::max()));
	cout << "+--------------------+--------+------------------------------------------+\n";
	cout << "|      char32_t      |" << table(len_table, sizeof(char32_t), to_string(numeric_limits<char32_t>::min()), to_string(numeric_limits<char32_t>::max()));
	cout << "+--------------------+--------+------------------------------------------+\n";
	cout << "|        short       |" << table(len_table, sizeof(short), to_string(numeric_limits<short>::min()), to_string(numeric_limits<short>::max()));
	cout << "+--------------------+--------+------------------------------------------+\n";
	cout << "|   unsigned short   |" << table(len_table, sizeof(unsigned short), to_string(numeric_limits<unsigned short>::min()), to_string(numeric_limits<unsigned short>::max()));
	cout << "+--------------------+--------+------------------------------------------+\n";
	cout << "|        int         |" << table(len_table, sizeof(int), to_string(numeric_limits<int>::min()), to_string(numeric_limits<int>::max()));
	cout << "+--------------------+--------+------------------------------------------+\n";
	cout << "|     long int       |" << table(len_table, sizeof(long int), to_string(numeric_limits<long int>::min()), to_string(numeric_limits<long int>::max()));
	cout << "+--------------------+--------+------------------------------------------+\n";
	cout << "|    unsigned int    |" << table(len_table, sizeof(unsigned int), to_string(numeric_limits<unsigned int>::min()), to_string(numeric_limits<unsigned int>::max()));
	cout << "+--------------------+--------+------------------------------------------+\n";
	cout << "|        long        |" << table(len_table, sizeof(long), to_string(numeric_limits<long>::min()), to_string(numeric_limits<long>::max()));
	cout << "+--------------------+--------+------------------------------------------+\n";
	cout << "|   unsigned long    |" << table(len_table, sizeof(unsigned long), to_string(numeric_limits<unsigned long>::min()), to_string(numeric_limits<unsigned long>::max()));
	cout << "+--------------------+--------+------------------------------------------+\n";
	cout << "|     long long      |" << table(len_table, sizeof(long long), to_string(numeric_limits<long long>::min()), to_string(numeric_limits<long long>::max()));
	cout << "+--------------------+--------+------------------------------------------+\n";
	cout << "| unsigned long long |" << table(len_table, sizeof(unsigned long long), to_string(numeric_limits<unsigned long long>::min()), to_string(numeric_limits<unsigned long long>::max()));
	cout << "+--------------------+--------+------------------------------------------+\n";
	cout << "|       float        |    " << sizeof(float) << "   |         " << numeric_limits<float>::min() << ".." << numeric_limits<float>::max() << "         |\n";
	cout << "+--------------------+--------+------------------------------------------+\n";
	cout << "|      double        |    " << sizeof(double) << "   |        " << numeric_limits<double>::min() << ".." << numeric_limits<double>::max() << "        |\n";
	cout << "+--------------------+--------+------------------------------------------+\n";
	cout << "|   long double      |    " << sizeof(long double) << "   |        " << numeric_limits<long double>::min() << ".." << numeric_limits<long double>::max() << "        |\n";
	cout << "+--------------------+--------+------------------------------------------+\n";
}
