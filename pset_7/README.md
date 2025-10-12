# Week 7 – SQL

SQL: Tables; Types; Statements; Constraints; Indexes; Keywords, Functions; Transactions. Race Conditions. SQL Injection Attacks.

## Files in this directory

- `fiftyville/` – [Fiftyville](https://cs50.harvard.edu/x/psets/7/fiftyville/).
- `movies/` – [Movies](https://cs50.harvard.edu/x/psets/7/movies/). TODO: channel movies.db in some other way?
- `songs/` – [Songs](https://cs50.harvard.edu/x/psets/7/songs/).

## How to run

The solutions in this set are **SQL** queries saved in `.sql` files. You will need the `sqlite3` command-line tool and the corresponding database file (`.db`) to execute them. 
If you're using the [CS50 IDE](cs50.dev), everything is preinstalled.

To run the queries against the database, use the command below, which pipes the content of the `.sql` file into the SQLite interpreter.

```bash
cat <filename.sql> | sqlite3 <database_name.db>