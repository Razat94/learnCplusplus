/*
    This script is used to create a pagination bar.
*/

function isJqueryLoaded() {
    // jQuery is loaded
    if (window.jQuery) {  
        alert("Yeah! jQueries loaded!");
    } 
    // // jQuery is not loaded
    else {
        alert("jQuery doesn't Work");
    }
}

// Function returns the integer that correlates to the chapter page.
// So if this script is called from a page named 'chapter1.html, then function should return the integer value 1. 
function getNumberFromFileName() {
    // Grab current file page name
	// https://stackoverflow.com/questions/16611497/how-can-i-get-the-name-of-an-html-page-in-javascript
	// We oould've alternatively done:
	// alert ( location.pathname.split("/").slice(-1).toString() );
	// This variable would say "home.html" if browser is on the homepage.
    var pageName = window.location.href.split("/").slice(-1).toString();
    
    // Now that we have the full pageURL, take out the file extension. 
	// Remember, strings in JavaScript are immutable, so we need to create a new variable.
	// https://stackoverflow.com/questions/6192169/does-javascript-have-a-method-to-replace-part-of-a-string-without-creating-a-new
    var pageNameWithoutExtension = pageName.replace(".html","");
    
    // Take out the characters "Chp".
    var chapter =  pageNameWithoutExtension.replace("chp","");

    // We'll use the parseInt() method to convert the string into an integer (a whole number).
    chapter = parseInt(chapter);

    // At this point of execution, the variable 'chapter' will be the integer that represents the chapter.
    // So for example, if the script is called on a page called 'chp1.html', 
    // then at this point in time, chapter == 1.      
    return chapter;
}

function leftArrow(pagination, pageNumber) {
    // We need to create a seperate variable to hold the left arrow.
    var leftArrow = "";

    // opening li tag
    // if pageNumber == 0, make li tag disabled.
    if (pageNumber == 0) {
        leftArrow = leftArrow + "<li class=\"page-item disabled\">";
    } else {
        leftArrow = leftArrow + "<li class=\"page-item\">";
    }
    
    // opening anchor tag
    leftArrow = leftArrow + "<a class=\"page-link\"";

    // If pageNumber is NOT equal to 0, assign it a href attribute.
    if (pageNumber != 0) { 
        // href = "./chpX.html"
        leftArrow = leftArrow + "href=\"./chp" + (pageNumber - 1) + ".html\"";
    }

    leftArrow = leftArrow + "aria-label=\"Previous\">";

    // span tag
   leftArrow = leftArrow + "<span aria-hidden=\"true\">&#8249;</span>";

    // closing tag
    leftArrow = leftArrow + "</a> </li>"

    // console.log(leftArrow);
    return leftArrow;
} 

function pageLinks(pagination, pageNumber, lastChapter) {
    // We need to create a links variable to hold the individual pages of the pagination.
    var links = "";
    
    // opening li tag
    // if pageNumber == active page, make li tag active.
    for (var i = 0; i < (lastChapter + 1); i++) {
        if (pageNumber == i) {
            links = links + "<li class=\"page-item active\">";
        } else {
            links = links + "<li class=\"page-item\">";
        }

        // opening anchor tag
        links = links + "<a class=\"page-link\" ";

        // If pageNumber is NOT equal to i (active page), assign it a href attribute.
        // href = "./chpX.html"
        links = links + "href=\"./chp" + i + ".html\">" + i;

        // closing tag
        links = links + "</a> </li>"
    }

    return links;
}

function rightArrow(pagination, pageNumber, lastChapter) {
    // We need to create a seperate variable to hold the left arrow.
    var rightArrow = "";

    // opening li tag
    // if pageNumber == 0, make li tag disabled.
    if (pageNumber == lastChapter) {
        rightArrow = rightArrow + "<li class=\"page-item disabled\">";
    } else {
        rightArrow = rightArrow + "<li class=\"page-item\">";
    }
    
    // opening anchor tag
    rightArrow = rightArrow + "<a class=\"page-link\"";

    // If pageNumber is NOT equal to 0, assign it a href attribute.
    if (pageNumber != lastChapter) { 
        // href = "./chpX.html"
        rightArrow = rightArrow + "href=\"./chp" + (pageNumber + 1) + ".html\"";
    }

    rightArrow = rightArrow + "aria-label=\"Next\">";

    // span tag
   rightArrow = rightArrow + "<span aria-hidden=\"true\">&#8250;</span>";

    // closing tag
    rightArrow = rightArrow + "</a> </li>"
    
    // console.log(rightArrow);
    return rightArrow;
}

// Below this function is the expected HTML output.
$(document).ready(function(){
	
    // Test to see if jQuery is loaded
    // isJqueryLoaded();

    var pagination = "";
    var pageNumber = getNumberFromFileName();

    // I couldn't use Client-Side Javascript (node.js seemed to work) to count # of files in a directory 
    // https://stackoverflow.com/questions/6994212/is-there-a-way-to-return-a-list-of-all-the-image-file-names-from-a-folder-using
    // https://stackoverflow.com/questions/10752055/cross-origin-requests-are-only-supported-for-http-error-when-loading-a-local
    var lastChapter = 11;
    
    // add content
    pagination = pagination + leftArrow(pagination, pageNumber);
    pagination = pagination + pageLinks(pagination, pageNumber, lastChapter);
    pagination = pagination + rightArrow(pagination, pageNumber, lastChapter);

    /* Add the scripted HTML code to actual page. */
    $('.pagination').append(pagination);
})







// Expected HTML Output if script is called from "chp1.html"
/* <div class = "main-pagination" aria-label="Page navigation example">
    <ul class="pagination pagination-sm flex-wrap justify-content-center">
            <li class="page-item">
                <a class="page-link" href="#" aria-label="Previous">
                    <span aria-hidden="true">&#8249;</span>
                </a>
            </li>
            <li class="page-item"><a class="page-link" href="#">0</a></li>
            <li class="page-item active"><a class="page-link" href="#">1</a></li>
            <li class="page-item"><a class="page-link" href="#">2</a></li>
            <li class="page-item"><a class="page-link" href="#">3</a></li>
            <li class="page-item"><a class="page-link" href="#">4</a></li>
            <li class="page-item"><a class="page-link" href="#">5</a></li>
            <li class="page-item"><a class="page-link" href="#">6</a></li>
            <li class="page-item"><a class="page-link" href="#">7</a></li>
            <li class="page-item"><a class="page-link" href="#">8</a></li>
            <li class="page-item"><a class="page-link" href="#">9</a></li>
            <li class="page-item"><a class="page-link" href="#">10</a></li>
            <li class="page-item"><a class="page-link" href="#">11</a></li>
            <li class="page-item">
                <a class="page-link" href="#" aria-label="Next">
                    <span aria-hidden="true">&#8250;</span>
                </a>
            </li>
        </ul>
</div> */