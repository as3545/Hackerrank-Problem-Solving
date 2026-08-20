
int diagonalDifference(vector<vector<int>> arr) {
    int a=0;
    int b=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        a += arr[i][i];
        b += arr[i][n-i-1];
    } return abs(a-b);
}
