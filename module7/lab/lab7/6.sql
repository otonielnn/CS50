SELECT songs.name FROM songs
JOIN artists ON songs.artists_id = artists.id
WHERE artists.name = "Post Malone";
