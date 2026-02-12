# Sudoku Solver

A C++ program that solves Sudoku puzzles. This project is archivally preserved from code written approximately 7 years ago.

## Authors
<<<<<<<<< Temporary merge branch 1
=========

>>>>>>>>> Temporary merge branch 2
- Amin Latifi (810798159)
- Shervin Mahmoudi (810798161)
- Morteza Fattah Pour (810798151)

## Usage

1. **Input File**: The program reads the puzzle from a file named `sudoku.txt` located in the same directory.
2. **Format**: Use numbers `1-9` for known cells and `-` (dash) for empty cells. Separate numbers with spaces.
<<<<<<<<< Temporary merge branch 1
   
   Example `sudoku.txt`:
=========

   Example `sudoku.txt`:

>>>>>>>>> Temporary merge branch 2
   ```text
   9 4 - - - 8 - - -
   - - - - 7 - 6 9 -
   - - 7 - - 4 - - -
   2 - 4 - 5 9 - 7 6
   - 6 - - 4 - - 5 -
   5 8 - 7 1 - 4 - 3
   - - - 6 - - 3 - -
   - 9 5 - 3 - - - -
   - - - 4 - - - 1 7
   ```

3. **Output**: The program will print the solved grid to the console.

   Example Output:
<<<<<<<<< Temporary merge branch 1
   ```text
   +=======+=======+=======+
=========

   ```text
    +=======+=======+=======+
>>>>>>>>> Temporary merge branch 2
    | 9 4 6 | 5 2 8 | 7 3 1 |
    | 8 5 2 | 3 7 1 | 6 9 4 |
    | 3 1 7 | 9 6 4 | 5 8 2 |
    +-------+-------+-------+
    | 2 3 4 | 8 5 9 | 1 7 6 |
    | 7 6 1 | 2 4 3 | 8 5 9 |
    | 5 8 9 | 7 1 6 | 4 2 3 |
    +-------+-------+-------+
    | 1 7 8 | 6 9 2 | 3 4 5 |
    | 4 9 5 | 1 3 7 | 2 6 8 |
    | 6 2 3 | 4 8 5 | 9 1 7 |
    +=======+=======+=======+
   ```
