#include <vector>
using namespace std;
typedef enum { right, down, left, up } direction;
class Solution {
public:
  vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>> matrix(n, vector<int>(n, 0));
    direction d = ::right;
    int i = 0;
    int j = 0;
    int limitdown = n-1;
    int limitright = n-1;
    int limitleft = 0;
    int limitup = 0;
    for (int k = 1; k <= n * n;) {
      switch (d) {
      case ::right:
        if (j <= limitright)
          matrix[i][j++] = k++;
        else {
            i++;
          j--;
          d = down;
          limitup++;
        }
        break;
      case down:
        if (i <= limitdown) {
          matrix[i++][j] = k++;
        } else {
          i--;
          j--;
          d = ::left;
          limitright--;
        }
        break;
      case ::left:
        if (j >= limitleft) {
          matrix[i][j--] = k++;
        } else {
          j++;
          i--;
          d = up;
          limitdown--;
        }
        break;
      case up:
        if (i >= limitup) {
          matrix[i--][j] = k++;
        } else {
          i++;
          j++;
          d = ::right;
          limitleft++;
        }
      default:
        break;
      }
    }
    return matrix;
  }
};
int main (int argc, char *argv[]) {
  Solution s;
  s.generateMatrix(3);
  return 0;
}
