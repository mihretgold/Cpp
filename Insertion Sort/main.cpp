#include <iostream>

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'insertionSort1' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER_ARRAY arr
 */
/*
void insertionSort1(int n, vector<int> arr) {
    for(int i=n-1; i<=0; i--){
        int key = arr[i];
        int j=i-1;
        while(arr[j]>key && j>=0){
            arr[j+1]= arr[j];
             j--;
            for(int a=0; a<n; a++){
                cout<<arr[a];
            }
            cout<<endl;

        }
        arr[j+1]=key;
    }
    for(int a=0; a<n; a++){
                cout<<arr[a];
            }
}*/
/*void insertionSort1(int n, vector<int> arr) {

    for(int i=n-1;i>0;i--)
    {
        int key =arr[i];
        int j=i-1;
        while (arr[j]>0 &&arr[j-1]>key)
        {
            arr[j+1]=arr[j];
            j--;
             for (int a=0;a<n;a++)
                {
                   cout<<arr[a]<<" ";
                }
                cout<<endl;
        }
        arr[j+1]=key;
    }
    for (int a=0;a<n;a++)
        {
                   cout<<arr[a]<<" ";
        }

}*/
void insertionSort1(int n, vector<int> arr) {

    for(int i=n-1;i>0;i--)
    {
        int key=arr[i];
        while (arr[i]>0 &&arr[i-1]>key)
        {
            arr[i]=arr[i-1];
            i--;
             for (int j=0;j<n;j++)
                {
                   cout<<arr[j]<<" ";
                }
                cout<<endl;
        }
        arr[i]=key;
    }
    for (int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }

}
int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    insertionSort1(n, arr);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

