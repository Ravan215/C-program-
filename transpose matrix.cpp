#include<iostream>
using namespace std;

int main()
{

    int n,m,temp;
    cout<<"enter size";
    cin>>n>>m;
    int a[n][m];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout << "enter elements"<<i<<j<< endl;
            cin>>a[i][j];


        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {

            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;



        }



    }




    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            //cout << "val;ue="<<i<<j;
            cout<<" "<<a[i][j];


            }
            cout << "" << endl;
        }
        return 0;
    }