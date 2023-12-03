#include <bits/stdc++.h>
using namespace std;

int main()
{

  // ****
  // ****
  // ****
  // ****
  //  for(int i = 0; i<4;i++){
  //   for(int j = 0; j  <4; j++){
  //     cout << "*";
  //   }
  //   cout << endl;
  //  }

  // *
  // **
  // ***
  // ****
  // *****
  //  for(int i = 1; i<=5;i++){
  //   for(int j = 1; j  <=i; j++){
  //     cout << "*";
  //   }
  //   cout << endl;
  // }

  // 1
  // 1 2
  // 1 2 3
  // 1 2 3 4
  // 1 2 3 4 5
  //  for(int i = 1; i<=5;i++){
  //   for(int j = 1; j  <=i; j++){
  //     cout << j << " ";
  //   }
  //   cout << endl;
  // }

  // 1
  // 2 2
  // 3 3 3
  // 4 4 4 4
  // 5 5 5 5 5

  //  for(int i = 1; i<=5;i++){
  //   for(int j = 1; j  <=i; j++){
  //     cout << i << " ";
  //   }
  //   cout << endl;
  // }

  // * * * * *
  // * * * *
  // * * *
  // * *
  // *

  //  for(int i = 5; i>=1;i--){
  //   for(int j = 1; j<=i; j++){
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  // 1 2 3 4 5
  // 1 2 3 4
  // 1 2 3
  // 1 2
  // 1

  //  for(int i = 5; i>=1;i--){
  //   for(int j = 1; j<=i; j++){
  //     cout << j << " ";
  //   }
  //   cout << endl;
  // }

  //         *
  //       * * *
  //     * * * * *
  //   * * * * * * *
  // * * * * * * * * *

  //  for(int i = 1; i<=5;i++){
  //   for(int j = 5; j>i; j--){
  //     cout << "  ";
  //   }
  //   for(int k = 1; k<=i*2-1; k++){
  //     cout << "* ";
  //   }

  //   cout << endl;
  // }

  //   * * * * * * * * *
  //     * * * * * * *
  //       * * * * *
  //         * * *
  //           *

  //  for(int i = 5; i>=1;i--){
  //   for(int j = 5; j>=i; j--){
  //     cout << "  ";
  //   }
  //   for(int k = 1; k<i*2; k++){
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  //         *
  //       * * *
  //     * * * * *
  //   * * * * * * *
  // * * * * * * * * *
  // * * * * * * * * *
  //   * * * * * * *
  //     * * * * *
  //       * * *
  //         *

  //  for(int i = 1; i<=5;i++){
  //   for(int j = 5; j>i; j--){
  //     cout << "  ";
  //   }
  //   for(int k = 1; k<=i*2-1; k++){
  //     cout << "* ";
  //   }

  //   cout << endl;
  // }
  //  for(int i = 5; i>=1;i--){
  //   for(int j = 5; j>i; j--){
  //     cout << "  ";
  //   }
  //   for(int k = 1; k<i*2; k++){
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  // *
  // * *
  // * * *
  // * * * *
  // * * * * *
  // * * * *
  // * * *
  // * *
  // *

  //  for(int i = 1; i<=5;i++){
  //   for(int j = 1; j  <=i; j++){
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  //  for(int i = 4; i>=1;i--){
  //   for(int j = 1; j<=i; j++){
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  // 1
  // 0 1
  // 1 0 1
  // 0 1 0 1
  // 1 0 1 0 1

  // int start;
  //  for(int i = 1; i<=5;i++){
  //     if(i%2!=0) start = 1;
  //     else start = 0;
  //   for(int j = 1; j  <=i; j++){

  //     cout << start << " ";
  //     start= 1-start;
  //   }
  //   cout << endl;
  // }

  // 1                 1
  // 1 2             2 1
  // 1 2 3         3 2 1
  // 1 2 3 4     4 3 2 1
  // 1 2 3 4 5 5 4 3 2 1

  // for(int i = 0; i<5;i++){
  //   for(int j = 1; j  <=i+1; j++){
  //     cout << j << " ";
  //   }
  //     for(int j = i; j  <(5-1)*2-i; j++){
  //     cout << "  ";
  //   }
  //     for(int j = i+1; j  >0; j--){
  //     cout << j << " ";
  //   }
  //   cout << endl;
  // }

  // 1
  // 2 3
  // 4 5 6
  // 7 8 9 10
  // 11 12 13 14 15
  // int num = 1;
  // for (int i = 0; i < 5; i++)
  // {
  //   for (int j = 1; j <= i + 1; j++)
  //   {
  //     cout << num << " ";
  //     num++;
  //   }
  //   cout << endl;
  // }


// A 
// A B 
// A B C 
// A B C D 
// A B C D E 

  // for (char i = 'A'; i <= 'E'; i++)
  // {
  //   for (char j = 'A'; j <= i; j++)
  //   {
  //     cout << j << " ";
  //   }
  //   cout << endl;
  // }


// A B C D E 
// A B C D 
// A B C 
// A B 
// A 
  // for (int i = 5; i >= 1; i--)
  // {
  //   for (char j = 'A'; j < 'A' +i; j++)
  //   {
  //     cout << j << " ";
  //   }
  //   cout << endl;
  // }

   // for (int i = 5; i >= 1; i--)
  // {
  //   for (char j = 'A'; j < 'A' +i; j++)
  //   {
  //     cout << j << " ";
  //   }
  //   cout << endl;
  // }


// A 
// B B 
// C C C 
// D D D D 
// E E E E E 
//     for (char i = 'A'; i <= 'E'; i++)
//   {
//     for (char j = 'A'; j <= i; j++)
//     {
//       cout << i << " ";
//     }
//     cout << endl;
//   }


//         A 
//       A B A 
//     A B C B A 
//   A B C D C B A 
// A B C D E D C B A 
  //   for (char i = 1; i <= 5; i++)
  // {
  //   for (char j = 5; j > i; j--)
  //   {
  //     cout << "  ";
  //   }
  //   for (char j = 'A'; j < 'A'+ i; j++)
  //   {
  //     cout << j << " ";
  //   }

  //    for (char j = 'A'+i-2; j >='A'; j--)
  //   {
  //     cout << j << " ";
  //   }
  //   cout << endl;
  // }

// E 
// D E 
// C D E 
// B C D E 
// A B C D E 

// for(char i = 5; i >= 1;i--){
//   for(char j = 'A' + i-1; j <= 'E'; j++){
//     cout << j << " ";
//   }
//   cout << endl;
// }


// * * * * * * * * * * 
// * * * *     * * * * 
// * * *         * * * 
// * *             * * 
// *                 * 
// *                 * 
// * *             * * 
// * * *         * * * 
// * * * *     * * * * 
// * * * * * * * * * * 

// int n = 8;
// int intS = 0;
// for(int i = n; i >= 1;i--){
//   for(int j = i ; j >= 1; j--){
//     cout << "* ";
//   }
//   for(int j = 0; j < intS; j++){
//     cout << "  ";
//   }

//   for(int j = i ; j >= 1; j--){
//     cout << "* ";
//   }
//   cout << endl;
//     intS = intS + 2;
// }
// intS =  n*2-2;
// for(int i = 1; i <= n;i++){
//   for(int j = 1 ; j <= i; j++){
//     cout << "* ";
//   }
//   for(int j = intS; j > 0; j--){
//     cout << "  ";
//   }
//   for(int j = 1 ; j <= i; j++){
//     cout << "* ";
//   }
//   cout << endl;
//     intS = intS - 2;
// }

// space = n*2-2  space -= 2
//

// *                 * 
// * *             * * 
// * * *         * * * 
// * * * *     * * * * 
// * * * * * * * * * * 
// * * * *     * * * * 
// * * *         * * * 
// * *             * * 
// *                 * 
// int n = 5;
// int intS = 0;
// intS =  n*2-2;
// for(int i = 1; i <= n;i++){
//   for(int j = 1 ; j <= i; j++){
//     cout << "* ";
//   }
//   for(int j = intS; j > 0; j--){
//     cout << "  ";
//   }
//   for(int j = 1 ; j <= i; j++){
//     cout << "* ";
//   }
//   cout << endl;
//     intS = intS - 2;
// }
// intS = 2;
// for(int i = n-1; i >= 1;i--){
//   for(int j = i ; j >= 1; j--){
//     cout << "* ";
//   }
//   for(int j = 0; j < intS; j++){
//     cout << "  ";
//   }

//   for(int j = i ; j >= 1; j--){
//     cout << "* ";
//   }
//   cout << endl;
//     intS = intS + 2;
// }


// * * * * * * * * * * 
// *                 * 
// *                 * 
// *                 * 
// *                 * 
// *                 * 
// *                 * 
// *                 * 
// *                 * 
// * * * * * * * * * * 
// int n = 10;

// for(int i = 1; i <= n;i++){
//   for(int j = 1 ; j<= n; j++){
//     if( i == 1 || i == n || j == 1 || j == n) cout << "* ";
//     else cout << "  ";
//   }
//   cout << endl;
// }


// 4 4 4 4 4 4 4 
// 4 3 3 3 3 3 4 
// 4 3 2 2 2 3 4 
// 4 3 2 1 2 3 4 
// 4 3 2 2 2 3 4 
// 4 3 3 3 3 3 4 
// 4 4 4 4 4 4 4 
// int n = 4;

// for(int i = 0; i < n*2-1;i++){
//   for(int j = 0; j< n*2-1; j++){
//     int top = i;
//     int left = j; 
//     int bottom = (n*2-2) - i;
//     int right = (n*2-2) - j;  
//     cout << n - (min(min(top,bottom),min(left,right))) << " ";
//   }
//   cout << endl;
// }
}