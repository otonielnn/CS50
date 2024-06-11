-- Keep a log of any SQL queries you execute as you solve the mystery.
SELECT * FROM crime_scene_reports
WHERE street = "Chamberlin Street" AND description LIKE "%cs50%";

SELECT * FROM interviews
WHERE day = 28 AND month = 7 AND transcript like "%courthouse%";
-- Witness RUTH
SELECT * FROM courthouse_security_logs
WHERE day = 28 AND hour = 10 AND activity = "exit" AND minute BETWEEN 15 AND 25;
-- Witness Eugene
SELECT * FROM atm_transactions
WHERE atm_location = "Fifer Street" AND transaction_type = "withdraw" AND month = 7 AND day = 28;

SELECT a.*, p.name
FROM atm_transactions a
JOIN bank_accounts b ON a.account_number = b.account_number
JOIN people p ON b.person_id = p.id
WHERE a.atm_location = "FiFer Street" AND a.year = 2020 AND a.month = 7 AND a.day = 28 AND a.transaction_type = "withdraw";

-- Witness Raymond
SELECT * FROM phone_calls
WHERE duration < 60 AND month = 7 AND day = 28 AND year = 2020;

-- pegando nome atraves dos números
SELECT p.name, pc.caller, pc.receiver, pc.year, pc.month, pc.day, pc.duration FROM phone_calls pc
JOIN people p ON pc.caller = p.phone_number
WHERE pc.year = 2020 AND pc.month = 7 and pc.day = 28 and pc.duration < 60;

-- descobrindo id do aeroporto de fiftyville
SELECT * FROM airports
WHERE city = "Fiftyville";

SELECT * FROM flights
WHERE origin_airport_id = 8 AND day = 28 AND month = 7;

SELECT p.name
FROM courthouse_security_logs csl
JOIN people p ON p.license_plate = csl.license_plate
JOIN bank_accounts ba ON ba.person_id = p.id
JOIN atm_transactions at ON at.account_number = ba.account_number
JOIN phone_calls pc ON pc.caller = p.phone_number
WHERE csl.year = 2020 AND csl.month = 7 AND csl.day = 28 AND csl.hour = 10 AND csl.minute BETWEEN 15 AND 25
AND at.atm_location = "Fifer Street" AND at.year = 2020 AND at.month = 7 AND at.day = 28 AND at.transaction_type = "withdraw"
AND pc.year = 2020 AND pc.month = 7 AND pc.day = 28 AND pc.duration < 60;

SELECT p.name FROM people p
JOIN passengers ps ON p.passport_number = ps.passport_number
WHERE ps.flight_id = 6;
