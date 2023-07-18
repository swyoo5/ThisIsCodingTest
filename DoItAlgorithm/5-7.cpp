#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main(void)
{
	vector<list<pair<int, int>>> graph(3);

	graph[0].push_back(make_pair(1, 7));
	graph[0].push_back(make_pair(2, 5));

	graph[1].push_back(make_pair(0, 7));
	
	graph[2].push_back(make_pair(0, 5));

	for (int i = 0; i < graph.size(); i++) {
		cout << "Node " << i << ": ";
		for (const auto& edge : graph[i]) {
			cout << "(" << edge.first << ", " << edge.second << ") ";
		}
		cout << '\n';
	}
	return 0;
}