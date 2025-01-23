#include <stdio.h>
#include <stdbool.h>

//declare functions before calling them
char* primeOrFactorial(int n);
int UABIndesSum(int arr[]);
int* replaceEvenWithZero(int arr[], int n);

int main(){
    //prime or factorial 
    int pOrf;
    printf("Enter a positve integer: ");
    scanf("%d", &pOrf);
    printf("%s\n", primeOrFactorial(pOrf));

    // UAB Index sum
    int a[4];
    printf("\nEnter four array elements: ");
    for (int i = 0; i < 4; i ++){
        scanf("%d", &a[i]);
    }
    int ans = UABIndesSum(a);
        printf("number of elements that equal their index: %d \n", ans);

    // replaceEvenWithZero
    int b[10];
    int numberOfEl = 0;
    printf("\nEnter number of array elements (up to 10): ");
    scanf("%d", &numberOfEl);

    printf("Enter %d array elements: ", numberOfEl);
    for (int i = 0; i < numberOfEl; i ++){
        scanf("%d", &b[i]);
    }
    int *bb = replaceEvenWithZero(b, numberOfEl);
    printf("Replace even #'s with 0's: ");
    for (int i = 0; i < numberOfEl; i ++){
        printf("%d ", bb[i]);
    }
    printf("\n \n");


    return 0;
}

char* primeOrFactorial(int n){
    bool prime = true;
    int fact = 1;
    if(n <= 1){
        return "Invalid input.";
    }
    // is n prime?
    for (int i = 2; i < n; i ++){
     if(n == 2){
     break;
     }
     else if(n % i == 0)
        prime = false;
        break;
    }
    if(prime){
        return "Prime number.";
    }
    // factorial calculation
    else{
        for(int i = 2; i <= n; i++){
            fact *= i;
            }
        }
        // local var./non static str points to deallocated memory--> make static
        static char str[100];
        sprintf(str, "%d", fact); 
        return str;
    }

    int UABIndesSum(int arr[]){
        int i = 0;
        int counter = 0;
        while(i < 4){
            if(arr[i] == i){
                counter++;
            }
            i ++;
        }
        return counter;
    }

int* replaceEvenWithZero(int arr[], int n){
    static int b[10];
    for(int i = 0; i < n; i ++){
    if(arr[i] % 2 == 0){
        b[i] = 0;
    }
    else{
        b[i] = arr[i];
    }
}
    return b;
}
