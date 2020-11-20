#include <iostream>
#include <iomanip>
#include <numeric>
#include <vector>

int main() {
  std::vector<int> nlist { 5, 7, 111, 777, 26908, 1227, };
  double sum(std::accumulate(nlist.begin(), nlist.end(), 0));
  double avg(sum / nlist.size());
  std::cout << "sum: " << std::fixed << std::setw(15) << sum << '\n'
            << "avg: " << std::fixed << std::setw(15) << avg
            << std::endl;
  return 0;
}