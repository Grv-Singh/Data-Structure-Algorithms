
<html >
	<head>
		
		
		<title>Login</title>
		

	</head>


	<body>
		
								
							


		<?php
				$servername = "localhost";
				$username = "root";
				$password = "password";
				$dbname = "users_db";
				$uid = $_POST['fullname'];
				$pass = $_POST['password'];
				$name = $_POST['enroll'];
				$age = $_POST['batch'];
				$cont = $_POST['email'];
								
				$conn = mysqli_connect($servername, $username, $password, $dbname);
				// Check connection
				if (!$conn) {
					die("Connection failed: " . mysqli_connect_error());
					}

				$sql = "INSERT INTO users (name,password,enroll,batch,email)
				VALUES ('$uid', '$pass', '$name','$age','$cont')";

				if (mysqli_query($conn, $sql)) {
					echo "Your account has been created successfully<br>Redirecting to login page in 3 seconds<br>";
					header("refresh:3; url=login.html");
					} 
				else {
					echo "Error: " . $sql . "<br>" . mysqli_error($conn);
					}
									
				mysqli_close($conn);
		?>
								

		
	</body>

</html>