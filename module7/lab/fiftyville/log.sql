-- Keep a log of any SQL queries you execute as you solve the mystery.
SELECT * FROM crime_scene_reports
WHERE street = "Chamberlin Street" AND description LIKE "%cs50%";

SELECT * FROM interviews
WHERE day = 28 AND month = 7 AND transcript like "%courthouse%";

SELECT * FROM courthouse_security_logs
WHERE day = 28 AND hour = 10 AND activity = "exit" AND license_plate = "4328GD8";

SELECT * FROM atm_transactions
WHERE atm_location = "Fifer Street" AND transaction_type = "withdraw" AND month = 7 AND day = 28;

SELECT * FROM phone_calls
WHERE duration = 60 AND month = 7 AND day = 28;

SELECT * FROM people
WHERE phone_number = "(609) 555-5876" OR phone_number = "(389) 555-5198";

SELECT * FROM passengers
WHERE passport_number = "8496433585";

SELECT * FROM flights
WHERE origin_airport_id = 8 AND id = 11 OR id = 36 OR id = 48;

