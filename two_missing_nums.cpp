#include <iostream>
#include <cstdlib>
#include <array>
#include <vector>
#include <unordered_set>
#include <algorithm>


using namespace std;

vector <int> two_missing_num_sol1(array<int, 8> a);

int main()
{
   array<int, 8> a = {2, 4, 6, 3, 5, 8, 7, 10};
   int array_size = sizeof(a)/(sizeof(a[0]));

   vector <int> solution = two_missing_num_sol1(a);
   cout << "Size of missing_two vector" << solution.size() << endl;
   for (auto num: solution) {
      cout << num << " ";
   }

   return 0;
}

vector <int> two_missing_num_sol1(array<int, 8> a)
{
    int max_value = *(max_element(a.begin(), a.end()));
    unordered_set<int> set;


    for (int i = 1; i <= max_value; i++)
    {
        set.insert(i);
    }

    for (int i = 0; i < a.size(); i++)
    {
        set.erase(a[i]);
    }

    vector <int> solution_vector;
    for (const auto& elem: set)
    {
        solution_vector.push_back(elem);
    }
    return solution_vector;
}
