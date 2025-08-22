<html lang="en">
	<head>
		
		
		<title>Update</title>
	
	</head>


	<body>
		

	
						
	<h1><center>Update Details </center></h1><br><br>
	<form name='register' action="update_confirm.php" method="post">  
	
	<label for="passid">Password:</label>   
	<input type="password" name="passid" minlength="5" maxlength="12" required/><br><br>   
	<label for="username">Name:</label>   
	<input type="text" name="username" value=""   pattern="[A-Za-z-']+\s[A-Za-z-']+" title="Firstname Lastname"/> <br><br>
								 

	<label for="Enroll">Enrollment Number:</label>   
	<input value="+91" size="1"disabled><input type="text" name="contact" size="12" maxlength="10" pattern="[0-9-']+" required/>   <br><br>  
								
	<label for="age">Age:</label>   
	<input type="number" name="age" size="7" pattern="[0-9-']+" />   <br><br>
	<input type="submit" name="submit" value="Submit" /> 
	</form>

		
		
		
	</body>

</html>