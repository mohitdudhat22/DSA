#include <bits/stdc++.h>
using namespace std;

int count_digit(int digit)
{
  int total_digit = 0;
  int original_digit = digit;
  while (digit > 0)
  {
    int last_digit = digit % 10;

    if (last_digit != 0 && original_digit % last_digit == 0)
    {
      total_digit++;
    }
    digit /= 10;
  }
  return total_digit;
}

int reverse_bits(signed int digit)
{
  int sign = 1;
  if (digit < 0)
  {
    digit = abs(digit);
    sign = -1;
  }
  int last_digit;
  int reverse_digit = 0;
  while (digit > 0)
  {
    last_digit = digit % 10;
    if (reverse_digit > INT_MAX / 10)
      return 0;
    reverse_digit = reverse_digit * 10 + last_digit;
    digit /= 10;
  }
  return reverse_digit * sign;
}

bool palindrome_number(int digit)
{
  int reverse_digit = 0, last_digit, original_digit;
  original_digit = digit;
  while (digit > 0)
  {
    last_digit = digit % 10;
    reverse_digit = reverse_digit * 10 + last_digit;
    digit /= 10;
  }
  if (reverse_digit == original_digit)
    return true;
  return false;
}

bool armstrong_number(int digit)
{
  int size = (int)(log10(digit)) + 1;
  int original_digit = digit, total = 0;
  while (digit > 0)
  {
    int last_digit = digit % 10;
    total += pow(last_digit, size);
    digit /= 10;
  }
  return original_digit == total;
}

int sum_of_divisors(int digit)
{
  int sum = 0,num=1;
  while(num<=digit){
    sum += (digit/num)*num;
    num++;
  }
  return sum;
}

std::string check_prime(int digit)
{
  int root = sqrt(digit);
  int num = 2;
  if (digit == 1)
    return "NO";
  while (num <= root)
  {
    if (digit % num == 0)
      return "NO";
    num++;
  }
  return "YES";
}

int gcd (int a, int b){
  // while (a> 0 && b >0)
  // {
  //   if(a > b)a = a % b;
  //   else b = b % a;
  //   if(a == 0)return b;
  //   return a;
  // }

  if(b==0)return a;
  return gcd (b , a%b);
  
}

int main()
{
  int n = 5;
  //  int output = count_digit(n);
  //  int output = reverse_bits(n);
  //  bool output = palindrome_number(n);
  //  bool output = armstrong_number(n);
  //  int output = sum_of_divisors(n);
  // int output = sum_of_divisors(n);
  int output = gcd(20 , 15);
  cout << output;
}