SELECT w.id,w.age,MIN(w.coins_needed) AS coins_needed ,w.power ,w.code FROM (SELECT w.id,wp.age,w.coins_needed,w.power,w.code ,CONCAT(w.power,'-',w.code) AS idx ,is_evil FROM Wands_Property wp JOIN Wands w ON w.code =wp.code AND wp.is_evil=0  ORDER BY w.power DESC,wp.age DESC) w    GROUP BY idx  ORDER BY POWER DESC,w.age DESC  ;
 
SELECT w.id,w.age,(w.coins_needed) AS coins_needed ,w.power ,w.code FROM (SELECT w.id,wp.age,w.coins_needed,w.power,w.code ,CONCAT(w.power,'-',w.code) AS idx ,is_evil FROM Wands_Property wp JOIN Wands w ON w.code =wp.code AND wp.is_evil=0  ORDER BY w.power DESC,wp.age DESC) w    -- GROUP BY idx  
ORDER BY POWER DESC,w.age DESC,coins_needed ASC  ;

 SELECT w.id,w.age, (w.coins_needed) AS coins_needed ,w.power,is_evil ,CODE ,idx FROM (SELECT w.id,wp.age,w.coins_needed,w.power,w.code ,CONCAT(w.power,'-',w.code) AS idx ,is_evil FROM Wands_Property wp JOIN Wands w ON w.code =wp.code AND wp.is_evil=0  ORDER BY w.code ASC,w.power ASC,w.coins_needed ) w     GROUP BY idx  
 ORDER BY w.power DESC,CODE ASC,coins_needed ASC