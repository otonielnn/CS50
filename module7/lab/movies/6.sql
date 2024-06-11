SELECT ROUND(AVG(rating), 2) FROM ratings INNER JOIN movies ON ratings.movie_id = movies.id WHERE year = 2012;
