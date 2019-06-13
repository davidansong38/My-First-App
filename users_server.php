<?php
  
  $server_name_localhost = "127.0.0.1" | "http://localhost";
  $user_name = "root";
  $user_password = "unknown";
  $database_name = "unknown";
  $port_listening = 5609;

  $connect = new mysql_i($server_name_localhost, $user_name, $user_password, $database_name, " ", $port_listening);
  
  if($connect->connect_error == True){
    echo "System connected successfully.";
    }
   else{
    print_r("System was unable to connect due to an unknown network problem");
   }
  
  $sql_db = "Create database USERS_DB";
  if($connect->query($sql_db) == True){
    print("Database created successfully");
   }
  else{
    echo "Unable to create Database.";
   }
   
  $username = "username";
  $user_id = "user_id";
  $user_pswd = "user_pswd";
  $user_location = "user_location";
  
  $sql_db = "Create table Users(
                                $username vchar(255) not null unique,
                                $user_id BIGINT not null unique AUTO_INCREMENT,
                                $user_pswd vchar(255) primary key,
                                $user_location string not null unique,
                               );";
 if($connect->query($sql_db) == True){
    print("Table created successfully");
  }  
 else{
    echo "Unable to create Table.";
  }


 $sql_db = "Insert into Users($username, $user_pswd, $user_location)values('?', '?', '?')";
 
 if($connect->query($sql_db) == True){
    print("User_Data inserted successfully");
  }  
 else{
    echo "Unable to create insert User_Data.";
  }
  
  $sql_db = "Alter table Users Add user_country set default 'Ghana'";
  

  $sql_db = "Update table Users set $username = 'zindex', set $user_pswd = '*************', set $user_location = 'GA-221D993K Ghana-Lapaz';

  if($connect->query($sql_db) == True){
    print("Table Updated successfully");
  }  
   else{
    echo "Unable to Update Table.";
  }

 $sql_db = "Delete from Users where $username = 'zindex' | $user_pswd and $user_location = 'GA-221D993K Ghana-Lapaz';


  if($connect->query($sql_db) == True){
    print("User_Data deleted successfully");
  }  
   else{
    echo "Unable to delete User_Data from Table successfully.";
  }
?>
