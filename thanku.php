<?php
	session_start();
?>

<html>
			
	<head>
		
		<title>Thank You</title>
		

	</head>


	<body>
		

	
		<?php
			$servername="localhost";
			$username="root";
			$password="password";
			$database="users_db";
			$con=mysqli_connect($servername,$username,$password,$database);
			if(!$con)
			{
				die("Connection Failed:".mysqli_connect_error());
			}
							
							
			$var = $_SESSION['username'];
			$sql4 = "DELETE FROM users where users.username='$var'";

			if ($con->query($sql4) === TRUE) 
			{
										
			} 
			else 
			{
				echo "" . $con->error;
			} 
			$con->close();
						
			?>
			<center>
			<h1>Thanks for giving us your precious time !</h1><br><br>
			<a href="logout.php"><input type="button" value="Logout"></input></a>
			</center>
								
		
		
	</body>

</html>