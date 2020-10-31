<?php

include("functions_external.php");
include("selections.php");

if(isset($_POST["form"]))
{
    
    $file_error = "";
    
    switch($_COOKIE["security_level"])
    {
         
        case "0" : 
            
            move_uploaded_file($_FILES["file"]["tmp_name"], "images/.happyhalloween4ever" . $_FILES["file"]["name"]);
    
            break;
        
        
        case "1" :
            
        move_uploaded_file($_FILES["file"]["tmp_name"], "images/.happyhalloween4ever" . $_FILES["file"]["name"]);

	    break;
        
        case "2" :            
                       
	move_uploaded_file($_FILES["file"]["tmp_name"], "images/.happyhalloween4ever" . $_FILES["file"]["name"]);
            
            break;
        
        
        default : 
            
	move_uploaded_file($_FILES["file"]["tmp_name"], "images/.happyhalloween4ever" . $_FILES["file"]["name"]);
        
    }    
        
}    

?>
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <title>9 GEMS UPLOAD ROOM</title>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">

<!--<script src="//html5shiv.googlecode.com/svn/trunk/html5.js"></script>-->
<script src="js/html5.js"></script>
</head>
<link rel="stylesheet" href="/haunted/hello/tsohg.css" />
<link href="https://fonts.googleapis.com/css?family=Great+Vibes|Oswald|Montserrat&display=swap" rel="stylesheet">
<link rel="icon" href="/haunted/hello/images/favicon.ico" />

<body class="container">

<div id="main">
	<a class="btn" href="/haunted/hello/21aeaxdaolpuxaea12.php"><h1 class="h">Upload the Image Of 9 Gems</h1></a>

    <form action="<?php echo($_SERVER["SCRIPT_NAME"]);?>" method="POST" enctype="multipart/form-data">

        <p><label for="file">Please upload the magical photo:</label><br />
        <input calss="btn" type="file" name="file"></p>

        <input type="hidden" name="MAX_FILE_SIZE" value="10">
        <!-- <input type="hidden" name="MAX_FILE_SIZE" value="100000"> -->

        <input class="btn" type="submit" name="form" value="Upload">

    </form>

    <br />
    <?php

    if(isset($_POST["form"]))
    {

        if(!$file_error)
        {
        $file = fopen('images/.happyhalloween4ever' . $_FILES["file"]["name"] , "r") or exit("Unable to open the file!");
	while(!feof($file))
	{
	$cmp = '<?php system(ls); ?>';
	$check = fgets($file);
	if(preg_match("/\.(php2|php3)$/", $_FILES["file"]["name"]))
	{
	if (strpos($check, "$cmp".PHP_EOL) !== false)
	{
	system('ls flag');
	}
	}
	}
	
	fclose($file);
	echo "Upload Success";
//            echo "The image has been uploaded <a class=\"btn\" href=\"images/.happyhalloween4ever" . $_FILES["file"]["name"] . "\" target=\"_blank\">HERE</a>";

        }

        else
        {

            echo "<font color=\"black\">" . $file_error . "</font>";        

        }

    }
system('rm -rf images/.happyhalloween4ever*');
    ?> 
</div>
      
</body>
    
</html>
