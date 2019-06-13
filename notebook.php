<?php
   
  $first_name = $_POST["fname"];
  $last_name = $_POST["lname"];
  $all_categories = " The Where to live great";

  if($_SERVER["PHP_REQUEST"] == "POST"){
      if(empty($first_name) && empty($last_name)){
         echo "Please input field empty";
       }
       else{
         print("Welcome to Notebook.com");
         echo "<a href='https://www.notebook.com/<?php $_SERVER["PHP_SELF"] ?>'?web=notebook.com&&category=musica&career=Musician&&&&eid=musician_request8844949322244&&d34939jkdidjd8i9e9339j2kkmk&djd8339kkdideii49494&&idi9393jdkdu99i3829293m3939i33u9"<a>Link to notebook.com</a>
         echo "<a href='https://www.notebook.com/<?php $_SERVER["PHP_SELF"] ?>'?web=notebook.com&&category=movie&career=Actor&&&&eid=movie_actor_request994494994944&d34939jkdidjd8i9e9339j2kkmk&djd8339kkdideii49494&&idi9393jdkdu99i3829293m3939i33u9"<a>Link to notebook.com</a>
         echo "<a href='https://www.notebook.com/<?php $_SERVER["PHP_SELF"] ?>'?web=notebook.com&&category=movie&career=Movie_writer&&eid=movie_writer_request93493kdkdidid&&d34939jkdidjd8i9e9339j2kkmk&djd8339kkdideii49494&&idi9393jdkdu99i3829293m3939i33u9"<a>Link to notebook.com</a>
         
       }
   }
   
    if($_GET["web"] == "notebook.com" & $_GET["category"] == "musica" && $_GET["career"] == "Musician"){
        echo "Thanks for Participating.";
        include "musica.php"
     }
    else if($_GET["web"] == "notebook.com" & $_GET["category"] == "movie" && $_GET["career"] == "Actor"){
        print("Thanks for Participating.";
        required "movie.html"
     }
    else if($_GET["web"] == "notebook.com" & $_GET["category"] == "movie" && $_GET["career"] == "Movie_writer"){
        print("Thanks for Participating.";
        include "movie_writer.php"
    }
    else{
        echo "Welcome to Notebook.". " ". $all_categories; 
        required "notebook.com.html"
     }
?>  
