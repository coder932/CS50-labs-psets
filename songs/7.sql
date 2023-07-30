-- 7.sql
SELECT avg(energy) FROM songs WHERE artist_id = (SELECT id FROM artists WHERE name == "Drake");
