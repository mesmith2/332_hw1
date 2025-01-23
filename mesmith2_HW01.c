#include <stdio.h>
#include <stdbool.h>
#include <string.h>

//declare functions before calling them
char* primeOrFactorial(int n);
int UABIndesSum(int arr[]);
int* replaceEvenWithZero(int arr[], int n);
bool evenSquare(int n);
int countVowels(char* s);

int main(){
    //prime or factorial 
    int pOrf;
    printf("Enter a positve integer: ");
    scanf("%d", &pOrf);
    getchar(); // getchar after every scanf to clear input buffer for upcoming fgets()
    printf("%s\n", primeOrFactorial(pOrf));

    // UAB Index sum
    int a[4];
    printf("\nEnter four array elements: ");
    for (int i = 0; i < 4; i ++){
        scanf("%d", &a[i]);
    }
    getchar();
    int ans = UABIndesSum(a);
        printf("number of elements that equal their index: %d \n", ans);

    // replaceEvenWithZero
    int b[10];
    int numberOfEl = 0;
    printf("\nEnter number of array elements (up to 10): ");
    scanf("%d", &numberOfEl);
    getchar();

    printf("Enter %d array elements: ", numberOfEl);
    for (int i = 0; i < numberOfEl; i ++){
        scanf("%d", &b[i]);
    }
    getchar();
    int *bb = replaceEvenWithZero(b, numberOfEl);
    printf("Replace even #'s with 0's: ");
    for (int i = 0; i < numberOfEl; i ++){
        printf("%d ", bb[i]);
    }

    // evenSquare
    int evenOrOdd;
    printf("\n\nEnter an integer: ");
    scanf("%d", &evenOrOdd );
    getchar();
    bool tOrf = evenSquare(evenOrOdd);
    if(tOrf){
        printf("True, %d is an even sqaure.\n", evenOrOdd);
    }
    else{
        printf("False, %d is an odd sqaure.\n", evenOrOdd);
    }

    //countVowels
    char s[25];
    printf("Enter a string of characters up to 25(a-z/A-Z): ");

    fgets(s, sizeof(s), stdin);
// removing new line character left from scanf
    size_t len = strlen(s);
    if( len> 0 && s[len-1]== '\n'){
    s[len-1] = '\0';
    }
   
    //scanf("%s", s);
    int numV = countVowels(s);
    printf("There are %d vowels in the input string.\n\n", numV);
    


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

bool evenSquare(int n){
    if((n*n) % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}
// not char* s[]--> represents an array of strings 
int countVowels(char* s){
size_t len = strlen(s);
 int count = 0;
 for(int i = 0; i < len; i++){
    if(s[i] == 'a' || s[i] == 'A') {count ++;}
    else if(s[i] == 'e' || s[i] == 'E'){count ++;}
    else if(s[i] == 'i' || s[i] == 'I'){count ++;}
    else if(s[i] == 'o' || s[i] == 'O'){count ++;}
    else if(s[i] == 'u' || s[i] == 'U'){count ++;}
 }
 return count;
}
