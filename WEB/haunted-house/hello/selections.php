<?php

/*include("admin/settings.php");

$bugs = file("bugs.txt");

if(isset($_POST["form_bug"]) && isset($_POST["bug"]))
{
        
    $key = $_POST["bug"]; 
    $bug = explode(",", trim($bugs[$key]));

    // Debugging
    // print_r($bug);

    header("Location: " . $bug[1]);

    exit;
   
}*/
 
if(isset($_POST["form_security_level"]) && isset($_POST["security_level"]))    
{
    
    $security_level_cookie = $_POST["security_level"];
    
    switch($security_level_cookie)
    {

        case "0" :

            $security_level_cookie = "0";
            break;

        case "1" :

            $security_level_cookie = "1";
            break;

        case "2" :

            $security_level_cookie = "2";
            break;

        default : 

            $security_level_cookie = "0";
            break;

    }

    if($evil_bee == 1)
    {

        setcookie("security_level", "666", time()+60*60*24*365, "/", "", false, false);

    }
    
    else        
    {
      
        setcookie("security_level", $security_level_cookie, time()+60*60*24*365, "/", "", false, false);
        
    }
    
    header("Location: " . $_SERVER["SCRIPT_NAME"]);
    
    exit;

}

if(isset($_COOKIE["security_level"]))
{

    switch($_COOKIE["security_level"])
    {
        
        case "0" :
            
            $security_level = "medium";
            break;
        
        case "1" :
            
            $security_level = "medium";
            break;
        
        case "2" :
            
            $security_level = "medium";
            break;
        
        case "666" :
            
            $security_level = "medium";
            break;

        default : 

            $security_level = "medium";
            break;

    }
    
}

else
{
     
    $security_level = "medium";
    
} 

?>