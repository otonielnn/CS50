-- Keep a log of any SQL queries you execute as you solve the mystery.
SELECT * FROM crime_scene_reports
WHERE street = "Chamberlin Street";

SELECT * FROM courthouse_security_logs
WHERE day = 28 and hour = 10;

SELECT * FROM people
WHERE license_plate = "5P2BI95";

SELECT * FROM phone_calls
WHERE caller = "(725) 555-4692" OR receiver = "(725) 555-4692";

SELECT * FROM interviews
WHERE day = 28 AND month = 7;

SELECT * FROM passengers
WHERE passport_number = "2963008352";

SELECT * FROM flights
WHERE day = 28 and month = 7;
