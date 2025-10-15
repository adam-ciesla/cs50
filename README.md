# CS50x: Introduction to Computer Science

This repository contains my personal solutions to Harvard University's [CS50: Introduction to Computer Science](https://cs50.harvard.edu/x) 2025 problem sets and projects. It is intended as a record of my progress throughout the course and as a portfolio of the skills I developed while learning computer science fundamentals.

**Note**: Please do not copy these solutions for your own submissions. They are shared for reference purposes only.

---

## Problem Sets

### Week 0 – Scratch 🐱

- **[Starting from Scratch](https://cs50.harvard.edu/x/psets/0/scratch/)** – A simple **"catch the apple"** game created in Scratch, inspired by the classic Polish cartoon ["Porwanie Baltazara Gąbki"](https://en.wikipedia.org/wiki/The_Abduction_of_Balthazar_Sponge_(TV_series)).
  - File: [`project.sb3`](pset_0/project.sb3)

### Week 1 – C 🍄

- **[Cash](https://cs50.harvard.edu/x/psets/1/cash/)** – Implements a [greedy algorithm](https://en.wikipedia.org/wiki/Greedy_algorithm) to calculate the minimum number of coins for change.
  - File: [`cash/cash.c`](pset_1/cash/cash.c)

- **[Credit](https://cs50.harvard.edu/x/psets/1/credit/)** – Validates credit card numbers using the [Luhn algorithm](https://en.wikipedia.org/wiki/Luhn_algorithm).
  - File: [`credit/credit.c`](pset_1/credit/credit.c)

- **[Mario (less)](https://cs50.harvard.edu/x/psets/1/mario/less/)** – Prints a right-aligned pyramid of hashes (`#`).
  - File: [`mario-less/mario.c`](pset_1/mario-less/mario.c)

- **[Mario (more)](https://cs50.harvard.edu/x/psets/1/mario/more/)** – Prints two adjacent pyramids of hashes (`#`).
  - File: [`mario-more/mario.c`](pset_1/mario-more/mario.c)

- **[Hello, It's Me](https://cs50.harvard.edu/x/psets/1/me/)** – A "hello, world" program that prompts the user for their name.
  - File: [`me/hello.c`](pset_1/me/hello.c)

### Week 2 – Arrays 🔡

- **[Caesar](https://cs50.harvard.edu/x/psets/2/caesar/)** – Implements the [Caesar cipher](https://en.wikipedia.org/wiki/Caesar_cipher) for text encryption.
  - File: [`caesar/caesar.c`](pset_2/caesar/caesar.c)

- **[Readability](https://cs50.harvard.edu/x/psets/2/readability/)** – Estimates the reading level of a text using the [Coleman-Liau index](https://en.wikipedia.org/wiki/Coleman%E2%80%93Liau_index).
  - File: [`readability/readability.c`](pset_2/readability/readability.c)

- **[Scrabble](https://cs50.harvard.edu/x/psets/2/scrabble/)** – A simple game of [Scrabble](https://en.wikipedia.org/wiki/Scrabble) that determines the winning word between two players.
  - File: [`scrabble/scrabble.c`](pset_2/scrabble/scrabble.c)

### Week 3 – Algorithms 🔎

- **[Plurality](https://cs50.harvard.edu/x/psets/3/plurality/)** – Simulates a [plurality election](https://en.wikipedia.org/wiki/Plurality_voting).
  - File: [`plurality/plurality.c`](pset_3/plurality/plurality.c)

- **[Runoff](https://cs50.harvard.edu/x/psets/3/runoff/)** – Simulates a ranked-choice [runoff election](https://en.wikipedia.org/wiki/Instant-runoff_voting).
  - File: [`runoff/runoff.c`](pset_3/runoff/runoff.c)

- **[Sort](https://cs50.harvard.edu/x/psets/3/sort/)** – A problem about identifying sorting algorithms based on their performance characteristics.
  - Directory: [`sort/`](pset_3/sort)

### Week 4 – Memory 🧠

- **[Filter (less)](https://cs50.harvard.edu/x/psets/4/filter/less/)** – A command-line program applying filters (grayscale, sepia, reflect, blur) to bitmap images.
  - Directory: [`filter-less/`](pset_4/filter-less/)

- **[Filter (more)](https://cs50.harvard.edu/x/psets/4/filter/more/)** – The "less" version with an added edge detection filter using the [Sobel operator](https://en.wikipedia.org/wiki/Sobel_operator).
  - Directory: [`filter-more/`](pset_4/filter-more/)

- **[Recover](https://cs50.harvard.edu/x/psets/4/recover/)** – A program that recovers JPEG images from a forensic image of a memory card.
  - File: [`recover/recover.c`](pset_4/recover/recover.c)

- **[Volume](https://cs50.harvard.edu/x/psets/4/volume/)** – A program that modifies the volume of an audio WAV file.
  - File: [`volume/volume.c`](pset_4/volume/volume.c)

### Week 5 – Data Structures 📚

... 

### Week 6 – Python 🐍

- **[DNA](https://cs50.harvard.edu/x/psets/6/dna/)** – Identifies a person based on a DNA sequence by matching Short Tandem Repeats (STRs) against a database.
  - File: [`dna/dna.py`](pset_6/dna/dna.py)

- **Sentimental series** – Python implementations of earlier problems from the course:
  - **[Cash](https://cs50.harvard.edu/x/psets/6/cash/)**: [`sentimental-cash/cash.py`](pset_6/sentimental-cash/cash.py)

  - **[Credit](https://cs50.harvard.edu/x/psets/6/credit/)**: [`sentimental-credit/credit.py`](pset_6/sentimental-credit/credit.py)

  - **[Hello](https://cs50.harvard.edu/x/psets/6/hello/)**: [`sentimental-hello/hello.py`](pset_6/sentimental-hello/hello.py)

  - **[Mario (less)](https://cs50.harvard.edu/x/psets/6/mario/less/)**: [`sentimental-mario-less/mario.py`](pset_6/sentimental-mario-less/mario.py)

  - **[Mario (more)](https://cs50.harvard.edu/x/psets/6/mario/more/)**: [`sentimental-mario-more/mario.py`](pset_6/sentimental-mario-more/mario.py)

  - **[Readability](https://cs50.harvard.edu/x/psets/6/readability/)**: [`sentimental-readability/readability.py`](pset_6/sentimental-readability/readability.py)

### Week 7 – SQL 🔎

- **[Fiftyville](https://cs50.harvard.edu/x/psets/7/fiftyville/)** – A detective project to solve a theft mystery by querying the `fiftyville.db` database to identify the thief, their accomplice, and their escape city.
  - Directory: [`fiftyville/`](pset_7/fiftyville/)

- **[Movies](https://cs50.harvard.edu/x/psets/7/movies/)** – A set of SQL queries on a database of movies from [IMDb](https://www.imdb.com/).
  - Directory: [`movies/`](pset_7/movies/)

- **[Songs](https://cs50.harvard.edu/x/psets/7/songs/)** – A set of SQL queries on a database of the top 100 streamed songs on Spotify in 2018.
  - Directory: [`songs/`](pset_7/songs/)

### Week 8 – HTML, CSS, JavaScript 🌐

- **[Homepage](https://cs50.harvard.edu/x/psets/8/homepage/)** – ...
  - Directory: [`homepage/`](pset_8/homepage/)

- **[Trivia](https://cs50.harvard.edu/x/psets/8/trivia/)** – ...
  - Directory: [`trivia/`](pset_8/trivia/)

### Week 9 – Flask 🌐

... 

### Week 10 – The End

---

## Progress

- [x] Week 0 – Scratch
- [x] Week 1 – C
- [x] Week 2 – Arrays
- [x] Week 3 – Algorithms
- [x] Week 4 – Memory
- [ ] Week 5 – Data Structures
- [x] Week 6 – Python
- [x] Week 7 – SQL
- [ ] Week 8 – HTML, CSS, JavaScript
- [ ] Week 9 – Flask
- [ ] Week 10 – The End (Final Project)

---

## License

Copyright (c) 2025 Adam Cieśla

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.