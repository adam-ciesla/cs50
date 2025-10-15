# Week 7 – SQL

SQL: Tables; Types; Statements; Constraints; Indexes; Keywords, Functions; Transactions. Race Conditions. SQL Injection Attacks.

## Files in this directory

- **[Fiftyville](https://cs50.harvard.edu/x/psets/7/fiftyville/)** – A detective project to solve a theft mystery by querying the `fiftyville.db` database to identify the thief, their accomplice, and their escape city.
  - Directory: [`fiftyville/`](pset_7/fiftyville/)

- **[Movies](https://cs50.harvard.edu/x/psets/7/movies/)** – A set of SQL queries on a database of movies from [IMDb](https://www.imdb.com/).
  - Directory: [`movies/`](pset_7/movies/)

- **[Songs](https://cs50.harvard.edu/x/psets/7/songs/)** – A set of SQL queries on a database of the top 100 streamed songs on Spotify in 2018.
  - Directory: [`songs/`](pset_7/songs/)

## How to run

The solutions in this set are **SQL** queries saved in `.sql` files. You will need the `sqlite3` command-line tool and the corresponding database file (`.db`) to execute them. 
If you're using the [CS50 IDE](cs50.dev), everything is preinstalled.

To run the queries against the database, use the command below, which pipes the content of the `.sql` file into the SQLite interpreter.

```bash
cat <filename.sql> | sqlite3 <database_name.db>