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
