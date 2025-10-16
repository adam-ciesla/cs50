-- Keep a log of any SQL queries you execute as you solve the mystery.

-- We know that the theft took place on July 28th, 2024 on Humphrey Street:

SELECT description
FROM crime_scene_reports
WHERE year = 2024
AND month = 7 AND day = 28
AND street = "Humphrey Street";

SELECT name, transcript
FROM interviews
WHERE year = 2024
AND month = 8 AND day = 28
AND transcript LIKE "%bakery%";

SELECT b.license_plate, b.activity, p.name
FROM people AS p
JOIN bakery_security_logs AS b
    ON p.license_plate = b.license_plate
WHERE b.year = 2024 AND b.month = 7
AND b.day = 28 AND b.hour = 10
AND b.minute >= 15 AND b.minute <= 25;

SELECT p.name, a.transaction_type
FROM people AS p
JOIN bank_accounts AS b
    ON p.id = b.person_id
JOIN atm_transactions AS a
    ON b.account_number = a.account_number
WHERE a.year = 2024
AND a.month = 7 AND a.day = 28
AND a.atm_location = "Leggett Street"
AND a.transaction_type = "withdraw";

SELECT p.name
FROM people AS p
JOIN phone_calls AS ph
    ON p.phone_number = ph.caller
WHERE year = 2024
AND month = 7 AND day = 28
AND duration < 60;

SELECT *
FROM flights
WHERE year = 2024
AND month = 7 AND day = 29
ORDER BY hour, minute
LIMIT 1;

SELECT city
FROM airports
WHERE id = 4;

SELECT f.destination_airport_id, p.name, p.phone_number, p.license_plate, p.id
FROM people AS p
JOIN passengers AS ps
    ON p.passport_number = ps.passport_number
JOIN flights AS f
    ON ps.flight_id = f.id
WHERE f.id = 36;

SELECT p.name
FROM atm_transactions as a
JOIN bank_accounts as ba
    ON a.account_number = ba.account_number
JOIN people as p
    ON ba.person_id = p.id
JOIN bakery_security_logs as bsl
    ON p.license_plate = bsl.license_plate
WHERE a.year = 2024
AND a.month = 7 AND a.day = 28
AND a.atm_location = "Leggett Street"
AND bsl.hour BETWEEN 9 AND 11
ORDER BY bsl.hour, bsl.minute;
