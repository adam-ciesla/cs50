# Week 7 – SQL

SQL: Tables; Types; Statements; Constraints; Indexes; Keywords, Functions; Transactions. Race Conditions. SQL Injection Attacks.

## Files in this directory

- `fiftyville/` – [Fiftyville](https://cs50.harvard.edu/x/psets/7/fiftyville/). Solving a theft mystery by using SQL queries on the fiftyville.db database to identify the thief, their accomplice, and their escape city.

- `movies/` – [Movies](https://cs50.harvard.edu/x/psets/7/movies/). SQL queries on the [IMDb database](https://www.imdb.com/). The `movies.db` file is available to download on the problem's website (listed on the left), as it was too large to push on GitHub.

- `songs/` – [Songs](https://cs50.harvard.edu/x/psets/7/songs/). SQL queries on the top 100 streamed songs in 2018 on Spotify.

## How to run

The solutions in this set are **SQL** queries saved in `.sql` files. You will need the `sqlite3` command-line tool and the corresponding database file (`.db`) to execute them. 
If you're using the [CS50 IDE](cs50.dev), everything is preinstalled.

To run the queries against the database, use the command below, which pipes the content of the `.sql` file into the SQLite interpreter.

```bash
cat <filename.sql> | sqlite3 <database_name.db>