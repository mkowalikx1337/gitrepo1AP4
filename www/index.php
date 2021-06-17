<!DOCTYPE html>
<html lang="pl">

<head>
    <meta charset="utf-8" />
    <title>Podstawy skryptów PHP</title>
    <link href='http://fonts.googleapis.com/css?family=Lato&subset=latin,latin-ext' rel='stylesheet' type='text/css'>
    <style>
            body{
                    font-family: Lato, sans-serif;
                    font-size: 16px;
                }
            h1 {
                    font-size: 2rem;
                    text-align: center;
                }
            p {
                    font-size: 1.2rem;
                }
    </style>
</head>

<body>

    <!---<h1>Podstawy skryptów PHP</h1>
    <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed doeiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enimad minim veniam, quis nostrud exercitation ullamco laboris nisi utaliquip ex ea commodo consequat. Duis aute irure dolor inreprehenderit in voluptate velit esse cillum dolore eu fugiat nullapariatur. Excepteur sint occaecat cupidatat non proident, sunt inculpa qui officia deserunt mollit anim id est laborum. Lorem ipsum dolor sit amet, consectetur adipisicing elit, s</p>    
    --->
    <?php
    
        $a = 10;
        $b = 30;
        
        echo "<h1>Podstawy skryptów PHP</h1>";
        echo "<p>Treść dokumentu</p>";
        echo "<p>Suma a i b: ". ($a+$b)."</p>";
    ?>
</body>

</html>
