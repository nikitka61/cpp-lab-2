#include <iostream>

using namespace std;

long int fact2(int N){
    long int res = 1;
    for (int i = N; i>=1; i-=2)
        res *= i;
    return res;
}

long double t(long double x){
    long double sum_t_1 = 0;
    for (int k=0; k<11; k+=1)
        sum_t_1 += ( pow(x, 2*k+1) ) / fact2(2*k + 1);
    long double sum_t_2 = 0;
    for (int k=0; k<11; k+=1)
        sum_t_2 += (pow(x, 2*k)) / fact2(2*k);
    return sum_t_1/sum_t_2;
}
int main(){
    float y;
    cin >> y;
    float otv= (7*t(0.25) + 2*t(1+y)) / (6 - t(y*y - 1));
    cout << otv << "\n";
    
}
