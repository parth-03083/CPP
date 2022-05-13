#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>


















// void increase(int *p,int n){
//   for(int i=0;i<n;i++){
//     *p= (*p)+4;
//     p++;
//   }
//   return;
// }

// void display(int *a,int size){
//   for(int i=0;i<size;i++){
//    printf("%d ",*a); 
//    a++;
//   }
//   printf("\n");
// }


// int main(){
//     int a[]={9,10,22,33,48};
//     increase(a,5);
//     display(a,5);
//     int b ; scanf("%d",&b);
//     char str[20]; scanf("%s",str);
    

//   return 0;
// }























/* QUE-8 */
//write C program to find that if accepted number is zero,Negetive or Positive.
// int main(){
//   int n;
//   printf("Enter the number you want to check:");
//   scanf("%d",&n);
//   if(n<0){
//     printf("Given number is a negetive number\n");
//   }
//   else{
//       if(n==0){
//         printf("Given number is a Zero\n");      
//       }
//       else{
//         printf("Given number is a positive number\n");
//       }
//   }
//   return 0;
// }

/* QUE -9 */
//Write a C program to read marks from keyboard whether the student is pass or fail
// int main(){
//   int marks;

//   printf("Enter the marks of student:");
//   scanf("%d", &marks);
//   if(marks<33){
//     printf("Student has failed the examination\n");
//   }
//   else
//   printf("Student has passed the examination\n");
//   return 0;
// }

/* QUE-10 */
//Write a C program to read three nubers from keyboard and find out maximum out of these three.
// int main(){
//   int a,b,c;
//   printf("Enter three numbers :");
//   scanf("%d %d %d",&a,&b,&c);
//   if(a>b){
//     if(b>c){
//       printf("Number %d is highest.\n",a);
//     }
//     else{
//       printf("Number %d is highest.\n",b);
//     }
//   }
//   else{//b>a
//       if(b>c){
//         printf("Number %d is highest.\n",b);

//       }
//       else{
//         printf("Number %d is highest.\n",c);
//       }
//   }

//   return 0;
// }


/* QUE 11 */
//Write a C program to check whether entered letter is Capital,small or digit or special character
// int main(){
//     char c;
//     printf("Enter the character : ");
//     scanf("%c",&c);
//     if(c>='0'&& c<='9'){
//         printf("Entered character is Digit");
//     }
//     else if(c>='A'&& c<='Z'){
//         printf("Entered character is Capital Letter");
//     }
//     else if(c>='a'&& c<='z'){
//         printf("Entered character is Small Letter");
//     }
//     else{
//         printf("Entered character is Special Character");
//     }printf("\n");
//     return 0;
// } 

/* QUE-12 */
 /* Write a program to read marks from keyboard and your program should display equivalent grade according to the following table(if else ladder)
Marks Grade:100 - 80 Distinction , 79 - 60 First Class,59 - 40 Second Class, < 40 Fail
  */
// int main(){
//   int marks;
//   printf("Enter marks of student: ");
//   scanf("%d", &marks);
//    if(marks>100 || marks<0){
//     printf("Enter valid marks");
//     }
//   else if(marks>=80){
//     printf("student has passed with Distinction\n");
//     }
//   else if(marks>=60){
//     printf("student has passed with First class\n");
//     }
//   else if(marks>=40){
//     printf("student has passed with Second Class\n");
//     }
//   else{
//       printf("student has failed the examination\n");
//     }return 0;
// }
/* QUE-13 */
//  Write a c program to prepare pay slip using the following data. Da = 10% of basic, Hra = 7.50% of basic, Ma = 300, Pf = 12.50% of basic, Gross = basic + Da + Hra + Ma, Nt = Gross – Pf.
// int  main(){
//     float basic;
//     printf("Enter the basic salary of employee : ");
//     scanf("%f",&basic);
//     float da,hra,pf,gross,net;
//     da=0.1*basic;
//     hra=0.0750*basic;
//     pf=0.1250*basic;
//     gross=basic+da+hra+300.0;
//     net=gross-pf;
//     printf("Gross salary is : %f\n Net salary is: %f \n",gross,net);
//     return 0;
// }

/* QUE-14 */
// Write a C program to read no 1 to 7 and print relatively day Sunday to Saturday.
// int main(){
//     int x;
//     printf("Enter the number between 1 to 7 : ");
//     scanf("%d",&x);
//     switch (x)
//     {
//     case 1:
//         printf("Monday\n");
//         break;
//     case 2:
//         printf("Tuesday\n");
//         break;
//     case 3:
//         printf("Wednesday\n");
//         break;
//     case 4:
//         printf("Thursday\n");
//         break;
//     case 5:
//         printf("Friday\n");
//         break;
//     case 6:
//         printf("Saturday\n");
//         break;
//     case 7:
//         printf("Sunday\n");
//         break;
    
//     }
//     return 0;
// }

/* QUE-15 */
//Write a C program to find out the maximum and minimum from given 10 numbers.
// #include<limits.h>
// int main(){
//     int mx=INT_MIN;int mn=INT_MAX;
//     printf("Enter 10 numbmes");
//     for(int i=0;i<10;i++){
//         int k;scanf("%d",&k);
//         if(mx<k){
//             mx=k;
//         } else{}
//         if(k<mn){
//             mn=k;
//         } else {}
//     }
//     printf("Maximum no is %d and minimum no is %d \n",mx,mn);
//     return 0;
// }
/* QUE-16 */
//Write a C program to input an integer number and check the last digit of number is even or odd.
//  int main(){
//      int num;
//      printf("Enter the number :");
//      scanf("%d",&num);
//      int rem=num%10;
//      if(rem%2==0){
//     printf("The last digit of entered number is even \n");
//      }
//      else{
//        printf("The last digit of entered number is odd \n");
//     }
//     return 0;   
//  }

/* QUE-17 */
//Write a C program to find factorial of number
// int main(){
//     int n;
//     printf("Enter the number you want to find factorial of : ");
//     scanf("%d",&n);
//     int i=n;
//     while(--n){
//         i*=n;
 
//     }
//     printf("%d \n",i);
//     return 0;
// }
/* QUE-18 */
//Write a C program to reverse a number.
// int main(){
//     int a ,b ;
//     printf("Enter the Number you want to reverse : ");
//     scanf("%d",&a);
//     b=0;
//     while(a>0){
//         int num=a%10;
//         a/=10;
//         b=b*10+num; 
//     }
//     printf("Reverse of entered number is : %d",b);
//     return 0;
// }
/* QUE-19 */
//Write program to generate first n number of fibonacci series
// int main(){
//     int n;scanf("%d",&n);
//     int n1=0,n2=1,ans;
//     printf("%d ",n1);
//     printf("%d ",n2);
//     for(int i=2;i<n;i++){
//         ans=n1+n2;
//         printf("%d ",ans);
//         n1=n2;
//         n2=ans;
//         }
//     return 0;
// } 

/* QUE-20 */
//Write a program to find out first and last digit of given number
// int main(){
//     int n;int sum=0;
//     printf("Enter the Number : ");
//     scanf("%d",&n);
//     int rem=n%10;
//     sum+=rem;
//     while(n>10){
//         n/=10;
//     }
//     rem=n%10;
//     sum+=rem;
//     printf("Sum of first and last digit of given number is : %d",sum);
//     return 0;
// }

/* QUE-21 */
//Write a C program to find the sum and the average of different numbers ehich are accepted by user as many as user wants
// int main(){
//     printf("Enter the total number of times you want to give input : ");
//     int n;scanf("%d",&n);
//     printf("start entering %d numbers : ",n);
//     int sum=0;
//     for(int i=0;i<n;i++){
//       int val;scanf("%d",&val);
//       sum+= val;
//     }
//     float avg=(float) sum/n;
//     printf("Sum and average of entered %d numbers are %d and %f.\n",n,sum,avg);
//     return 0;
// }


/*QUE-22*/
//Write a program to calaulate average and total of 5 students for 3 subjects.
// int main(){
//   for(int i=1;i<=5;i++){
//     printf("Enter the marks of 3 subjects student %d :",i);
//     int sum=0;float avg=0.0;
//     for(int i=0;i<3;i++){
//       int val;scanf("%d",&val);
//       sum+=val;
//     }
//     avg=sum/3;
//     printf("Total marks and average marks for student %d is %d and %f\n",i,sum,avg);
//   }
//   return 0;
// }

/*QUE-23*/
//Read five persons height and weight and count the number of person having height greater than 170 and weight less than 50
// int main(){
//   int cnt=0;
//   for(int i=0;i<5;i++){
//     int h,w;
//     printf("Enter the height and weight of person %d : " ,i+1);
//     scanf("%d %d",&h,&w);
//     if(h>170 && w<50){
//       cnt++;
//     }
//   }
//     printf("Number of person having height greater than 170 abd weight lesser than 50 is : %d",cnt);
//     return 0;
  
// }

/* QUE-24 */
//Write a program to check wehether the given number is prime or not 
// int main(){
//   int n;scanf("%d",&n);
//   int ans=1;
//   for(int i=2;i<sqrt(n);i++){
//     if(n%i==0){
//       ans=0;
//       break;
//     }
//   }
//   if(ans==1){
//     printf("Entered number is prime number.");
//   }
//   else if(ans==0){
//     printf("Entered number is not  prime number.");
//   }
//   return 0;
// }


/*QUE 25*/
//Write a program to evaulate series 1^2+2^2+3^2+....n^2
// int main(){
//     int n;scanf("%d",&n);
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum+=pow(i,2);
//     }
//     printf("%d\n",sum);
//     return 0;
// }

/*QUE 26*/
//Write a C program to find 1+ 1/2 + 1/3 + .... +1/n
// int main(){
//     int n;scanf("%d",&n);
//     float sum=0.0;
//     for(int i=1;i<=n;i++){
//         float val=(float) 1/i; 
//         sum+= val;
//     }
//     printf("%f",sum);    
//     return 0;
// }

/*QUE 27*/
//Write a C program to find 1 + 1/2! + 1/3! +.....+1/n!
// int main(){
//     int n;scanf("%d",&n);
//     float sum=0.0;
//     for(int i=1;i<=n;i++){
//         int x=1;
//         for(int j=1;j<=i;j++){
//             x*=j;
//         }
//     float ans=x*1.0;
//         sum+=(1/ans);
//     }
//     printf("%f",sum);
//     return 0;
// }


// /* QUE 28*/
// //Write a C program to evaluate series sum = 1 - x + x^2/2! - x^3/3! +..... - x^9/9! 
// int fac(int n){
//     int ans=1;
//     for(int i=1;i<=n;i++){
//         ans*=i;
//     }
//     return ans;
// }
// int main(){
//     int n;scanf("%d",&n);
//     float sum=0.0;
//     for(int i=1;i<=9;i++){
//         int fc=fac(i);
//         float addVal= pow(-1,i+1) * ((pow(n,i))/(fc*1.0));
//         sum+=addVal;
//     }
//     printf("%f",sum);
//     return 0;

// }

/*QUE 29 */
//pattern1
/* 
* 
* * 
* * * 
* * * * 
* * * * * 
*/
// int main(){
//     for(int i=0;i<5;i++){
//         for(int j=0;j<=i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }
/* QUE-29 */
//pattern 2
/*
     * 
    * * 
   * * * 
  * * * * 
 * * * * * 
*/

// int main(){
//   int n=5;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<(5);j++){
//             printf(" ");
//         }
//         for(int k=0;k<=i;k++){
//             printf("* ");
//         }printf("\n");
//     }
//     return 0;
// }

/* QUE-29 */
//pattern 3
/*
* * * * * 
* * * * 
* * * 
* * 
* 
*/
// int main(){
//     for(int i=0;i<5;i++){
//         for(int j=5;j>i;j--){
//             printf("* ");
//         }printf("\n");
//     }
//     return 0;
// }

/*QUE 30*/
//pattern 1
/*
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
*/

// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d ",j);
//         }printf("\n");
//     }
//     return 0;
// }
/* QUE-30 */
//pattern3
/*
  55555
  4444
  333
  22
  1 
*/
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=5;j>=i;j--){
//             printf("%d",5-i+1);
//         }printf("\n");
//     }
//     return 0;
// }
/* QUE-30 */
// pattern 2
/*
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 
*/
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5-i+1;j++){
//             printf("%d ",j);
//         }printf("\n");
//     }
// }

/* QUE 31*/
//pattern1
/*
AAAAA
BBBB
CCC
DD
E
*/
// int main(){
//     for(int i=0;i<5;i++){
//         for(int j=5;j>i;j--){
//             printf("%c",'A'+i);
//         }printf("\n");
//     }
//     return 0;
// }
/* QUE-31 */
//pattern 2
/*
 ABCDE
 ABCD
 ABC
 AB
 A
*/
// int main(){
//     for(int i=0;i<5;i++){
//         for(int j=5;j>i;j--){
//              printf("%c",'A'+5-j);
//         }printf("\n");
        
//     }
// }

/* QUE-32 */
// Write a C program to read and store the roll no and marks of 20 students using array.
// int main(){
//   int m[20];int ro[20];
//   printf("Enter the roll numbers and marks of 20 students respectively :\n");
//   for(int i=0;i<20;i++){
//     int x,y;
//     scanf("%d %d",&x,&y);
//     ro[i]=x;m[i]=y;
//   }
//   printf("\n");
//   printf("\n");
//   printf("\n");    
//   for(int i=0;i<20;i++){
//     printf("Roll no is %d and Marks is %d\n",ro[i],m[i]);
//   }
//   return 0;
// }

/* QUE-33 */
//Write a program to find out which number is odd and even from list of 10 numbers using array.
// int main(){
//   int a[10];printf("Enter the 10 elements : ");
//   for(int i=0;i<10;i++){
//      scanf("%d",&a[i]);
//   }
//   for(int i=0;i<10;i++){
//     if(a[i]%2==0){
//       printf("Element %d is even\n",i+1);
//     }
//     else{
//       printf("Element %d is odd\n",i+1);
//     }
//   }
//   return 0;
// }

/* QUE-34 */
//Write a program to find maximum element from 1-D array.
// #include<stdlib.h>
// #include<limits.h>
// int max(int n1,int n2){
//     if(n1>n2){
//         return n1;
//     }
//     return n2;

// }
// int main(){
//     int n;scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     int ans=INT_MIN;
//     for(int i=0;i<n;i++){
//         ans=max(ans,a[i]);
//     }
//     printf("Maximum Element is %d \n",ans);
//     return 0;
// }



// /* QUE-35 */
// Write a C program to calculate the average geometric and harmonic mean of n elements in an array.
// int main(){
//     int n;scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=a[i];
//     }
//     float avg= (float) sum/n;
//     printf("Average of Array is %lf\n",avg);
//      int mul=1;
//     for(int i=0;i<n;i++){
//         mul*= a[i];
//     }
//     float gm=(float) pow(mul,(1.0/n));
//     printf("Geometric mean of Array is %f\n",gm);

//     float inv=0.0;
//     for(int i=0;i<n;i++){
//         inv+=(float) (1.0/a[i]);
//     }
//     float hm= 1.0/inv;
//     printf("Harmonic mean of Array is %f\n",hm);
//      return 0;
//      }

/* QUE-36 */
//Write a program to sort array in ascending order.-Bubble sort
// int main()
// {
//   int array[100], n, c, d, swap;

//   printf("Enter number of elements : ");
//   scanf("%d", &n);

//   printf("Enter %d integers : ", n);

//   for (int i = 0; i < n; i++)
//     scanf("%d", &array[i]);

//   for (int i = 0 ; i < n - 1; i++)
//   {
//     for (int j = 0 ; j < n - i - 1; j++)
//     {
//       if (array[j] > array[j+1]) 
//       {
//         swap       = array[j];
//         array[j]   = array[j+1];
//         array[j+1] = swap;
//       }
//     }
//   }

//   printf("Sorted list in ascending order:\n ");

//   for (int i = 0; i < n; i++)
//      printf("%d \n " , array[i]);
//   printf("\n");
//   return 0;
// }

/* QUE-36 */
//Write a program to sort array in ascending order.-Merge sort
// void merge(int arr[], int p, int q, int r) {
//   int n1 = q - p + 1;
//   int n2 = r - q;

//   int L[n1], M[n2];

//   for (int i = 0; i < n1; i++)
//     L[i] = arr[p + i];
//   for (int j = 0; j < n2; j++)
//     M[j] = arr[q + 1 + j];
//   int i, j, k;
//   i = 0;
//   j = 0;
//   k = p;
//   while (i < n1 && j < n2) {
//     if (L[i] <= M[j]) {
//       arr[k] = L[i];
//       i++;
//     } else {
//       arr[k] = M[j];
//       j++;
//     }
//     k++;
//   }
//   while (i < n1) {
//     arr[k] = L[i];
//     i++;
//     k++;
//   }
//    while (j < n2) {
//     arr[k] = M[j];
//     j++;
//     k++;
//   }
// }
// void mergeSort(int arr[], int l, int r) {
//   if (l < r) {
//     int m = l + (r - l) / 2;
//     mergeSort(arr, l, m);
//     mergeSort(arr, m + 1, r);
//     merge(arr, l, m, r);
//   }
// }

// int main() {
//   printf("Enter the size of array : ");
//   int size;scanf("%d",&size);
//   int arr[size];
//   for(int i=0;i<size;i++){
//     scanf("%d",&arr[i]);
//   }
  

//   mergeSort(arr, 0, size - 1);

//   printf("Sorted array: \n");
//   for(int i=0;i<size;i++){
//     printf("%d\n",arr[i]);
//   }
// }

/* QUE-37 */
//Write a C program to find character from given string.
// int main(){
//   char a[100],c;

//   printf("Enter the string : ");
//   gets(a);
//   printf("Enter the character you want to find : ");
//   scanf("%c",&c);int con=0;
//   for(int i=0;a[i]!='\0';i++){
//     if(a[i]==c){
//       con=1;
//       break;
//     }

//   }
//   if(con==1){
//     printf("Character is present in the string");
//   }
//   else if(con==0){
//     printf("Character is not present in the string");
//   }
//   return 0;
// }

/* QUE-38 */
//Write a program to replace the character in the string.

// int main(){

//   char a[100],xh,yh;
//   printf("Enter the string : ");
//   gets(a);
//   printf("Enter the character you want to replace and to replace with : ");
//   scanf("%c",&xh);
//   printf("\nEnter the character you want to replace with : ");
//   scanf("\n%c",&yh);
//   for(int i=0;a[i]!='\0';i++){
//     if(a[i]==xh){
//       a[i]=yh;
//     }
    
//   }
//   printf("%s",a);
//   return 0;
//   }

/* QUE-39 */
//Write a program to delete a character in given string.
// int main(){
//   char str[100];
//   printf("enter the string : ");
//   gets(str);
//   printf("\n enter the character to be deleted from string : ");
//   char sh;scanf("%c",&sh);
//   for(int i=0;str[i] != '\0';i++){
//     if(str[i]==sh){
//       for(int j=i;str[j]!='\0';j++){
//         str[j]=str[j+1];
//       }
//       i--;
//     }
//   }
//   printf("%s\n",str);
// }

/* QUE-40 */
//Write a program to reverse the string.
// int main(){
//   char a[100];
//   printf("Enter the string :");
//   gets(a); int n=0;
//   for(int i=0;a[i]!=0;i++){
//     n++;
//   }n--;
//   for(int i=0;i<n/2;i++){
//     char temp=a[i];
//     a[i]=a[n-i];
//     a[n-i]=temp;  
//   }
//   printf("Rversed String is : ");
//   printf("%s",a);
//   return 0;
// }
/* QUE-41 */
// Write a prgram to convert a string into uppercase.
// int main(){
//     char as[50];
//     gets(as);
//     for(int i=0;as[i]!='\0';i++){
//         if(as[i]>='a' && as[i]<='z'){
//             as[i]=as[i]-32;
//         }
//     }
//     printf("String is %s",as);
//     return 0;
// }

/* QUE-42 */
//Write a program that defones function to add n numbers
// int sumTill(int x){
//     int a=x*(x+1)/2;
//     return a;
// }
// int main(){
//     int n;printf("Enter the number : ");
//     scanf("%d",&n);
//     int ans=sumTill(n);
//     printf("Sum of %d natural numbers are : %d",n,ans);
// }

/* QUE-43 */
//Write a function in the program that returns 1 if number is prime and otherwise 0.
// int isPrime(int x){
//     for (int i=2;i<sqrt(x);i++){
//         if(x%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }
// int main(){
//     int n;printf("Enter the number : ");
//     scanf("%d",&n);
//     int ans=isPrime(n);
//     printf("Answer of required function for %d is : %d",n,ans);
// }

/* QUE-44 */
//Write a function Exchange to interchange the values of two varibles say x and y.illustrate use of this funtion in calling function.
// int x,y;
// void swapTwo(){
//     int temp=x;
//     x=y;
//     y=temp;
// }
// int main(){
    
//     printf("Enter two variables x and y : ");
//     scanf("%d %d",&x,&y);
//     swapTwo();
//     printf("Values of x and y are : %d and %d",x,y);
//     return 0;
// }

/* QUE-45 */
//Write a C program to use recursive calls to evaluste F(x)=x-x^3/3!+x^5/5!+.....x^n/n!
// int x;
// int fac(int l){
//     if(l==1){
//         return 1;
//     }
//     return l*fac(l-1);
// }
// float ser(int n,int i,int k){
//     float term= pow(-1,i)*pow(x,k)/fac(k);
//     if(k==n){
//         return term;
//     }
//     return term+ser(n,i+1,k+2);
// }
// int main(){
//     int n;printf("Enter the number n : ");
//     scanf("%d",&n);
//     printf("Enter the number x : ");scanf("%d",&x);
//     float sum;
//     sum=ser(n,1,1);
//     printf("Answer is %f",sum);
//     return 0;
// }

/* QUE-46 */
//Write a program to find factorial of number using recursion.
// int fac(int x){
//     if(x==1){
//         return 1;
//     }
//     return x*fac(x-1);
// }
// int main(){
//     int n;printf("Enter the number : ");
//     scanf("%d",&n);
//     int ans=fac(n);
//     printf("Factorial of number is : %d",ans);
//     return 0;
// }

/* QUE-47 */
//Write a C program using global and static varible.
// int x;
// int ma(){
//    static int y=88;
//    x=18;
//    return y++;
// } 
// int main(){
//   printf("\nglobal and static varibles are : %d and %d",x,ma());
//   printf("\nglobal and static varibles are : %d and %d",x,ma());
//   printf("\nglobal and static varibles are : %d and %d",x,ma());
//   return 0;
// }

/* QUE-48 */ 
//Write a function that will scan a character string pased as an argument and convert all lowercase characters into their uppercase equivalent.
// int main(){
//   char str[500];
//   printf("Enter the string");
//   gets(str);
//   for(int i=0;str[i]!='\0';i++){
//     if(str[i]>='a' && str[i]<='z'){
//       str[i]-=32;
//     }
//   }
//   puts(str);
//   return 0;
// }

/* QUE-49 */
//Write a program to read structure elements from keyboard
// struct student{
//   int rollNo;
//   char name[50];
//   char surName[50];
// };
// int main(){
//   struct student s1;
//   printf("Enter the name of student : ");
//   gets(s1.name);
//   printf("Enter the surname of student : ");
//   gets(s1.surName);
//   printf("Enter the Roll number of student : ");
//   scanf("%d",&s1.rollNo);
//   printf("Details of student are : \n");
//   printf("Name : %s %s\n",s1.name,s1.surName);
//   printf("Roll No : %d\n",s1.rollNo);
//   return 0;
// }

/* QUE-50 */
//Define a structure type struct personal that would contain person name, date of joining and salary using this structure to read this information of 5 people and print the same on screen.

// struct personal
// {
//   char name[50];
//   char date[8];
//   int salary;
// }p[5];
// int main(){
  
//   for(int i=0;i<1;i++){
//     printf("Enter name of person%d: ",i+1);
//     gets(p[i].name);
//     printf("Enter joining of person%d : ",i+1);
//     gets(p[i].date);
//     printf("Enter salary of person%d : ",i+1);
//     scanf("%d",&p[i].salary);
//   }
//     for(int i=0;i<1;i++){
   
//     printf("Details of person%d: ",i+1);
//     puts(p[i].name);
//     puts(p[i].date);
//     printf("%d \n", p[i].salary );
//   }

// }
/* QUE-51 */
//Define structure data type called time_struct containing three member’s integer hour, integer minute and integer second. Develop a program that would assign values to the individual number and display the time in the following format: 16: 40:51
// struct time{
//   int sec;
//   int mint;
//   int hr;
// }t;
// int main(){
//   printf("Enter the hour : ");scanf("%d",&t.hr);
//   printf("Enter the minute : ");scanf("%d",&t.mint);
//   printf("Enter the secont : ");scanf("%d",&t.sec);
//   printf("time in goven format is : %d:%d:%d \n",t.hr,t.mint,t.sec);
//   return 0;
// }

/* QUE-52 */
// Define a structure called cricket that will describe the following information: Player name,Team name,Batting average Using cricket, declare an array player with 50 elements and write a C program to read the information about all the 50 players and print team wise list containing names of players  with their batting average.
// struct cricket
// {
//   char name[50];
//   char team[50];
//   int avg;
// }p[50];
// int main(){
//   for(int i=0;i<1;i++){
//     printf("Enter name of player%d :",i+1);gets(p[i].name);
//     printf("Enter team name of player%d :",i+1);gets(p[i].team);
//     printf("Enter batting average of player%d :",i+1);scanf("%d",&p[i].avg);
//     printf(\n);
//   }  
//   for(int i=0;i<1;i++){
//     printf("Name of player%d :",i+1);puts(p[i].name);
//     printf("Team name of player%d :",i+1);puts(p[i].team);
//     printf("Batting average of player%d : %d",i+1,p[i].avg);
//     printf(\n);
//   }
//   return 0;
// }

/* QUE-53 */
//Design a structure student_record to contain name, branch and total marks obtained. Develop a program to read data for 10 students in a class and print them
// struct student_record{
//   char name[50];
//   char branch[3];
//   int tMks;
// }s[10];
// int main(){
//   for(int i=0;i<1;i++){
//     printf("Enter Name of student%d :",i+1);gets(s[i].name);
//     printf("Enter Branch name of student%d :",i+1);gets(s[i].branch);
//     printf("Enter Total marks of of student%d :",i+1);scanf("%d",&s[i].tMks);
//     printf("\n");
//   }
//   for(int i=0;i<1;i++){
//     printf("Name of student%d :",i+1);puts(s[i].name);
//     printf("Branch name of student%d :",i+1);puts(s[i].branch);
//     printf("Total marks of of student%d : %d",i+1,s[i].tMks);
//     printf("\n");
//   }
// }

/* QUE-54 */
//Write a program to print address of variable using pointer.
// int main(){
//   int *n;
//   printf("Addres of pointer is : %p \n",n);
// }

/* QUE-55 */
// Write a C program to swap the two values using pointers
// int main()
// {
//   int x, y, *a, *b, temp;
//   printf("Enter the value of x and y : ");
//   scanf("%d %d", &x, &y);
//   printf("Before Swapping : x = %d y = %d ", x, y);
//   a = &x;
//   b = &y;
//   temp = *b;
//   *b = *a;
//   *a = temp;
//   printf("\nAfter Swapping: x = %d y = %d ", x, y);
// }

/* QUE-56 */
//Write a C program to print the address of character and the character of string using pointer.
// int main(){
//   char b[5],*d;
//   gets(b);
  
//   *d=&b;
//   printf("Address of string is %p and value is %s ",d,b);
// }

/* QUE-57 */
//Write a program to access elements using pointer.
// int main(){
//   int *p;
//   printf("Enter the element : ");
//   scanf("%d",p);
//   int ans=pow((*p),2);
//   printf("square of given element is :%d \n",ans);
//   return 0;
// }

/* QUE-58 */
//Write a program for sorting using pointer.
//     void sort(int n, int* ptr){
//     int i, j, t;
//     for (i = 0; i < n; i++) {
//       for (j = i + 1; j < n; j++) {
//         if (*(ptr + j) < *(ptr + i)) {
//           t = *(ptr + i);
//           *(ptr + i) = *(ptr + j);
//           *(ptr + j) = t;
//         }
//       }
//     }
//     for (i = 0; i < n; i++)
//       printf("%d ", *(ptr + i));
// }
// int main(){
//   printf("Enter total elements of array : ");
//   int n;scanf("%d",&n);
//   printf("Enter %d elements of array : ",n);
//   int a[n];
//   for(int i=0;i<n;i++){
//     scanf("%d",&a[i]);
//   }
//   sort(n,a);
//   return 0;
// }
  

/* QUE-59 */
//Write a program to write a string in file
// int main()
// {
//   FILE *fp;
//   char str[100];
//   printf("Enter the string to write :");
//   gets(str);
//   fp = fopen("NNEW","w+");
//     if (fp){
//       fputs(str,fp);
//     }
//     else{
//       printf("Failed to open the file\n");
//     }

//   fclose(fp);
//   return(0);
// }


/* QUE-60 */
//A file named data contains series of integer numbers. Write a c program to read all  numbers from file and then write all odd numbers into file named “odd” and write all even numbers into file named “even”. Display all the contents of these file on screen
// int main(){
//   FILE *fl1,*fl2,*fl3;
//   int num,i;
//   printf("Contents of DATA File : ");
//   fl1=fopen("DATA","w");
//   for(int i=0;i<10;i++){
//     scanf("%d",&num);
//     if(num == -1){
//       break;
//     }
//     putw(num,fl1);
//   }
//   fclose(fl1);
//   fl1=fopen("DATA","r");
//   fl2=fopen("ODD","w");
//   fl3=fopen("EVEN","w");
//   while((num = getw(fl1))!= EOF){
//     if(num%2==0){
//       putw(num,fl3);
//     }
//     else{
//       putw(num,fl2);
//     }
//   }
//   fclose(fl1);
//   fclose(fl2);
//   fclose(fl3);
//   fl2=fopen("ODD","r");
//   fl3=fopen("EVEN","r");
//   printf("Contents of ODD : ");
//   while((num=getw(fl2))!=EOF){
//     printf("%d ",num);
//   }
//   printf("Contents of EVEN : ");
//   while((num=getw(fl3))!=EOF){
//     printf("%d ",num);
//   }
//   fclose(fl2);
//   fclose(fl3);
// }
