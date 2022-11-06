#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void find_prime_number(vector<int>& );

int main()
{
    setlocale(LC_ALL, "");
    cout << "Введите натуральное число N: ";

    unsigned int number;
    vector<int> prime_numbers;
    vector<int>::iterator index;

    while (true) {
        cin >> number;
        if (!cin) {
            cout << "Вероятно вы ввели не число, попробуйте снова.\n ";
            cin.clear();
            while (cin.get() != '\n') {}
        }
        else{

            for (int i = 2; i != number + 1; ++i) 
            {
                prime_numbers.push_back(i);
            }

            find_prime_number(prime_numbers);
                
            for (index = prime_numbers.begin(); index != prime_numbers.end(); ++index) {
                cout << *index << " ";
            }
            }
            break;
    }
}

void find_prime_number(vector<int>& prime_number) {
    vector<int>::iterator index;
    vector<int>::iterator second_index = prime_number.begin();

    while (second_index != prime_number.end()) {
        index = prime_number.begin();
        while (index != prime_number.end()) {
            if (*index % *second_index == 0 and *index != *second_index) {
                index = prime_number.erase(index);
            }
            else {
                ++index;
            }
        }
        ++second_index;
    }
}

