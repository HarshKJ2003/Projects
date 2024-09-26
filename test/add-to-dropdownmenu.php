<?php
    session_start( );
?>

<html>

<head>
<title>Add to Dropdownmenu Example</title>
<link rel="stylesheet" type="text/css" href="../styles.css" />
</head>

<body>

<h2>Add to Dropdownmenu Example</h2>

<form action="add-to-dropdownmenu.php" method="post">
<p><input type="submit" name="btnSubmit" value="Add Word" /></p>
<p>Enter word:<br />

<?php
    if (isset($_POST["txtWord"]))
    {
        $word = $_POST["txtWord"];
    }
    else
    {
        $word = "";
    }

    echo <<<HTML
<input type="text" name="txtWord" size="10" value="$word" /> </p>
HTML;

    if (isset($_SESSION["words"]))
    {
        if (isset($_POST["txtWord"]))
        {
            $_SESSION["words"][ ] = $_POST["txtWord"];
        }
    }
    else
    {
        $_SESSION["words"] = array( );
    }

    echo "<p><select name=\"ddmName\">";
    foreach ($_SESSION["words"] as $word)
    {
        echo "<option value=\"{$word}\">$word</option>\n";      
    }
?>
</select></p>
   
</form>
</body>

</html>