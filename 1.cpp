//James Adams

#include <iostream>
using namespace std;
int gcd(int,int);

int main(int argc, char * argv[]) {
    int i, j, n = atoi(argv[1]);
    bool matrix[n][n];
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) {
            if (i == 0 || j == 0)
                matrix[i][j] = 0;
            else if (gcd(i, j) == 1)
                matrix[i][j] = 1;
            else
                matrix[i][j] = 0;
        }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
int gcd(int a, int b)
{
    while(a!=b)
    {
        if(a>b)
            a-=b;
        else
            b-=a;
    }
    return a;
}