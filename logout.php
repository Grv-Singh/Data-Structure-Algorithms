<?php session_start(); ?>
<html >
	<head>
		
		
		<title>Login</title>

	</head>


	<body>
		

		<?php
			
		?>
								</br> </br>
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
								
			$sql4 = "DELETE FROM temp;";

			if ($con->query($sql4) === TRUE) 
			{
											
			} 
			else 
			{
				echo "" . $con->error;
			} 
			$con->close();
			session_unset(); 

			// destroy the session 
			session_destroy(); 
		?>
								
			</br> </br>
		Session Ended !

		</br> </br>
		<a href="login.html">Back to login page</a>
	


			
		
	</body>

</html>