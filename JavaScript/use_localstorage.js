/* The Web Storage API enables us to preserve data in the browser. 
The localStorage interface can store up to 5MB per domain (in most browsers) 
as opposed to the 4KB limit cookies can store.

you can check it out under Application->Storage->Local Storage in developer tools
in Google Chrome.
*/

// Store a new item in local storage
localStorage.setItem('username', 'Pritam');

// Get an item
console.log(localStorage.getItem('username'));

// Check if an item exists
if (localStorage.getItem('username')) {
    console.log('Item exists!');
}

//Remove an item from storage
localStorage.removeItem('username');
