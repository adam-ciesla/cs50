SELECT AVG(ratings.rating) as average_rating FROM movies, ratings
WHERE movies.id = ratings.movie_id AND movies.year = 2012;
