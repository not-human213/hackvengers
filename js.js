window.onload = displayInput() 
{
    //document.getElementById("output").innerHTML = "item number:" + number + "quantity:" + quanti;
    console.log("displayInput() function called")
	var number = document.getElementsById("ItNo").value;
    var quanti = document.getElementsById("ItQua").value;
    //var conti_order = document.getElementById("YesNo").value;
	document.getElementById("output").innerHTML = "item number:" + number + "quantity:" + quanti;
}


