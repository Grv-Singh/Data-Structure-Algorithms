<?php session_start(); ?>
<html >
	<head>
		
		
	<title>Login</title>
		

	</head>


	<body>
		

	<?php
		// Check if session is not registered, redirect back to main page. 
		
		if(!isset($_SESSION['username'])) {
		header("location:Login.html");
		}
	?>

	
								
								
	

								
	<center>							
	Welcome <?php 
								
				$servername="localhost";
				$username="root";
				$password="password";
				$database="users_db";
				$var = $_SESSION['username'];
				$con=mysqli_connect($servername,$username,$password,$database);
				$sql1 = "SELECT * FROM users where users.username='$var'";
				$result = $con->query($sql1);
								
								
				if ($result->num_rows > 0) {
									
					$row = $result->fetch_assoc();
					echo "<br><b>Full Name:</b>".$row["name"]."<br>"."<b>Password:</b>".$row["password"]."<br>"."<b>Enrollment No.:</b>".$row["enroll"]."<br>"."<b>Batch:</b>".$row["batch"]"<br>"."<b>Email Id:</b>".$row["email"];
									
				}
				$con->close();
									
								
								
								
								
			?></center>
	<div>
	<p align="left"><a href="logout.php"><input type="button" value="LOGOUT"></a></p></div>
	<div>
	<p align="center"><a href="updateform.php"><input type="button" value="UPDATE"></a></p></div>
	
	<div>
	<p align="right"><a href="thanku.php"><input type="button" value="DELETE ACCOUNT"></a></p><br><br></div>
			
		
	</body>

</html>
