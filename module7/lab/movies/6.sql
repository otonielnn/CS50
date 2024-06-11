SELECT ROUND(AVG(rating)) FROM ratings INNER JOIN movies ON ratings.movie_id = movies.id;
