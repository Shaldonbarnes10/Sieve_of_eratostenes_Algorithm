# Sieve of Eratosthenes
This project implements the **Sieve of Eratosthenes**, an efficient algorithm to find all prime numbers up to a given number `n`. The algorithm uses a boolean array to mark multiples of each prime as non-prime, resulting in a list of prime numbers.
---
## Features
- Input a number `n` and find all prime numbers up to `n`.
- Efficient implementation with a time complexity of \(O(n \log \log n)\).
- Handles large input values efficiently.
  
---
## How It Works
1. **Initialization**:  
   Create a boolean array (`primes[]`) of size \(n+1\) and initialize all elements to `true`.  
   Set `primes[0]` and `primes[1]` to `false` as 0 and 1 are not prime.

2. **Mark Non-Primes**:  
   Starting from \(p = 2\), mark all multiples of \(p\) (from \(p^2\) to \(n\)) as `false`.

3. **Output Primes**:  
   Print all indices of the array still marked as `true`.
---
