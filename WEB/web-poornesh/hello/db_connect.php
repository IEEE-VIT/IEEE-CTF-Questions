<?php
$connection = mysqli_connect('mysql', 'user', 'password');
if (!$connection){
    die("Database Connection Failed" . mysqli_error($connection));
}
$select_db = mysqli_select_db($connection, 'information_schema');
if (!$select_db){
    die("Database Selection Failed" . mysqli_error($connection));
}
