<?php
	session_start();
?>
			
	<?php
		$host="localhost"; 		// Host name 
		$username="root"; 		// Mysql username 
		$password="password"; 			// Mysql password 
		$db_name="users_db"; 		// Database name 
		$tbl_name="users"; 	// Table name 

		// Connect to server and select databse.
		$connection = mysqli_connect('localhost', 'root', '', 'demo');
		if (mysqli_connect_errno()) //returns 0 if no error occurs
		{
			echo "Failed to connect to MySQL: " . mysqli_connect_error();
		}


		// username and password sent from form 
		$myusername=$_POST['inpuser']; 
		$mypassword=$_POST['inppass']; 

								
		$sql="SELECT * FROM $tbl_name WHERE username='$myusername' and password='$mypassword'";

		$result=mysqli_query($connection, $sql); //performs query against a db

		// Mysql_num_row is counting table row
		$count=mysqli_num_rows($result);

		// If result matched $myusername and $mypassword, table row must be 1 row
		if($count==1){
			// Register $myusername, $mypassword and redirect to file "login_success.php"
			$_SESSION["username"]= $myusername; 
			$_SESSION["password"]= $mypassword; 
			header("location:login_success.php");
										
			$con=mysqli_connect($host,$username,$password,$db_name);
			if(!$con)
			{
				die("Connection Failed:".mysqli_connect_error());
			}
			else
			{
				$sql1 = "insert into temp(userid) values('$myusername')";
			}
			
			if ($con->query($sql1) == TRUE) 
			{
			}
			$con->close();
									
									
									
		}
		else {
			echo "</br></br>";
			echo "Wrong Username or Password.";		

			}
								
								
								
								
								
						
								
	?><br><br>
	<a href="login.html">Back to login</a>
			
		
	</body>

</html>
