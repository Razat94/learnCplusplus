/* When a user clicks on the hamburger icon (For devices under 600 px), the following function gets called */
function hamburgerClick() {	
	if ( document.getElementById("headerContainer").style.display == 'block') {
		document.getElementById("headerContainer").style.display = 'none';
	}
	else {
		document.getElementById("headerContainer").style.display = 'block';
	}
}

/* Every time the browser resizes, the function below resizes the navbar */
function resizeNavbar() {
	var width = window.innerWidth;
	if ( width >= 768) {
		document.getElementById("headerContainer").style.display = 'block';
	}
	else {
		document.getElementById("headerContainer").style.display = 'none';
	}
}