#include<iostream>
using namespace std;

#define MAX_LEN 256

void mult(int a[], int toBeMultiplied);

int main(int argc, char const *argv[])
{
    int num,i=0;
    cin>>num;
    int arr[MAX_LEN];
    while(i<MAX_LEN){
        arr[i++] = -1;
    }
    arr[MAX_LEN-1]=1;
    for (size_t i = 2; i <= num; i++)
    {

        mult(arr,i);
    }
    for(i=0;i<MAX_LEN;i++){
        if(arr[i]==-1){continue;}
        else cout<<arr[i];
    }
    return 0;
}

void mult(int arr[], int toBeMultiplied){
    long long carry = 0;
    
    for (int i=MAX_LEN-1; i > 0; i--)
    {
        
        if(arr[i]!=-1){

            
            long long temp = arr[i] * toBeMultiplied;

            arr[i] = (temp+carry) % 10 ;
            temp=(temp+carry)/10;
            carry = temp;//% 10;

            
        }
        else {
            while(carry!=0){
                arr[i]=carry%10;
                carry/=10;
                i--;
            }
            return;
        }
    }
    
}
