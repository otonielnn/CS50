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
-- Witness Raymond
SELECT * FROM phone_calls
WHERE duration < 60 AND month = 7 AND day = 28;

