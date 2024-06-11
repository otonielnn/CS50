SELECT DISTINCT(name) FROM people
JOIN stars ON people.id = stars.person_id
JOIN movies ON movies.id = stars.movie_id
WHERE name != "Kevin Bacon" and movies.title IN (
    SELECT DISTINCT(movies.title) FROM people
    JOIN stars ON people.id = stars.person_id
    JOIN movies ON movies.id = stars.movie_id
    WHERE people.name = "Kevin Bacon" AND people.birth = 1958
);
