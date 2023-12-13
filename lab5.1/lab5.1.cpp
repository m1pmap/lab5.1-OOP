#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	cout << "Task 1:\n";
	vector<int> myVector = {1, 2, 3, 4, 5, 6, 7, 8};
	vector<int>::iterator buffIterator = myVector.begin();
	advance(buffIterator, myVector.size() / 2);
	reverse(myVector.begin(), buffIterator);
	reverse(buffIterator, myVector.end());
	_Swap_ranges_unchecked(myVector.begin(), buffIterator, buffIterator);
	for (int i : myVector)
		cout << i << " ";


	cout << "\nTask 2:\n";
	myVector = { 1, 2, 3, 4, 5, 6 };
	buffIterator = myVector.end();
	advance(buffIterator, -3);
	vector<int>::iterator myIterator = myVector.end();
	advance(myIterator, -5);
	myVector.insert(buffIterator, myIterator, myVector.end());
	for (int i : myVector)
		cout << i << " ";


	cout << "\nTask 3:\n";
	myVector = { 1, 2, 3, 4, 5, 6, 7, 8 };
	buffIterator = myVector.begin();
	advance(buffIterator, myVector.size() / 2);
	myVector.push_back(*buffIterator);
	for (int i : myVector)
		cout << i << " ";


	cout << "\nTask 4:\n";
	myVector = { 1, 2, 4, 4, 5, 6, 8, 8, 9, 10};
	auto it = myVector.end();
	reverse(myVector.begin(), myVector.end());
	while (it != myVector.begin()) {
		it = adjacent_find(myVector.begin(), myVector.end());
		if (it != myVector.begin()) {
			*(it) *= 2;
			*(it + 1) *= 2;
			break;
		}
	}
	reverse(myVector.begin(), myVector.end());
	for (int i : myVector)
		cout << i << " ";
}