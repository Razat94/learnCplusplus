function myFunction() {
		if ( document.getElementById("headerContainer").style.display == 'block') {
			document.getElementById("headerContainer").style.display = 'none';
			document.getElementById("icon").style.border = "none";
		}
		else {document.getElementById("headerContainer").style.display = 'block'; document.getElementById("icon").style.border = "thin solid #a0a0a0"; }
	}