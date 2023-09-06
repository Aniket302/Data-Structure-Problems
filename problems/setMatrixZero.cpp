#include<bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) 
{
    int n = matrix.size();
    int m = matrix[0].size();
    
    vector<int> rows(n, 0);
    vector<int> columns(m, 0);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                rows[i] = 1;
                columns[j] = 1;
            }
        }
    }

    for (int i = 0; i<n; i++)
    {
        cout<<rows[i]<<" ";
    }

    cout<<"\n\n";

    for (int i = 0; i<m; i++)
    {
        cout<<columns[i]<<" ";
    }

    cout<<"\n\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (rows[i] == 1 || columns[j] == 1)
            {
                matrix[i][j] = 0;
            }
        }
    }
}

int main() 
{
    vector<vector<int>> matrix = {
        {0, 1, 2, 0}, 
        {3, 4, 5, 2}, 
        {1, 3, 1, 5}
    };
    
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        
        cout<<"\n";
    }
    cout<<"\n\n";

    setZeroes(matrix);
    
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        
        cout<<"\n";
    }
    
    return 0;
}