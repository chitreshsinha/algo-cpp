#include <iostream>
using namespace std;

void printPos(int A[], int N, int S) {
    int i, j;
    int sum=A[0];
    int posi = -1;
    int posj = -1;
    for(i=0, j=0;j<N;) {
        if (sum==S) {
            posi = i+1;
            posj = j+1;
            break;
        } else if(sum < S) {
            j++;
            sum += A[j];
        } else {
            sum -= A[i];
            i++;
        }
    }
    if (posi != -1) {
        cout << posi << " " << posj << endl;
    } else {
        cout << -1 << endl;
    }
}

int main() {
    int T;
    cin >> T;
    int i, N, S;
    //cout << "here 1" << endl;
    for(i=0;i<T;i++) {
        //cout << "here 2" << endl;
        cin >> N;
        cin >> S;
        int j;
        int A[N];
        //cout << "here 3" << endl;
        for(j=0;j<N;j++) {
            cin >> A[j];
            //cout << "here 4" << endl;
        }
        //cout << "here 5" << endl;
        printPos(A, N, S);
        //cout << "here 6" << endl;
    }

	return 0;
}