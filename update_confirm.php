<?php
	session_start();
?>
<html >
	<head>
		
		
		<title>Login</title>
		

	</head>


	<body>
		
								
							


		<?php
				$servername = "localhost";
				$username = "root";
				$password = "password";
				$dbname = "demo";
				$pass = $_POST['passid'];
				$name = $_POST['username'];
				$age = $_POST['age'];
				$cont = $_POST['contact'];
				
				$var = $_SESSION['username'];
								
				$conn = mysqli_connect($servername, $username, $password, $dbname);
				// Check connection
				if (!$conn) {
					die("Connection failed: " . mysqli_connect_error());
					}

				$sql = "UPDATE users SET password='$pass',name='$name',phone='$cont',age='$age' where username='$var'";

				if (mysqli_query($conn, $sql)) {
					echo "Your changes have been updated successfully<br>Redirecting to login page in 3 seconds<br>";
					header("refresh:3; url=login.html");
					} 
				else {
					echo "Error: " . $sql . "<br>" . mysqli_error($conn);
					}
									
				mysqli_close($conn);
		?>
								

		
	</body>

</html>