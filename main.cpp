#include <iostream>
using namespace std;
int N = 4, M = 4;
void printMatrix(int matx[N][M]){
    for(int i=0; i < N; i++)
    {
        for(int j=0; j < M; j++)
        {
            cout << matx[i][j] << " ";
        }
        cout << endl;
    }
}
void Compare(int matx[N][M]){
    int mass2[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int x;
    for (int i=0; i < N; i++){
        for(int j=0; j < M; j++){
            if (matx[i][j]==mass2[i][j]){
                x=x+1;
                continue;
            }
            else {
                x=0;
                cout<<"Следующий ход"<<endl;
            }
            break;
        }
    }
    if (x==16) cout<<"You win!";
}

int main() {
    int x,m,n,count=0;
    int mass[4][4]={{5,7,9,2},{1,3,6,4},{10,8,13,12},{11,14,15,{}},};
    enum {right=1,left=2,up=3,down=4};
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            cout<<mass[i][j]<<" ";
        }
        cout<<endl;
    }
    while (count<100){
        cin>>m>>n;
        cout<<endl;
        cin>>x;
        if(x==right && n!=3){
            mass[m+1][n]=mass[m][n];
        }
        else if(x==left && n!=0){
            mass[m+1][n]=mass[m][n];
        }
        else if(x==up && m!=0){
            mass[m+1][n]=mass[m][n];
        }
        else if(x==down && m!=3){
            mass[m+1][n]=mass[m][n];
        }
        else{
            cout<<"Ошибка!"<<endl;
            continue;
        }
        count++;
    }
}